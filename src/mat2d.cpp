// NOTE: This file is auto-generated.

#include "mat2d.hpp"
#include "utils.hpp"

#include <cstdint>

namespace canif {

constexpr size_t ALIGNMENT = 64;

// 2D

// Allocation functions


uint8_t** mat2D_u8_create(struct dim2D dims) {
    using T = uint8_t;
    int64_t nrow = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    T* mat  = aligned_new<T>(nrow * rowpitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nrow, ALIGNMENT);
    
  
    mat -= (rowpitch * dims.rowmin + dims.colmin);
    imat -= dims.rowmin;    

    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        imat[i] = mat + i * rowpitch;
    }
  
    return imat;
}

uint16_t** mat2D_u16_create(struct dim2D dims) {
    using T = uint16_t;
    int64_t nrow = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    T* mat  = aligned_new<T>(nrow * rowpitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nrow, ALIGNMENT);
    
  
    mat -= (rowpitch * dims.rowmin + dims.colmin);
    imat -= dims.rowmin;    

    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        imat[i] = mat + i * rowpitch;
    }
  
    return imat;
}

uint32_t** mat2D_u32_create(struct dim2D dims) {
    using T = uint32_t;
    int64_t nrow = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    T* mat  = aligned_new<T>(nrow * rowpitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nrow, ALIGNMENT);
    
  
    mat -= (rowpitch * dims.rowmin + dims.colmin);
    imat -= dims.rowmin;    

    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        imat[i] = mat + i * rowpitch;
    }
  
    return imat;
}

uint64_t** mat2D_u64_create(struct dim2D dims) {
    using T = uint64_t;
    int64_t nrow = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    T* mat  = aligned_new<T>(nrow * rowpitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nrow, ALIGNMENT);
    
  
    mat -= (rowpitch * dims.rowmin + dims.colmin);
    imat -= dims.rowmin;    

    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        imat[i] = mat + i * rowpitch;
    }
  
    return imat;
}

int8_t** mat2D_i8_create(struct dim2D dims) {
    using T = int8_t;
    int64_t nrow = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    T* mat  = aligned_new<T>(nrow * rowpitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nrow, ALIGNMENT);
    
  
    mat -= (rowpitch * dims.rowmin + dims.colmin);
    imat -= dims.rowmin;    

    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        imat[i] = mat + i * rowpitch;
    }
  
    return imat;
}

int16_t** mat2D_i16_create(struct dim2D dims) {
    using T = int16_t;
    int64_t nrow = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    T* mat  = aligned_new<T>(nrow * rowpitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nrow, ALIGNMENT);
    
  
    mat -= (rowpitch * dims.rowmin + dims.colmin);
    imat -= dims.rowmin;    

    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        imat[i] = mat + i * rowpitch;
    }
  
    return imat;
}

int32_t** mat2D_i32_create(struct dim2D dims) {
    using T = int32_t;
    int64_t nrow = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    T* mat  = aligned_new<T>(nrow * rowpitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nrow, ALIGNMENT);
    
  
    mat -= (rowpitch * dims.rowmin + dims.colmin);
    imat -= dims.rowmin;    

    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        imat[i] = mat + i * rowpitch;
    }
  
    return imat;
}

int64_t** mat2D_i64_create(struct dim2D dims) {
    using T = int64_t;
    int64_t nrow = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    T* mat  = aligned_new<T>(nrow * rowpitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nrow, ALIGNMENT);
    
  
    mat -= (rowpitch * dims.rowmin + dims.colmin);
    imat -= dims.rowmin;    

    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        imat[i] = mat + i * rowpitch;
    }
  
    return imat;
}

float** mat2D_f32_create(struct dim2D dims) {
    using T = float;
    int64_t nrow = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    T* mat  = aligned_new<T>(nrow * rowpitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nrow, ALIGNMENT);
    
  
    mat -= (rowpitch * dims.rowmin + dims.colmin);
    imat -= dims.rowmin;    

    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        imat[i] = mat + i * rowpitch;
    }
  
    return imat;
}

double** mat2D_f64_create(struct dim2D dims) {
    using T = double;
    int64_t nrow = dims.rowmax - dims.rowmin;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    T* mat  = aligned_new<T>(nrow * rowpitch, ALIGNMENT);
    T** imat = aligned_new<T*>(nrow, ALIGNMENT);
    
  
    mat -= (rowpitch * dims.rowmin + dims.colmin);
    imat -= dims.rowmin;    

    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        imat[i] = mat + i * rowpitch;
    }
  
    return imat;
}


// Free functions


void mat2D_u8_free(uint8_t** mat, struct dim2D dims) {
    using T = uint8_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = *mat + (rowpitch * dims.rowmin + dims.colmin);
    T** pimat = &mat[dims.rowmin];

    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);  
}

void mat2D_u16_free(uint16_t** mat, struct dim2D dims) {
    using T = uint16_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = *mat + (rowpitch * dims.rowmin + dims.colmin);
    T** pimat = &mat[dims.rowmin];

    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);  
}

void mat2D_u32_free(uint32_t** mat, struct dim2D dims) {
    using T = uint32_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = *mat + (rowpitch * dims.rowmin + dims.colmin);
    T** pimat = &mat[dims.rowmin];

    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);  
}

void mat2D_u64_free(uint64_t** mat, struct dim2D dims) {
    using T = uint64_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = *mat + (rowpitch * dims.rowmin + dims.colmin);
    T** pimat = &mat[dims.rowmin];

    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);  
}

void mat2D_i8_free(int8_t** mat, struct dim2D dims) {
    using T = int8_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = *mat + (rowpitch * dims.rowmin + dims.colmin);
    T** pimat = &mat[dims.rowmin];

    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);  
}

void mat2D_i16_free(int16_t** mat, struct dim2D dims) {
    using T = int16_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = *mat + (rowpitch * dims.rowmin + dims.colmin);
    T** pimat = &mat[dims.rowmin];

    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);  
}

void mat2D_i32_free(int32_t** mat, struct dim2D dims) {
    using T = int32_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = *mat + (rowpitch * dims.rowmin + dims.colmin);
    T** pimat = &mat[dims.rowmin];

    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);  
}

void mat2D_i64_free(int64_t** mat, struct dim2D dims) {
    using T = int64_t;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = *mat + (rowpitch * dims.rowmin + dims.colmin);
    T** pimat = &mat[dims.rowmin];

    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);  
}

void mat2D_f32_free(float** mat, struct dim2D dims) {
    using T = float;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = *mat + (rowpitch * dims.rowmin + dims.colmin);
    T** pimat = &mat[dims.rowmin];

    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);  
}

void mat2D_f64_free(double** mat, struct dim2D dims) {
    using T = double;
    int64_t ncols = dims.colmax - dims.colmin;
    int64_t rowpitch = roundup_kpow2(ncols, 64 / sizeof(T));
    if (mat == nullptr) return;
    
    T* pmat = *mat + (rowpitch * dims.rowmin + dims.colmin);
    T** pimat = &mat[dims.rowmin];

    aligned_delete(pmat, ALIGNMENT);
    aligned_delete(pimat, ALIGNMENT);  
}


// Fill functions


void mat2D_u8_fill(uint8_t** mat, struct dim2D dims, uint8_t val) {
    using T = uint8_t;
    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        T* line = mat[i];
        for (int64_t j = dims.colmin; j < dims.colmax; j++) {
            line[j] = val;
        }
    }
}

void mat2D_u16_fill(uint16_t** mat, struct dim2D dims, uint16_t val) {
    using T = uint16_t;
    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        T* line = mat[i];
        for (int64_t j = dims.colmin; j < dims.colmax; j++) {
            line[j] = val;
        }
    }
}

void mat2D_u32_fill(uint32_t** mat, struct dim2D dims, uint32_t val) {
    using T = uint32_t;
    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        T* line = mat[i];
        for (int64_t j = dims.colmin; j < dims.colmax; j++) {
            line[j] = val;
        }
    }
}

void mat2D_u64_fill(uint64_t** mat, struct dim2D dims, uint64_t val) {
    using T = uint64_t;
    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        T* line = mat[i];
        for (int64_t j = dims.colmin; j < dims.colmax; j++) {
            line[j] = val;
        }
    }
}

void mat2D_i8_fill(int8_t** mat, struct dim2D dims, int8_t val) {
    using T = int8_t;
    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        T* line = mat[i];
        for (int64_t j = dims.colmin; j < dims.colmax; j++) {
            line[j] = val;
        }
    }
}

void mat2D_i16_fill(int16_t** mat, struct dim2D dims, int16_t val) {
    using T = int16_t;
    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        T* line = mat[i];
        for (int64_t j = dims.colmin; j < dims.colmax; j++) {
            line[j] = val;
        }
    }
}

void mat2D_i32_fill(int32_t** mat, struct dim2D dims, int32_t val) {
    using T = int32_t;
    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        T* line = mat[i];
        for (int64_t j = dims.colmin; j < dims.colmax; j++) {
            line[j] = val;
        }
    }
}

void mat2D_i64_fill(int64_t** mat, struct dim2D dims, int64_t val) {
    using T = int64_t;
    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        T* line = mat[i];
        for (int64_t j = dims.colmin; j < dims.colmax; j++) {
            line[j] = val;
        }
    }
}

void mat2D_f32_fill(float** mat, struct dim2D dims, float val) {
    using T = float;
    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        T* line = mat[i];
        for (int64_t j = dims.colmin; j < dims.colmax; j++) {
            line[j] = val;
        }
    }
}

void mat2D_f64_fill(double** mat, struct dim2D dims, double val) {
    using T = double;
    for (int64_t i = dims.rowmin; i < dims.rowmax; i++) {
        T* line = mat[i];
        for (int64_t j = dims.colmin; j < dims.colmax; j++) {
            line[j] = val;
        }
    }
}



}