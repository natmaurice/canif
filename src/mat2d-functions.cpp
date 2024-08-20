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


// Copy functions


void mat2D_u8_copy(const uint8_t*const *const src, uint8_t** dst, struct dim2D dims) {
    using T = uint8_t;
    for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r];
        for (int64_t c = dims.colmin; c < dims.colmax; c++) {
              dstline[c] = srcline[c];
        }
    }
}

void mat2D_u16_copy(const uint16_t*const *const src, uint16_t** dst, struct dim2D dims) {
    using T = uint16_t;
    for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r];
        for (int64_t c = dims.colmin; c < dims.colmax; c++) {
              dstline[c] = srcline[c];
        }
    }
}

void mat2D_u32_copy(const uint32_t*const *const src, uint32_t** dst, struct dim2D dims) {
    using T = uint32_t;
    for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r];
        for (int64_t c = dims.colmin; c < dims.colmax; c++) {
              dstline[c] = srcline[c];
        }
    }
}

void mat2D_u64_copy(const uint64_t*const *const src, uint64_t** dst, struct dim2D dims) {
    using T = uint64_t;
    for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r];
        for (int64_t c = dims.colmin; c < dims.colmax; c++) {
              dstline[c] = srcline[c];
        }
    }
}

void mat2D_i8_copy(const int8_t*const *const src, int8_t** dst, struct dim2D dims) {
    using T = int8_t;
    for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r];
        for (int64_t c = dims.colmin; c < dims.colmax; c++) {
              dstline[c] = srcline[c];
        }
    }
}

void mat2D_i16_copy(const int16_t*const *const src, int16_t** dst, struct dim2D dims) {
    using T = int16_t;
    for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r];
        for (int64_t c = dims.colmin; c < dims.colmax; c++) {
              dstline[c] = srcline[c];
        }
    }
}

void mat2D_i32_copy(const int32_t*const *const src, int32_t** dst, struct dim2D dims) {
    using T = int32_t;
    for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r];
        for (int64_t c = dims.colmin; c < dims.colmax; c++) {
              dstline[c] = srcline[c];
        }
    }
}

void mat2D_i64_copy(const int64_t*const *const src, int64_t** dst, struct dim2D dims) {
    using T = int64_t;
    for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r];
        for (int64_t c = dims.colmin; c < dims.colmax; c++) {
              dstline[c] = srcline[c];
        }
    }
}

void mat2D_f32_copy(const float*const *const src, float** dst, struct dim2D dims) {
    using T = float;
    for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r];
        for (int64_t c = dims.colmin; c < dims.colmax; c++) {
              dstline[c] = srcline[c];
        }
    }
}

void mat2D_f64_copy(const double*const *const src, double** dst, struct dim2D dims) {
    using T = double;
    for (int64_t r = dims.rowmin; r < dims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r];
        for (int64_t c = dims.colmin; c < dims.colmax; c++) {
              dstline[c] = srcline[c];
        }
    }
}




void mat2D_u8_copyat(const uint8_t*const *const src, uint8_t** dst, struct dim2D srcdims, int64_t dstr, int64_t dstc) {
    using T = uint8_t;
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r + dstr];
        for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
              dstline[c + dstc] = srcline[c];
        }
    }
}

void mat2D_u16_copyat(const uint16_t*const *const src, uint16_t** dst, struct dim2D srcdims, int64_t dstr, int64_t dstc) {
    using T = uint16_t;
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r + dstr];
        for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
              dstline[c + dstc] = srcline[c];
        }
    }
}

void mat2D_u32_copyat(const uint32_t*const *const src, uint32_t** dst, struct dim2D srcdims, int64_t dstr, int64_t dstc) {
    using T = uint32_t;
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r + dstr];
        for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
              dstline[c + dstc] = srcline[c];
        }
    }
}

void mat2D_u64_copyat(const uint64_t*const *const src, uint64_t** dst, struct dim2D srcdims, int64_t dstr, int64_t dstc) {
    using T = uint64_t;
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r + dstr];
        for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
              dstline[c + dstc] = srcline[c];
        }
    }
}

void mat2D_i8_copyat(const int8_t*const *const src, int8_t** dst, struct dim2D srcdims, int64_t dstr, int64_t dstc) {
    using T = int8_t;
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r + dstr];
        for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
              dstline[c + dstc] = srcline[c];
        }
    }
}

void mat2D_i16_copyat(const int16_t*const *const src, int16_t** dst, struct dim2D srcdims, int64_t dstr, int64_t dstc) {
    using T = int16_t;
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r + dstr];
        for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
              dstline[c + dstc] = srcline[c];
        }
    }
}

void mat2D_i32_copyat(const int32_t*const *const src, int32_t** dst, struct dim2D srcdims, int64_t dstr, int64_t dstc) {
    using T = int32_t;
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r + dstr];
        for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
              dstline[c + dstc] = srcline[c];
        }
    }
}

void mat2D_i64_copyat(const int64_t*const *const src, int64_t** dst, struct dim2D srcdims, int64_t dstr, int64_t dstc) {
    using T = int64_t;
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r + dstr];
        for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
              dstline[c + dstc] = srcline[c];
        }
    }
}

void mat2D_f32_copyat(const float*const *const src, float** dst, struct dim2D srcdims, int64_t dstr, int64_t dstc) {
    using T = float;
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r + dstr];
        for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
              dstline[c + dstc] = srcline[c];
        }
    }
}

void mat2D_f64_copyat(const double*const *const src, double** dst, struct dim2D srcdims, int64_t dstr, int64_t dstc) {
    using T = double;
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        const T* srcline = src[r];
        T* dstline = dst[r + dstr];
        for (int64_t c = srcdims.colmin; c < srcdims.colmax; c++) {
              dstline[c + dstc] = srcline[c];
        }
    }
}



// Unpack functions
// Convert a matrix of size [N; M] with Z channels into a 3D tensor of size [Z; N; M] (equivalent to AoS => SoA transformation)
// Note: a 3D matrix of size [Z; N; M] must be allocated beforehand
// Note: The opposite functions are mat3D_T_pack()


void mat2D_u8_unpack(const uint8_t *const *const src, uint8_t*** dst, struct dim2D srcdims, int channels) {
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c += channels, off++) {
            for (int ch = 0; ch < channels; ch++) {
                dst[ch][r][off] = src[r][c + ch];
            }
        }
    }
}

void mat2D_u16_unpack(const uint16_t *const *const src, uint16_t*** dst, struct dim2D srcdims, int channels) {
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c += channels, off++) {
            for (int ch = 0; ch < channels; ch++) {
                dst[ch][r][off] = src[r][c + ch];
            }
        }
    }
}

void mat2D_u32_unpack(const uint32_t *const *const src, uint32_t*** dst, struct dim2D srcdims, int channels) {
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c += channels, off++) {
            for (int ch = 0; ch < channels; ch++) {
                dst[ch][r][off] = src[r][c + ch];
            }
        }
    }
}

void mat2D_u64_unpack(const uint64_t *const *const src, uint64_t*** dst, struct dim2D srcdims, int channels) {
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c += channels, off++) {
            for (int ch = 0; ch < channels; ch++) {
                dst[ch][r][off] = src[r][c + ch];
            }
        }
    }
}

void mat2D_i8_unpack(const int8_t *const *const src, int8_t*** dst, struct dim2D srcdims, int channels) {
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c += channels, off++) {
            for (int ch = 0; ch < channels; ch++) {
                dst[ch][r][off] = src[r][c + ch];
            }
        }
    }
}

void mat2D_i16_unpack(const int16_t *const *const src, int16_t*** dst, struct dim2D srcdims, int channels) {
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c += channels, off++) {
            for (int ch = 0; ch < channels; ch++) {
                dst[ch][r][off] = src[r][c + ch];
            }
        }
    }
}

void mat2D_i32_unpack(const int32_t *const *const src, int32_t*** dst, struct dim2D srcdims, int channels) {
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c += channels, off++) {
            for (int ch = 0; ch < channels; ch++) {
                dst[ch][r][off] = src[r][c + ch];
            }
        }
    }
}

void mat2D_i64_unpack(const int64_t *const *const src, int64_t*** dst, struct dim2D srcdims, int channels) {
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c += channels, off++) {
            for (int ch = 0; ch < channels; ch++) {
                dst[ch][r][off] = src[r][c + ch];
            }
        }
    }
}

void mat2D_f32_unpack(const float *const *const src, float*** dst, struct dim2D srcdims, int channels) {
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c += channels, off++) {
            for (int ch = 0; ch < channels; ch++) {
                dst[ch][r][off] = src[r][c + ch];
            }
        }
    }
}

void mat2D_f64_unpack(const double *const *const src, double*** dst, struct dim2D srcdims, int channels) {
    for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
        for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c += channels, off++) {
            for (int ch = 0; ch < channels; ch++) {
                dst[ch][r][off] = src[r][c + ch];
            }
        }
    }
}


// Pack functions
// Convert a matrix of size [Z; N] into a 1D array of size [NxZ] (with Z channels).
// This is equivalence to a SoA => AoS transformation and is the opposite operation of mat1D_T_unpack() functions
// Note: Destination array must be pre-allocated


void mat2D_u8_pack(const uint8_t *const *const src, uint8_t* dst, struct dim2D srcdims) {
    int64_t channels = (srcdims.rowmax - srcdims.rowmin);
    for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c++, off += channels) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            dst[off + r] = src[r][c];
        }
    }
}

void mat2D_u16_pack(const uint16_t *const *const src, uint16_t* dst, struct dim2D srcdims) {
    int64_t channels = (srcdims.rowmax - srcdims.rowmin);
    for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c++, off += channels) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            dst[off + r] = src[r][c];
        }
    }
}

void mat2D_u32_pack(const uint32_t *const *const src, uint32_t* dst, struct dim2D srcdims) {
    int64_t channels = (srcdims.rowmax - srcdims.rowmin);
    for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c++, off += channels) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            dst[off + r] = src[r][c];
        }
    }
}

void mat2D_u64_pack(const uint64_t *const *const src, uint64_t* dst, struct dim2D srcdims) {
    int64_t channels = (srcdims.rowmax - srcdims.rowmin);
    for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c++, off += channels) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            dst[off + r] = src[r][c];
        }
    }
}

void mat2D_i8_pack(const int8_t *const *const src, int8_t* dst, struct dim2D srcdims) {
    int64_t channels = (srcdims.rowmax - srcdims.rowmin);
    for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c++, off += channels) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            dst[off + r] = src[r][c];
        }
    }
}

void mat2D_i16_pack(const int16_t *const *const src, int16_t* dst, struct dim2D srcdims) {
    int64_t channels = (srcdims.rowmax - srcdims.rowmin);
    for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c++, off += channels) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            dst[off + r] = src[r][c];
        }
    }
}

void mat2D_i32_pack(const int32_t *const *const src, int32_t* dst, struct dim2D srcdims) {
    int64_t channels = (srcdims.rowmax - srcdims.rowmin);
    for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c++, off += channels) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            dst[off + r] = src[r][c];
        }
    }
}

void mat2D_i64_pack(const int64_t *const *const src, int64_t* dst, struct dim2D srcdims) {
    int64_t channels = (srcdims.rowmax - srcdims.rowmin);
    for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c++, off += channels) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            dst[off + r] = src[r][c];
        }
    }
}

void mat2D_f32_pack(const float *const *const src, float* dst, struct dim2D srcdims) {
    int64_t channels = (srcdims.rowmax - srcdims.rowmin);
    for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c++, off += channels) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            dst[off + r] = src[r][c];
        }
    }
}

void mat2D_f64_pack(const double *const *const src, double* dst, struct dim2D srcdims) {
    int64_t channels = (srcdims.rowmax - srcdims.rowmin);
    for (int64_t c = srcdims.colmin, off = srcdims.colmin; c < srcdims.colmax; c++, off += channels) {
        for (int64_t r = srcdims.rowmin; r < srcdims.rowmax; r++) {
            dst[off + r] = src[r][c];
        }
    }
}


}