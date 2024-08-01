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

#endif // CANIF_MAT2D_HPP_
