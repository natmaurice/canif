#ifndef CANIF_MAT3D_HPP_
#define CANIF_MAT3D_HPP_

#include <cstdint>

namespace canif {

struct dim3D {
    int64_t slicemin, slicemax;
    int64_t rowmin, rowmax;
    int64_t colmin, colmax;
};
    

};

#include "mat3d-functions.hpp"

#endif // CANIF_MAT3D_HPP_
