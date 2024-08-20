// NOTE: This file is auto-generated.

#include "mat3d.hpp"
#include "utils.hpp"

#include <cstdint>

namespace canif {

constexpr size_t ALIGNMENT = 64;

// 3D

// Allocation functions


uint8_t*** mat3D_u8_create(struct dim3D dims) {
    using T = uint8_t;
    int64_t nrows = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t nslices = dims.slicemax - dims.slicemin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    int64_t slicepitch = rowpitch * nrows;
    T* mat  = aligned_new<T>(nslices * slicepitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nslices * nrows, ALIGNMENT);
    T*** iimat = aligned_new<T**>(nslices, ALIGNMENT);
  
    mat -= (slicepitch * dims.slicemin + rowpitch * dims.rowmin + dims.colmin);
    imat -= (nrows * dims.slicemin + dims.rowmin);
    iimat -= dims.slicemin;

    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        iimat[s] = imat + s * nrows;
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            iimat[s][r] = mat + r * rowpitch + s * slicepitch;
        }
    }
  
    return iimat;
}

uint16_t*** mat3D_u16_create(struct dim3D dims) {
    using T = uint16_t;
    int64_t nrows = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t nslices = dims.slicemax - dims.slicemin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    int64_t slicepitch = rowpitch * nrows;
    T* mat  = aligned_new<T>(nslices * slicepitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nslices * nrows, ALIGNMENT);
    T*** iimat = aligned_new<T**>(nslices, ALIGNMENT);
  
    mat -= (slicepitch * dims.slicemin + rowpitch * dims.rowmin + dims.colmin);
    imat -= (nrows * dims.slicemin + dims.rowmin);
    iimat -= dims.slicemin;

    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        iimat[s] = imat + s * nrows;
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            iimat[s][r] = mat + r * rowpitch + s * slicepitch;
        }
    }
  
    return iimat;
}

uint32_t*** mat3D_u32_create(struct dim3D dims) {
    using T = uint32_t;
    int64_t nrows = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t nslices = dims.slicemax - dims.slicemin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    int64_t slicepitch = rowpitch * nrows;
    T* mat  = aligned_new<T>(nslices * slicepitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nslices * nrows, ALIGNMENT);
    T*** iimat = aligned_new<T**>(nslices, ALIGNMENT);
  
    mat -= (slicepitch * dims.slicemin + rowpitch * dims.rowmin + dims.colmin);
    imat -= (nrows * dims.slicemin + dims.rowmin);
    iimat -= dims.slicemin;

    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        iimat[s] = imat + s * nrows;
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            iimat[s][r] = mat + r * rowpitch + s * slicepitch;
        }
    }
  
    return iimat;
}

uint64_t*** mat3D_u64_create(struct dim3D dims) {
    using T = uint64_t;
    int64_t nrows = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t nslices = dims.slicemax - dims.slicemin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    int64_t slicepitch = rowpitch * nrows;
    T* mat  = aligned_new<T>(nslices * slicepitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nslices * nrows, ALIGNMENT);
    T*** iimat = aligned_new<T**>(nslices, ALIGNMENT);
  
    mat -= (slicepitch * dims.slicemin + rowpitch * dims.rowmin + dims.colmin);
    imat -= (nrows * dims.slicemin + dims.rowmin);
    iimat -= dims.slicemin;

    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        iimat[s] = imat + s * nrows;
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            iimat[s][r] = mat + r * rowpitch + s * slicepitch;
        }
    }
  
    return iimat;
}

int8_t*** mat3D_i8_create(struct dim3D dims) {
    using T = int8_t;
    int64_t nrows = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t nslices = dims.slicemax - dims.slicemin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    int64_t slicepitch = rowpitch * nrows;
    T* mat  = aligned_new<T>(nslices * slicepitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nslices * nrows, ALIGNMENT);
    T*** iimat = aligned_new<T**>(nslices, ALIGNMENT);
  
    mat -= (slicepitch * dims.slicemin + rowpitch * dims.rowmin + dims.colmin);
    imat -= (nrows * dims.slicemin + dims.rowmin);
    iimat -= dims.slicemin;

    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        iimat[s] = imat + s * nrows;
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            iimat[s][r] = mat + r * rowpitch + s * slicepitch;
        }
    }
  
    return iimat;
}

int16_t*** mat3D_i16_create(struct dim3D dims) {
    using T = int16_t;
    int64_t nrows = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t nslices = dims.slicemax - dims.slicemin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    int64_t slicepitch = rowpitch * nrows;
    T* mat  = aligned_new<T>(nslices * slicepitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nslices * nrows, ALIGNMENT);
    T*** iimat = aligned_new<T**>(nslices, ALIGNMENT);
  
    mat -= (slicepitch * dims.slicemin + rowpitch * dims.rowmin + dims.colmin);
    imat -= (nrows * dims.slicemin + dims.rowmin);
    iimat -= dims.slicemin;

    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        iimat[s] = imat + s * nrows;
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            iimat[s][r] = mat + r * rowpitch + s * slicepitch;
        }
    }
  
    return iimat;
}

int32_t*** mat3D_i32_create(struct dim3D dims) {
    using T = int32_t;
    int64_t nrows = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t nslices = dims.slicemax - dims.slicemin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    int64_t slicepitch = rowpitch * nrows;
    T* mat  = aligned_new<T>(nslices * slicepitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nslices * nrows, ALIGNMENT);
    T*** iimat = aligned_new<T**>(nslices, ALIGNMENT);
  
    mat -= (slicepitch * dims.slicemin + rowpitch * dims.rowmin + dims.colmin);
    imat -= (nrows * dims.slicemin + dims.rowmin);
    iimat -= dims.slicemin;

    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        iimat[s] = imat + s * nrows;
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            iimat[s][r] = mat + r * rowpitch + s * slicepitch;
        }
    }
  
    return iimat;
}

int64_t*** mat3D_i64_create(struct dim3D dims) {
    using T = int64_t;
    int64_t nrows = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t nslices = dims.slicemax - dims.slicemin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    int64_t slicepitch = rowpitch * nrows;
    T* mat  = aligned_new<T>(nslices * slicepitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nslices * nrows, ALIGNMENT);
    T*** iimat = aligned_new<T**>(nslices, ALIGNMENT);
  
    mat -= (slicepitch * dims.slicemin + rowpitch * dims.rowmin + dims.colmin);
    imat -= (nrows * dims.slicemin + dims.rowmin);
    iimat -= dims.slicemin;

    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        iimat[s] = imat + s * nrows;
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            iimat[s][r] = mat + r * rowpitch + s * slicepitch;
        }
    }
  
    return iimat;
}

float*** mat3D_f32_create(struct dim3D dims) {
    using T = float;
    int64_t nrows = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t nslices = dims.slicemax - dims.slicemin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    int64_t slicepitch = rowpitch * nrows;
    T* mat  = aligned_new<T>(nslices * slicepitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nslices * nrows, ALIGNMENT);
    T*** iimat = aligned_new<T**>(nslices, ALIGNMENT);
  
    mat -= (slicepitch * dims.slicemin + rowpitch * dims.rowmin + dims.colmin);
    imat -= (nrows * dims.slicemin + dims.rowmin);
    iimat -= dims.slicemin;

    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        iimat[s] = imat + s * nrows;
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            iimat[s][r] = mat + r * rowpitch + s * slicepitch;
        }
    }
  
    return iimat;
}

double*** mat3D_f64_create(struct dim3D dims) {
    using T = double;
    int64_t nrows = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t nslices = dims.slicemax - dims.slicemin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    int64_t slicepitch = rowpitch * nrows;
    T* mat  = aligned_new<T>(nslices * slicepitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nslices * nrows, ALIGNMENT);
    T*** iimat = aligned_new<T**>(nslices, ALIGNMENT);
  
    mat -= (slicepitch * dims.slicemin + rowpitch * dims.rowmin + dims.colmin);
    imat -= (nrows * dims.slicemin + dims.rowmin);
    iimat -= dims.slicemin;

    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        iimat[s] = imat + s * nrows;
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            iimat[s][r] = mat + r * rowpitch + s * slicepitch;
        }
    }
  
    return iimat;
}


// Free functions


void mat3D_u8_free(uint8_t*** mat, struct dim3D dims) {
    using T = uint8_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = &mat[dims.slicemin][dims.rowmin][dims.colmin];
    T** pimat = &mat[dims.slicemin][dims.rowmin];
    T*** piimat = &mat[dims.slicemin];
  
    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);
    aligned_delete(piimat, ALIGNMENT);
}

void mat3D_u16_free(uint16_t*** mat, struct dim3D dims) {
    using T = uint16_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = &mat[dims.slicemin][dims.rowmin][dims.colmin];
    T** pimat = &mat[dims.slicemin][dims.rowmin];
    T*** piimat = &mat[dims.slicemin];
  
    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);
    aligned_delete(piimat, ALIGNMENT);
}

void mat3D_u32_free(uint32_t*** mat, struct dim3D dims) {
    using T = uint32_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = &mat[dims.slicemin][dims.rowmin][dims.colmin];
    T** pimat = &mat[dims.slicemin][dims.rowmin];
    T*** piimat = &mat[dims.slicemin];
  
    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);
    aligned_delete(piimat, ALIGNMENT);
}

void mat3D_u64_free(uint64_t*** mat, struct dim3D dims) {
    using T = uint64_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = &mat[dims.slicemin][dims.rowmin][dims.colmin];
    T** pimat = &mat[dims.slicemin][dims.rowmin];
    T*** piimat = &mat[dims.slicemin];
  
    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);
    aligned_delete(piimat, ALIGNMENT);
}

void mat3D_i8_free(int8_t*** mat, struct dim3D dims) {
    using T = int8_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = &mat[dims.slicemin][dims.rowmin][dims.colmin];
    T** pimat = &mat[dims.slicemin][dims.rowmin];
    T*** piimat = &mat[dims.slicemin];
  
    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);
    aligned_delete(piimat, ALIGNMENT);
}

void mat3D_i16_free(int16_t*** mat, struct dim3D dims) {
    using T = int16_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = &mat[dims.slicemin][dims.rowmin][dims.colmin];
    T** pimat = &mat[dims.slicemin][dims.rowmin];
    T*** piimat = &mat[dims.slicemin];
  
    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);
    aligned_delete(piimat, ALIGNMENT);
}

void mat3D_i32_free(int32_t*** mat, struct dim3D dims) {
    using T = int32_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = &mat[dims.slicemin][dims.rowmin][dims.colmin];
    T** pimat = &mat[dims.slicemin][dims.rowmin];
    T*** piimat = &mat[dims.slicemin];
  
    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);
    aligned_delete(piimat, ALIGNMENT);
}

void mat3D_i64_free(int64_t*** mat, struct dim3D dims) {
    using T = int64_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = &mat[dims.slicemin][dims.rowmin][dims.colmin];
    T** pimat = &mat[dims.slicemin][dims.rowmin];
    T*** piimat = &mat[dims.slicemin];
  
    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);
    aligned_delete(piimat, ALIGNMENT);
}

void mat3D_f32_free(float*** mat, struct dim3D dims) {
    using T = float;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = &mat[dims.slicemin][dims.rowmin][dims.colmin];
    T** pimat = &mat[dims.slicemin][dims.rowmin];
    T*** piimat = &mat[dims.slicemin];
  
    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);
    aligned_delete(piimat, ALIGNMENT);
}

void mat3D_f64_free(double*** mat, struct dim3D dims) {
    using T = double;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = &mat[dims.slicemin][dims.rowmin][dims.colmin];
    T** pimat = &mat[dims.slicemin][dims.rowmin];
    T*** piimat = &mat[dims.slicemin];
  
    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);
    aligned_delete(piimat, ALIGNMENT);
}


// Fill functions


void mat3D_u8_fill(uint8_t*** mat, struct dim3D dims, uint8_t val) {
    using T = uint8_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            T* line = mat[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                line[c] = val;
            }
        }
    }
}

void mat3D_u16_fill(uint16_t*** mat, struct dim3D dims, uint16_t val) {
    using T = uint16_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            T* line = mat[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                line[c] = val;
            }
        }
    }
}

void mat3D_u32_fill(uint32_t*** mat, struct dim3D dims, uint32_t val) {
    using T = uint32_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            T* line = mat[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                line[c] = val;
            }
        }
    }
}

void mat3D_u64_fill(uint64_t*** mat, struct dim3D dims, uint64_t val) {
    using T = uint64_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            T* line = mat[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                line[c] = val;
            }
        }
    }
}

void mat3D_i8_fill(int8_t*** mat, struct dim3D dims, int8_t val) {
    using T = int8_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            T* line = mat[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                line[c] = val;
            }
        }
    }
}

void mat3D_i16_fill(int16_t*** mat, struct dim3D dims, int16_t val) {
    using T = int16_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            T* line = mat[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                line[c] = val;
            }
        }
    }
}

void mat3D_i32_fill(int32_t*** mat, struct dim3D dims, int32_t val) {
    using T = int32_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            T* line = mat[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                line[c] = val;
            }
        }
    }
}

void mat3D_i64_fill(int64_t*** mat, struct dim3D dims, int64_t val) {
    using T = int64_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            T* line = mat[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                line[c] = val;
            }
        }
    }
}

void mat3D_f32_fill(float*** mat, struct dim3D dims, float val) {
    using T = float;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            T* line = mat[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                line[c] = val;
            }
        }
    }
}

void mat3D_f64_fill(double*** mat, struct dim3D dims, double val) {
    using T = double;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            T* line = mat[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                line[c] = val;
            }
        }
    }
}



// Copy functions


void mat3D_u8_copy(const uint8_t*const *const *const src, uint8_t*** dst, struct dim3D dims) {
    using T = uint8_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                  dstline[c] = srcline[c];
            }
        }
    }
}

void mat3D_u16_copy(const uint16_t*const *const *const src, uint16_t*** dst, struct dim3D dims) {
    using T = uint16_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                  dstline[c] = srcline[c];
            }
        }
    }
}

void mat3D_u32_copy(const uint32_t*const *const *const src, uint32_t*** dst, struct dim3D dims) {
    using T = uint32_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                  dstline[c] = srcline[c];
            }
        }
    }
}

void mat3D_u64_copy(const uint64_t*const *const *const src, uint64_t*** dst, struct dim3D dims) {
    using T = uint64_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                  dstline[c] = srcline[c];
            }
        }
    }
}

void mat3D_i8_copy(const int8_t*const *const *const src, int8_t*** dst, struct dim3D dims) {
    using T = int8_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                  dstline[c] = srcline[c];
            }
        }
    }
}

void mat3D_i16_copy(const int16_t*const *const *const src, int16_t*** dst, struct dim3D dims) {
    using T = int16_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                  dstline[c] = srcline[c];
            }
        }
    }
}

void mat3D_i32_copy(const int32_t*const *const *const src, int32_t*** dst, struct dim3D dims) {
    using T = int32_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                  dstline[c] = srcline[c];
            }
        }
    }
}

void mat3D_i64_copy(const int64_t*const *const *const src, int64_t*** dst, struct dim3D dims) {
    using T = int64_t;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                  dstline[c] = srcline[c];
            }
        }
    }
}

void mat3D_f32_copy(const float*const *const *const src, float*** dst, struct dim3D dims) {
    using T = float;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                  dstline[c] = srcline[c];
            }
        }
    }
}

void mat3D_f64_copy(const double*const *const *const src, double*** dst, struct dim3D dims) {
    using T = double;
    for (int64_t s = dims.slicemin; s < dims.slicemax; s++) {
        for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s][r];
            for (int64_t c = dims.colmin; c < dims.colmax; c++) {
                  dstline[c] = srcline[c];
            }
        }
    }
}




void mat3D_u8_copyat(const uint8_t*const *const *const src, uint8_t*** dst, struct dim3D srcdims, int dsts, int dstr, int dstc) {
    using T = uint8_t;
    for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s + dsts][r + dstr];
            for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
                  dstline[c + dstc] = srcline[c];
            }
        }
    }
}

void mat3D_u16_copyat(const uint16_t*const *const *const src, uint16_t*** dst, struct dim3D srcdims, int dsts, int dstr, int dstc) {
    using T = uint16_t;
    for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s + dsts][r + dstr];
            for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
                  dstline[c + dstc] = srcline[c];
            }
        }
    }
}

void mat3D_u32_copyat(const uint32_t*const *const *const src, uint32_t*** dst, struct dim3D srcdims, int dsts, int dstr, int dstc) {
    using T = uint32_t;
    for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s + dsts][r + dstr];
            for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
                  dstline[c + dstc] = srcline[c];
            }
        }
    }
}

void mat3D_u64_copyat(const uint64_t*const *const *const src, uint64_t*** dst, struct dim3D srcdims, int dsts, int dstr, int dstc) {
    using T = uint64_t;
    for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s + dsts][r + dstr];
            for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
                  dstline[c + dstc] = srcline[c];
            }
        }
    }
}

void mat3D_i8_copyat(const int8_t*const *const *const src, int8_t*** dst, struct dim3D srcdims, int dsts, int dstr, int dstc) {
    using T = int8_t;
    for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s + dsts][r + dstr];
            for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
                  dstline[c + dstc] = srcline[c];
            }
        }
    }
}

void mat3D_i16_copyat(const int16_t*const *const *const src, int16_t*** dst, struct dim3D srcdims, int dsts, int dstr, int dstc) {
    using T = int16_t;
    for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s + dsts][r + dstr];
            for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
                  dstline[c + dstc] = srcline[c];
            }
        }
    }
}

void mat3D_i32_copyat(const int32_t*const *const *const src, int32_t*** dst, struct dim3D srcdims, int dsts, int dstr, int dstc) {
    using T = int32_t;
    for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s + dsts][r + dstr];
            for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
                  dstline[c + dstc] = srcline[c];
            }
        }
    }
}

void mat3D_i64_copyat(const int64_t*const *const *const src, int64_t*** dst, struct dim3D srcdims, int dsts, int dstr, int dstc) {
    using T = int64_t;
    for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s + dsts][r + dstr];
            for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
                  dstline[c + dstc] = srcline[c];
            }
        }
    }
}

void mat3D_f32_copyat(const float*const *const *const src, float*** dst, struct dim3D srcdims, int dsts, int dstr, int dstc) {
    using T = float;
    for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s + dsts][r + dstr];
            for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
                  dstline[c + dstc] = srcline[c];
            }
        }
    }
}

void mat3D_f64_copyat(const double*const *const *const src, double*** dst, struct dim3D srcdims, int dsts, int dstr, int dstc) {
    using T = double;
    for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            const T* srcline = src[s][r];
            T* dstline = dst[s + dsts][r + dstr];
            for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
                  dstline[c + dstc] = srcline[c];
            }
        }
    }
}


// Pack functions
// Convert a matrix of size [Z; N] into a 1D array of size [NxZ] (with Z channels).
// This is equivalence to a SoA => AoS transformation and is the opposite operation of mat1D_T_unpack() functions
// Note: Destination array must be pre-allocated



void mat3D_u8_pack(const uint8_t *const *const *const src, uint8_t** dst, struct dim3D srcdims) {
    int64_t channels = (srcdims.slicemax - srcdims.slicemin);
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = 0; c < srcdims.colmax; c++, off += channels) {
            for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
                dst[r][off + s] = src[s][r][c];
            }
        }
    }
}

void mat3D_u16_pack(const uint16_t *const *const *const src, uint16_t** dst, struct dim3D srcdims) {
    int64_t channels = (srcdims.slicemax - srcdims.slicemin);
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = 0; c < srcdims.colmax; c++, off += channels) {
            for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
                dst[r][off + s] = src[s][r][c];
            }
        }
    }
}

void mat3D_u32_pack(const uint32_t *const *const *const src, uint32_t** dst, struct dim3D srcdims) {
    int64_t channels = (srcdims.slicemax - srcdims.slicemin);
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = 0; c < srcdims.colmax; c++, off += channels) {
            for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
                dst[r][off + s] = src[s][r][c];
            }
        }
    }
}

void mat3D_u64_pack(const uint64_t *const *const *const src, uint64_t** dst, struct dim3D srcdims) {
    int64_t channels = (srcdims.slicemax - srcdims.slicemin);
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = 0; c < srcdims.colmax; c++, off += channels) {
            for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
                dst[r][off + s] = src[s][r][c];
            }
        }
    }
}

void mat3D_i8_pack(const int8_t *const *const *const src, int8_t** dst, struct dim3D srcdims) {
    int64_t channels = (srcdims.slicemax - srcdims.slicemin);
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = 0; c < srcdims.colmax; c++, off += channels) {
            for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
                dst[r][off + s] = src[s][r][c];
            }
        }
    }
}

void mat3D_i16_pack(const int16_t *const *const *const src, int16_t** dst, struct dim3D srcdims) {
    int64_t channels = (srcdims.slicemax - srcdims.slicemin);
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = 0; c < srcdims.colmax; c++, off += channels) {
            for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
                dst[r][off + s] = src[s][r][c];
            }
        }
    }
}

void mat3D_i32_pack(const int32_t *const *const *const src, int32_t** dst, struct dim3D srcdims) {
    int64_t channels = (srcdims.slicemax - srcdims.slicemin);
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = 0; c < srcdims.colmax; c++, off += channels) {
            for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
                dst[r][off + s] = src[s][r][c];
            }
        }
    }
}

void mat3D_i64_pack(const int64_t *const *const *const src, int64_t** dst, struct dim3D srcdims) {
    int64_t channels = (srcdims.slicemax - srcdims.slicemin);
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = 0; c < srcdims.colmax; c++, off += channels) {
            for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
                dst[r][off + s] = src[s][r][c];
            }
        }
    }
}

void mat3D_f32_pack(const float *const *const *const src, float** dst, struct dim3D srcdims) {
    int64_t channels = (srcdims.slicemax - srcdims.slicemin);
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = 0; c < srcdims.colmax; c++, off += channels) {
            for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
                dst[r][off + s] = src[s][r][c];
            }
        }
    }
}

void mat3D_f64_pack(const double *const *const *const src, double** dst, struct dim3D srcdims) {
    int64_t channels = (srcdims.slicemax - srcdims.slicemin);
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = 0; c < srcdims.colmax; c++, off += channels) {
            for (int64_t s = srcdims.slicemin; s < srcdims.slicemax; s++) {
                dst[r][off + s] = src[s][r][c];
            }
        }
    }
}


}