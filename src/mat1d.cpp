// NOTE: This file is auto-generated

#include "mat1d.hpp"
#include "utils.hpp"

namespace canif {

constexpr size_t ALIGNMENT = 64;

// 2D

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



}