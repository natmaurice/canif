#include "mat1d-functions.hpp"
#include "mat2d-functions.hpp"
#include "mat3d-functions.hpp"
#include <png.h>
#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

#include <mat1d.hpp>
#include <mat2d.hpp>
#include <mat3d.hpp>
#include <iostream>

TEST_CASE("1D Matrix") {
    struct canif::dim1D dims;
    dims.nmin = -3;
    dims.nmax = 512;

    int32_t* mat = canif::mat1D_i32_create(dims);

    canif::mat1D_i32_fill(mat, dims, 0);

    for (int i = dims.nmin; i < dims.nmax; i++) {
	REQUIRE(mat[i] == 0);
    }
    
    canif::mat1D_i32_free(mat, dims);
}

TEST_CASE("2D Matrix") {
    struct canif::dim2D dims;
    dims.colmin = -3;
    dims.colmax = 512;
    dims.rowmin = -3;
    dims.rowmax = 512;
    
    
    int32_t** mat = canif::mat2D_i32_create(dims);

    canif::mat2D_i32_fill(mat, dims, 0);    
    
    for (int i = dims.rowmin; i < dims.rowmax; i++) {
	for (int j = dims.colmin; j < dims.colmax; j++) {
	    REQUIRE(mat[i][j] == 0);
	}
    }
    
    canif::mat2D_i32_free(mat, dims);    
}

TEST_CASE("3D Matrix") {
    struct canif::dim3D dims;
    dims.colmin = -3;
    dims.colmax = 64;
    dims.rowmin = -3;
    dims.rowmax = 64;
    dims.slicemin = -3;
    dims.slicemax = 64;
    
    int32_t*** mat = canif::mat3D_i32_create(dims);

    canif::mat3D_i32_fill(mat, dims, 0);    

    for (int s = dims.slicemin; s < dims.slicemax; s++) {
	for (int r = dims.rowmin; r < dims.rowmax; r++) {
	    for (int c = dims.colmin; c < dims.colmax; c++) {
		REQUIRE(mat[s][r][c] == 0);
	    }
	}
    }
    
    canif::mat3D_i32_free(mat, dims);    
}


TEST_CASE("PNG Save/Load") {
    // This test create an image file named 'test-grayscale.png' and 'test-rgb.png'
    // in current directory

    
    SECTION("Grayscale PNG") {
	const char* filename_gray = "test-grayscale.png";

	canif::dim2D srcdims;
	srcdims.colmin = 0;
	srcdims.colmax = 24;
	srcdims.rowmin = 0;
	srcdims.rowmax = 16;

	canif::PNGInfo png_params;
	png_params.channel_depth = 8;
	png_params.color_type = PNG_COLOR_TYPE_GRAY;
	png_params.channels = 1;
	
	uint8_t** src_mat = canif::mat2D_u8_create(srcdims);

	canif::mat2D_u8_fill(src_mat, srcdims, 0);
	
	canif::mat2D_u8_SavePNG(filename_gray, src_mat, srcdims, png_params);

	canif::dim2D dstdims;
	uint8_t** dst_mat = nullptr;

	canif::PNGInfo read_info;
	int status = canif::mat2D_u8_LoadPNG(filename_gray, dst_mat, dstdims, read_info);
	REQUIRE(status == 0);
	REQUIRE(read_info == png_params);
	
	REQUIRE(dstdims.colmin == 0);
	REQUIRE(dstdims.colmax == (srcdims.colmax - srcdims.colmin));
	REQUIRE(dstdims.rowmin == 0);
	REQUIRE(dstdims.rowmax == (srcdims.rowmax - srcdims.rowmin));
	
	for (int r = srcdims.rowmin; r < srcdims.rowmax; r++) {
	    for (int c = srcdims.colmin; c < srcdims.colmax; c++) {
		REQUIRE(src_mat[r][c] == dst_mat[r][c]);
	    }
	}
	
	canif::mat2D_u8_free(src_mat, srcdims);
	canif::mat2D_u8_free(dst_mat, dstdims);
	
    }
    SECTION("RGB PNG") {
	
	const char* filename_rgb = "test-rgb.png";

	canif::dim2D srcdims;
	srcdims.colmin = 0;
	srcdims.colmax = 24;
	srcdims.rowmin = 0;
	srcdims.rowmax = 16;

	canif::PNGInfo png_params;
	png_params.channel_depth = 8;
	png_params.channels = 3;
	png_params.color_type = PNG_COLOR_TYPE_GRAY;
	
	uint8_t** src_mat = canif::mat2D_u8_create(srcdims);

	canif::mat2D_u8_fill(src_mat, srcdims, 0);
	
	canif::mat2D_u8_SavePNG(filename_rgb, src_mat, srcdims, png_params);

	

	canif::mat2D_u8_free(src_mat, srcdims);
    }
    SECTION("RGB Test") {
	uint8_t** mat = nullptr;
	canif::dim2D dims;

	const char* filename = "test-image.png";
	const char* dstfilename = "test-image-invert.png";
	canif::PNGInfo info;
	
	int status = canif::mat2D_u8_LoadPNG(filename, mat, dims, info);
	REQUIRE(status == 0);

	if (info.color_type == PNG_COLOR_TYPE_RGBA) {
	    for (int r = dims.rowmin; r < dims.rowmax; r++) {
		for (int c = dims.colmin; c < dims.colmax; c += 4) {
		    mat[r][c + 0] = ~mat[r][c + 0];
		    mat[r][c + 1] = ~mat[r][c + 1];
		    mat[r][c + 2] = ~mat[r][c + 2];
		    //mat[r][c + 3] = ~mat[r][c + 3];
		}
	    }
	}
	
	status = canif::mat2D_u8_SavePNG(dstfilename, mat, dims, info);
	REQUIRE(status == 0);
	
	canif::mat2D_u8_free(mat, dims);
    }
    
}

TEST_CASE("Swizzle 1D") {
  
    canif::dim1D dim1;
    dim1.nmin = -2;
    dim1.nmax = 4;
    
    int channels = 3;

    canif::dim2D dim2;
    dim2.rowmin = 0;
    dim2.rowmax = 3;
    dim2.colmin = -2;
    dim2.colmax = 0;
    
    uint32_t* array = canif::mat1D_u32_create(dim1);
    uint32_t* result = canif::mat1D_u32_create(dim1);
    uint32_t** mat = canif::mat2D_u32_create(dim2);

    for (int i = dim1.nmin, v = 0; i < dim1.nmax; i++, v++) {
	array[i] = v;
    }
    
    canif::mat1D_u32_unpack(array, mat, dim1, channels);

    for (int r = dim2.rowmin; r < dim2.rowmax; r++) {
	for (int c = dim2.colmin; c < dim2.colmax; c++) {
	    //int off = r + c * channels;
	    std::cout << mat[r][c] << " ";
	    //REQUIRE(mat[r][c] == array[off]);
	}
	std::cout << "\n";
    }
    std::cout << "\n";
    
    
    canif::mat2D_u32_pack(mat, result, dim2);

    for (int i = dim1.nmin; i < dim1.nmax; i++) {
	REQUIRE(result[i] == array[i]);
    }
    
    canif::mat1D_u32_free(array, dim1);
    canif::mat1D_u32_free(result, dim1);
    canif::mat2D_u32_free(mat, dim2);
}

TEST_CASE("Swizzle 2D") {
    canif::dim2D dim2;
    canif::dim3D dim3;
    int channels = 3;

    dim2.colmin = -2;
    dim2.colmax = 4;
    dim2.rowmin = -1;
    dim2.rowmax = 3;

    dim3.colmin = -2;
    dim3.colmax = 0;
    dim3.rowmin = -1;
    dim3.rowmax = 3;
    dim3.slicemin = 0;
    dim3.slicemax = channels;
    
    uint32_t** mat_src = canif::mat2D_u32_create(dim2);
    uint32_t** mat_res = canif::mat2D_u32_create(dim2);
    uint32_t*** tensor = canif::mat3D_u32_create(dim3);
    
    int i = 0;
    for (int r = dim2.rowmin; r < dim2.rowmax; r++) {
	for (int c = dim2.colmin; c < dim2.colmax; c++) {

	    mat_src[r][c] = i;
	    i++;
	}	    
    }

    canif::mat2D_u32_unpack(mat_src, tensor, dim2, channels);
    canif::mat3D_u32_pack(tensor, mat_res, dim3);

    for (int r = dim2.rowmin; r < dim2.rowmax; r++) {
	for (int c = dim2.colmin; c < dim2.colmax; c++) {
	    REQUIRE(mat_res[r][c] == mat_src[r][c]);
	}
    }
    
    canif::mat2D_u32_free(mat_src, dim2);
    canif::mat2D_u32_free(mat_res, dim2);
    canif::mat3D_u32_free(tensor, dim3);
    
}  
