#include "mat2d.hpp"
#include "mat2d-functions.hpp"

#include <cstdio>
#include <string>
#include <cstdlib>
#include <iostream>


#if defined(CANIF_USE_PNG)

#include <csetjmp>
#include <png.h>
#include <zlib.h>

#endif // CANIF_USE_PNG


namespace canif {


bool PNGInfo::operator==(const PNGInfo& info) const {
    return channel_depth == info.channel_depth
	&& channels == info.channels
	&& color_type == info.color_type;
}


#if defined(CANIF_USE_PNG)

int mat2D_u8_LoadPNG(const char *dst_filename, uint8_t **&mat,
                     struct dim2D& dims, struct PNGInfo& info) {
    
    FILE* file = fopen(dst_filename, "r");
    png_structp png_ptr = nullptr;
    png_infop info_ptr = nullptr;
    png_infop end_info = nullptr;

    int bit_depth = 0;
    
    uint8_t** row_pointers = nullptr;

    int width = 0, height = 0;

    int status = -1;
    
    // Ensure 8-bits per pixel
    constexpr int transforms = PNG_TRANSFORM_SCALE_16 | PNG_TRANSFORM_PACKING;
    
    mat = nullptr;
    if (!file) {
	std::cerr << "File not found: " << dst_filename << "; " << __FILE__ << ", L" << __LINE__ << "\n";
	return -1;
    }    
    
    constexpr size_t PNG_HEADER_SIZE = 8;
    unsigned char header[PNG_HEADER_SIZE];

    fread(header, 1, PNG_HEADER_SIZE, file);
    int is_png = !png_sig_cmp(header, 0, PNG_HEADER_SIZE);
    if (!is_png) {
	std::cerr << "File " << dst_filename << " is not a PNG image\n";
	goto clean;
    }
    
    png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING, nullptr, nullptr, nullptr);

    if (!png_ptr) {
	std::cerr << "Could not allocate png_read_struct: " << __FILE__ << ", L" << __LINE__ << "\n";
	goto clean;
    }

    info_ptr = png_create_info_struct(png_ptr);
    if (!info_ptr) {
	std::cerr << "Could not create png_info_struct; "  << __FILE__ << ", L" << __LINE__ << "\n";
	goto clean;
    }

    end_info = png_create_info_struct(png_ptr);
    if (!end_info) {
	std::cerr << "Could not create end info struct; " << __FILE__ << ", L" << __LINE__ << "\n";
	goto clean;
    }

    if (setjmp(png_jmpbuf(png_ptr))) {
	std::cerr << "Could not set up jmpbuf; " << __FILE__ << ", L" << __LINE__ << "\n";
	goto clean;
    }

    png_init_io(png_ptr, file);
    png_set_sig_bytes(png_ptr, PNG_HEADER_SIZE);


    png_read_png(png_ptr, info_ptr, transforms, nullptr);

    info.channel_depth = png_get_bit_depth(png_ptr, info_ptr);
    if (info.channel_depth != 8) {
	std::cerr << "Wrong png bit depth ( " << info.channel_depth <<" ; " << __FILE__ << ", L" << __LINE__ << "\n";
	goto clean;
    }

    info.channels = png_get_channels(png_ptr, info_ptr);
    info.color_type = png_get_color_type(png_ptr, info_ptr);
    
    row_pointers = png_get_rows(png_ptr, info_ptr);
    if (!row_pointers) {
	std::cerr << "Could not get row pointers; " << __FILE__ << ", L" << __LINE__ << "\n";
	goto clean;
    }
    
    width = png_get_image_width(png_ptr, info_ptr);
    height = png_get_image_height(png_ptr, info_ptr);

    dims.rowmin = 0;
    dims.colmin = 0;
    dims.rowmax = height;
    dims.colmax = width * info.channels;

    mat = mat2D_u8_create(dims);

    canif::mat2D_u8_copy(row_pointers, mat, dims);

    std::cout << "Sucessfully loaded PNG" << std::endl;
    status = 0;
    
  clean:
    png_destroy_read_struct(&png_ptr, &info_ptr, &end_info);
    fclose(file);
    std::cerr.flush();
    return status;
}

int mat2D_u16_LoadTIFF(const char* dst_filename, uint16_t**& mat,
		       struct dim2D dims) {
    return -1;
}

int mat2D_u8_SavePNG(const char *dst_filename, uint8_t** mat,
                     struct dim2D dims, struct PNGInfo params) {

    FILE* file = nullptr;
    int status = -1;
    png_structp png_ptr = nullptr;
    png_infop info_ptr = nullptr;

    int width = dims.colmax - dims.colmin;
    int height = dims.rowmax - dims.rowmin;
    int channel_depth = params.channel_depth;
    int color_type = PNG_COLOR_TYPE_GRAY;
    int interlace_method = PNG_INTERLACE_NONE;
    int compression_method = PNG_COMPRESSION_TYPE_DEFAULT;
    int filter_method = PNG_FILTER_TYPE_DEFAULT;
    
    struct dim2D cpydims;
    cpydims.colmin = 0;
    cpydims.colmax = width;
    cpydims.rowmin = 0;
    cpydims.rowmax = height;
    uint8_t** cpymat = mat2D_u8_create(cpydims);
    mat2D_u8_copyat(mat, cpymat, dims, dims.rowmin, dims.colmin);
    
    if (params.channels == 1) {
	color_type = PNG_COLOR_TYPE_GRAY;
	width = dims.colmax - dims.colmin;
    } else if (params.channels == 3) {
	color_type = PNG_COLOR_TYPE_RGB;
	width = (dims.colmax - dims.colmin) / 3;
    } else if (params.channels == 4) {
	color_type = PNG_COLOR_TYPE_RGBA;
	width = (dims.colmax - dims.colmin) / 4;
    }
    
    file = fopen(dst_filename, "wb");
    if (!file) {
	std::cerr << "Could not open file " << file << "; " << __FILE__ << ", L" << __LINE__ << "\n";
	goto clean;
    }

    png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, nullptr, nullptr, nullptr);
    if (!png_ptr) {
	std::cerr << "Could not create png_write_struct; " << __FILE__ << ", L" << __LINE__ << "\n";
	goto clean;
    }

    info_ptr = png_create_info_struct(png_ptr);
    if (!info_ptr) {
	std::cerr << "Could not create PNG info ptr; " << __FILE__ << ", " << __LINE__ << "\n";
	goto clean;
    }

    if (setjmp(png_jmpbuf(png_ptr))) {
	std::cerr << "Could not set up PNG Jump buf; " << __FILE__ << ", " << __LINE__ << "\n";
	goto clean;
    }

    png_init_io(png_ptr, file);

    png_set_IHDR(png_ptr, info_ptr, width, height, channel_depth, color_type, interlace_method,
		 compression_method, filter_method);
    
    png_write_info(png_ptr, info_ptr);

    png_write_image(png_ptr, cpymat);
    png_write_end(png_ptr, info_ptr);
    

    status = 0;
  clean:
    mat2D_u8_free(cpymat, cpydims);    
    png_destroy_write_struct(&png_ptr, &info_ptr);
    
    fclose(file);
    return status;
}
int mat2D_u16_SaveTIFF(const char *dst_filename, uint16_t **mat,
                       struct dim2D dims) {
    return -1;
}

#endif // CANIF_USE_PNG

void mat2D_f32_convolution(const float *const *const src, float** dst, struct dim2D matdims,
			   const float *const *const conv, struct dim2D convdims) {

    
    
}

};
