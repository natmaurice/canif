// NOTE: This file is auto-generated

#include "mat1d.hpp"
#include "utils.hpp"

namespace canif {

constexpr size_t ALIGNMENT = 64;

// 2D

// LOW-LEVEL API

// Allocation functions


uint8_t* mat1D_u8_create(struct dim1D dims) {
    using T = uint8_t;
    int64_t n = dims.nmax - dims.nmin;
    int64_t pitch = roundup_kpow2(n, ALIGNMENT / sizeof(T));
    T* mat = aligned_new<T>(pitch, ALIGNMENT);
    
    mat -= dims.nmin;
    
    return mat;
}

uint16_t* mat1D_u16_create(struct dim1D dims) {
    using T = uint16_t;
    int64_t n = dims.nmax - dims.nmin;
    int64_t pitch = roundup_kpow2(n, ALIGNMENT / sizeof(T));
    T* mat = aligned_new<T>(pitch, ALIGNMENT);
    
    mat -= dims.nmin;
    
    return mat;
}

uint32_t* mat1D_u32_create(struct dim1D dims) {
    using T = uint32_t;
    int64_t n = dims.nmax - dims.nmin;
    int64_t pitch = roundup_kpow2(n, ALIGNMENT / sizeof(T));
    T* mat = aligned_new<T>(pitch, ALIGNMENT);
    
    mat -= dims.nmin;
    
    return mat;
}

uint64_t* mat1D_u64_create(struct dim1D dims) {
    using T = uint64_t;
    int64_t n = dims.nmax - dims.nmin;
    int64_t pitch = roundup_kpow2(n, ALIGNMENT / sizeof(T));
    T* mat = aligned_new<T>(pitch, ALIGNMENT);
    
    mat -= dims.nmin;
    
    return mat;
}

int8_t* mat1D_i8_create(struct dim1D dims) {
    using T = int8_t;
    int64_t n = dims.nmax - dims.nmin;
    int64_t pitch = roundup_kpow2(n, ALIGNMENT / sizeof(T));
    T* mat = aligned_new<T>(pitch, ALIGNMENT);
    
    mat -= dims.nmin;
    
    return mat;
}

int16_t* mat1D_i16_create(struct dim1D dims) {
    using T = int16_t;
    int64_t n = dims.nmax - dims.nmin;
    int64_t pitch = roundup_kpow2(n, ALIGNMENT / sizeof(T));
    T* mat = aligned_new<T>(pitch, ALIGNMENT);
    
    mat -= dims.nmin;
    
    return mat;
}

int32_t* mat1D_i32_create(struct dim1D dims) {
    using T = int32_t;
    int64_t n = dims.nmax - dims.nmin;
    int64_t pitch = roundup_kpow2(n, ALIGNMENT / sizeof(T));
    T* mat = aligned_new<T>(pitch, ALIGNMENT);
    
    mat -= dims.nmin;
    
    return mat;
}

int64_t* mat1D_i64_create(struct dim1D dims) {
    using T = int64_t;
    int64_t n = dims.nmax - dims.nmin;
    int64_t pitch = roundup_kpow2(n, ALIGNMENT / sizeof(T));
    T* mat = aligned_new<T>(pitch, ALIGNMENT);
    
    mat -= dims.nmin;
    
    return mat;
}

float* mat1D_f32_create(struct dim1D dims) {
    using T = float;
    int64_t n = dims.nmax - dims.nmin;
    int64_t pitch = roundup_kpow2(n, ALIGNMENT / sizeof(T));
    T* mat = aligned_new<T>(pitch, ALIGNMENT);
    
    mat -= dims.nmin;
    
    return mat;
}

double* mat1D_f64_create(struct dim1D dims) {
    using T = double;
    int64_t n = dims.nmax - dims.nmin;
    int64_t pitch = roundup_kpow2(n, ALIGNMENT / sizeof(T));
    T* mat = aligned_new<T>(pitch, ALIGNMENT);
    
    mat -= dims.nmin;
    
    return mat;
}


// Free functions


void mat1D_u8_free(uint8_t* mat, struct dim1D dims) {
    using T = uint8_t;
    T* pmat = mat + dims.nmin;
    
    aligned_delete(pmat, ALIGNMENT);
}

void mat1D_u16_free(uint16_t* mat, struct dim1D dims) {
    using T = uint16_t;
    T* pmat = mat + dims.nmin;
    
    aligned_delete(pmat, ALIGNMENT);
}

void mat1D_u32_free(uint32_t* mat, struct dim1D dims) {
    using T = uint32_t;
    T* pmat = mat + dims.nmin;
    
    aligned_delete(pmat, ALIGNMENT);
}

void mat1D_u64_free(uint64_t* mat, struct dim1D dims) {
    using T = uint64_t;
    T* pmat = mat + dims.nmin;
    
    aligned_delete(pmat, ALIGNMENT);
}

void mat1D_i8_free(int8_t* mat, struct dim1D dims) {
    using T = int8_t;
    T* pmat = mat + dims.nmin;
    
    aligned_delete(pmat, ALIGNMENT);
}

void mat1D_i16_free(int16_t* mat, struct dim1D dims) {
    using T = int16_t;
    T* pmat = mat + dims.nmin;
    
    aligned_delete(pmat, ALIGNMENT);
}

void mat1D_i32_free(int32_t* mat, struct dim1D dims) {
    using T = int32_t;
    T* pmat = mat + dims.nmin;
    
    aligned_delete(pmat, ALIGNMENT);
}

void mat1D_i64_free(int64_t* mat, struct dim1D dims) {
    using T = int64_t;
    T* pmat = mat + dims.nmin;
    
    aligned_delete(pmat, ALIGNMENT);
}

void mat1D_f32_free(float* mat, struct dim1D dims) {
    using T = float;
    T* pmat = mat + dims.nmin;
    
    aligned_delete(pmat, ALIGNMENT);
}

void mat1D_f64_free(double* mat, struct dim1D dims) {
    using T = double;
    T* pmat = mat + dims.nmin;
    
    aligned_delete(pmat, ALIGNMENT);
}


// Fill functions


void mat1D_u8_fill(uint8_t* mat, struct dim1D dims, uint8_t val) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        mat[i] = val;
    }
}

void mat1D_u16_fill(uint16_t* mat, struct dim1D dims, uint16_t val) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        mat[i] = val;
    }
}

void mat1D_u32_fill(uint32_t* mat, struct dim1D dims, uint32_t val) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        mat[i] = val;
    }
}

void mat1D_u64_fill(uint64_t* mat, struct dim1D dims, uint64_t val) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        mat[i] = val;
    }
}

void mat1D_i8_fill(int8_t* mat, struct dim1D dims, int8_t val) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        mat[i] = val;
    }
}

void mat1D_i16_fill(int16_t* mat, struct dim1D dims, int16_t val) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        mat[i] = val;
    }
}

void mat1D_i32_fill(int32_t* mat, struct dim1D dims, int32_t val) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        mat[i] = val;
    }
}

void mat1D_i64_fill(int64_t* mat, struct dim1D dims, int64_t val) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        mat[i] = val;
    }
}

void mat1D_f32_fill(float* mat, struct dim1D dims, float val) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        mat[i] = val;
    }
}

void mat1D_f64_fill(double* mat, struct dim1D dims, double val) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        mat[i] = val;
    }
}


// Copy functions


void mat1D_u8_copy(const uint8_t*const src, uint8_t* dst, struct dim1D dims) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        dst[i] = src[i];
    }
}

void mat1D_u16_copy(const uint16_t*const src, uint16_t* dst, struct dim1D dims) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        dst[i] = src[i];
    }
}

void mat1D_u32_copy(const uint32_t*const src, uint32_t* dst, struct dim1D dims) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        dst[i] = src[i];
    }
}

void mat1D_u64_copy(const uint64_t*const src, uint64_t* dst, struct dim1D dims) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        dst[i] = src[i];
    }
}

void mat1D_i8_copy(const int8_t*const src, int8_t* dst, struct dim1D dims) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        dst[i] = src[i];
    }
}

void mat1D_i16_copy(const int16_t*const src, int16_t* dst, struct dim1D dims) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        dst[i] = src[i];
    }
}

void mat1D_i32_copy(const int32_t*const src, int32_t* dst, struct dim1D dims) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        dst[i] = src[i];
    }
}

void mat1D_i64_copy(const int64_t*const src, int64_t* dst, struct dim1D dims) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        dst[i] = src[i];
    }
}

void mat1D_f32_copy(const float*const src, float* dst, struct dim1D dims) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        dst[i] = src[i];
    }
}

void mat1D_f64_copy(const double*const src, double* dst, struct dim1D dims) {
    for (int64_t i = dims.nmin; i < dims.nmax; i++) {
        dst[i] = src[i];
    }
}




void mat1D_u8_copyat(const uint8_t*const src, uint8_t* dst, struct dim1D srcdims, int dsti) {
    for (int64_t i = srcdims.nmin; i < srcdims.nmax; i++) {
        dst[dsti + i] = src[i];
    }
}

void mat1D_u16_copyat(const uint16_t*const src, uint16_t* dst, struct dim1D srcdims, int dsti) {
    for (int64_t i = srcdims.nmin; i < srcdims.nmax; i++) {
        dst[dsti + i] = src[i];
    }
}

void mat1D_u32_copyat(const uint32_t*const src, uint32_t* dst, struct dim1D srcdims, int dsti) {
    for (int64_t i = srcdims.nmin; i < srcdims.nmax; i++) {
        dst[dsti + i] = src[i];
    }
}

void mat1D_u64_copyat(const uint64_t*const src, uint64_t* dst, struct dim1D srcdims, int dsti) {
    for (int64_t i = srcdims.nmin; i < srcdims.nmax; i++) {
        dst[dsti + i] = src[i];
    }
}

void mat1D_i8_copyat(const int8_t*const src, int8_t* dst, struct dim1D srcdims, int dsti) {
    for (int64_t i = srcdims.nmin; i < srcdims.nmax; i++) {
        dst[dsti + i] = src[i];
    }
}

void mat1D_i16_copyat(const int16_t*const src, int16_t* dst, struct dim1D srcdims, int dsti) {
    for (int64_t i = srcdims.nmin; i < srcdims.nmax; i++) {
        dst[dsti + i] = src[i];
    }
}

void mat1D_i32_copyat(const int32_t*const src, int32_t* dst, struct dim1D srcdims, int dsti) {
    for (int64_t i = srcdims.nmin; i < srcdims.nmax; i++) {
        dst[dsti + i] = src[i];
    }
}

void mat1D_i64_copyat(const int64_t*const src, int64_t* dst, struct dim1D srcdims, int dsti) {
    for (int64_t i = srcdims.nmin; i < srcdims.nmax; i++) {
        dst[dsti + i] = src[i];
    }
}

void mat1D_f32_copyat(const float*const src, float* dst, struct dim1D srcdims, int dsti) {
    for (int64_t i = srcdims.nmin; i < srcdims.nmax; i++) {
        dst[dsti + i] = src[i];
    }
}

void mat1D_f64_copyat(const double*const src, double* dst, struct dim1D srcdims, int dsti) {
    for (int64_t i = srcdims.nmin; i < srcdims.nmax; i++) {
        dst[dsti + i] = src[i];
    }
}



// Unpack functions
// Convert a vector of size N with M channels into a matrix of size [M * N] (equivalent to AoS => SoA transformation)
// Note: a 2D matrix of size M * N must be allocated beforehand
// Note: The opposite functions are mat2D_T_pack()


void mat1D_u8_unpack(const uint8_t* const src, uint8_t** dst, struct dim1D srcdims, int channels) {
    for (int64_t i = srcdims.nmin, off = srcdims.nmin; i < srcdims.nmax; i += channels, off++) {
        for (int c = 0; c < channels; c++) {
            dst[c][off] = src[i + c];
        }
    }    
}

void mat1D_u16_unpack(const uint16_t* const src, uint16_t** dst, struct dim1D srcdims, int channels) {
    for (int64_t i = srcdims.nmin, off = srcdims.nmin; i < srcdims.nmax; i += channels, off++) {
        for (int c = 0; c < channels; c++) {
            dst[c][off] = src[i + c];
        }
    }    
}

void mat1D_u32_unpack(const uint32_t* const src, uint32_t** dst, struct dim1D srcdims, int channels) {
    for (int64_t i = srcdims.nmin, off = srcdims.nmin; i < srcdims.nmax; i += channels, off++) {
        for (int c = 0; c < channels; c++) {
            dst[c][off] = src[i + c];
        }
    }    
}

void mat1D_u64_unpack(const uint64_t* const src, uint64_t** dst, struct dim1D srcdims, int channels) {
    for (int64_t i = srcdims.nmin, off = srcdims.nmin; i < srcdims.nmax; i += channels, off++) {
        for (int c = 0; c < channels; c++) {
            dst[c][off] = src[i + c];
        }
    }    
}

void mat1D_i8_unpack(const int8_t* const src, int8_t** dst, struct dim1D srcdims, int channels) {
    for (int64_t i = srcdims.nmin, off = srcdims.nmin; i < srcdims.nmax; i += channels, off++) {
        for (int c = 0; c < channels; c++) {
            dst[c][off] = src[i + c];
        }
    }    
}

void mat1D_i16_unpack(const int16_t* const src, int16_t** dst, struct dim1D srcdims, int channels) {
    for (int64_t i = srcdims.nmin, off = srcdims.nmin; i < srcdims.nmax; i += channels, off++) {
        for (int c = 0; c < channels; c++) {
            dst[c][off] = src[i + c];
        }
    }    
}

void mat1D_i32_unpack(const int32_t* const src, int32_t** dst, struct dim1D srcdims, int channels) {
    for (int64_t i = srcdims.nmin, off = srcdims.nmin; i < srcdims.nmax; i += channels, off++) {
        for (int c = 0; c < channels; c++) {
            dst[c][off] = src[i + c];
        }
    }    
}

void mat1D_i64_unpack(const int64_t* const src, int64_t** dst, struct dim1D srcdims, int channels) {
    for (int64_t i = srcdims.nmin, off = srcdims.nmin; i < srcdims.nmax; i += channels, off++) {
        for (int c = 0; c < channels; c++) {
            dst[c][off] = src[i + c];
        }
    }    
}

void mat1D_f32_unpack(const float* const src, float** dst, struct dim1D srcdims, int channels) {
    for (int64_t i = srcdims.nmin, off = srcdims.nmin; i < srcdims.nmax; i += channels, off++) {
        for (int c = 0; c < channels; c++) {
            dst[c][off] = src[i + c];
        }
    }    
}

void mat1D_f64_unpack(const double* const src, double** dst, struct dim1D srcdims, int channels) {
    for (int64_t i = srcdims.nmin, off = srcdims.nmin; i < srcdims.nmax; i += channels, off++) {
        for (int c = 0; c < channels; c++) {
            dst[c][off] = src[i + c];
        }
    }    
}

  
}