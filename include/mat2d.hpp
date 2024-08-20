#ifndef CANIF_MAT2D_HPP_
#define CANIF_MAT2D_HPP_

#include <cstdint>

namespace canif {

struct dim2D {
    int64_t rowmin, rowmax;
    int64_t colmin, colmax;
};
    
struct Mat2D_u32 {

    struct {
	unsigned* data;
	uint64_t dims[4];
    } data;
    
    int64_t width;
    int64_t height;
};

};

#include "mat2d-functions.hpp"


namespace canif {

struct PNGInfo {
    int channel_depth = 0;
    int channels = 0;
    int color_type = 0;

    bool operator==(const PNGInfo& info) const;
};

// Load image from PNG file
// Note: Assume that `mat` is not allocated
// These functions return 0 on success and < 0 otherwise
int mat2D_u8_LoadPNG(const char *dst_filename, uint8_t **&mat,
                     struct dim2D &dims, struct PNGInfo& info);

int mat2D_u16_LoadTIFF(const char* dst_filename, uint16_t**& mat,
		       struct dim2D& dims);

int mat2D_u8_SavePNG(const char *dst_filename, uint8_t **mat,
                     struct dim2D dims, struct PNGInfo info);

int mat2D_u16_SaveTIFF(const char *dst_filename, uint16_t **mat,
                       struct dim2D& dims);


void mat2D_f32_convolution(const float *const *const src, float** dst, struct dim2D matdims,
			   const float *const *const conv, struct dim2D convdims);

};

#endif // CANIF_MAT2D_HPP_
