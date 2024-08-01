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



}