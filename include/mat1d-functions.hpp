#ifndef CANIF_MAT1D_FUNCTIONS_HPP_
#define CANIF_MAT1D_FUNCTIONS_HPP_

#include <cstdint>

namespace canif {

// LOW-LEVEL API

// Alloc functions
uint8_t* mat1D_u8_create(struct dim1D dims);
uint16_t* mat1D_u16_create(struct dim1D dims);
uint32_t* mat1D_u32_create(struct dim1D dims);
uint64_t* mat1D_u64_create(struct dim1D dims);
int8_t* mat1D_i8_create(struct dim1D dims);
int16_t* mat1D_i16_create(struct dim1D dims);
int32_t* mat1D_i32_create(struct dim1D dims);
int64_t* mat1D_i64_create(struct dim1D dims);
float* mat1D_f32_create(struct dim1D dims);
double* mat1D_f64_create(struct dim1D dims);

// Free functions
void mat1D_u8_free(uint8_t* mat, struct dim1D dims);
void mat1D_u16_free(uint16_t* mat, struct dim1D dims);
void mat1D_u32_free(uint32_t* mat, struct dim1D dims);
void mat1D_u64_free(uint64_t* mat, struct dim1D dims);
void mat1D_i8_free(int8_t* mat, struct dim1D dims);
void mat1D_i16_free(int16_t* mat, struct dim1D dims);
void mat1D_i32_free(int32_t* mat, struct dim1D dims);
void mat1D_i64_free(int64_t* mat, struct dim1D dims);
void mat1D_f32_free(float* mat, struct dim1D dims);
void mat1D_f64_free(double* mat, struct dim1D dims);

// Fill functions
// Note: These functions will also fill borders
void mat1D_u8_fill(uint8_t* mat, struct dim1D dims, uint8_t val);
void mat1D_u16_fill(uint16_t* mat, struct dim1D dims, uint16_t val);
void mat1D_u32_fill(uint32_t* mat, struct dim1D dims, uint32_t val);
void mat1D_u64_fill(uint64_t* mat, struct dim1D dims, uint64_t val);
void mat1D_i8_fill(int8_t* mat, struct dim1D dims, int8_t val);
void mat1D_i16_fill(int16_t* mat, struct dim1D dims, int16_t val);
void mat1D_i32_fill(int32_t* mat, struct dim1D dims, int32_t val);
void mat1D_i64_fill(int64_t* mat, struct dim1D dims, int64_t val);
void mat1D_f32_fill(float* mat, struct dim1D dims, float val);
void mat1D_f64_fill(double* mat, struct dim1D dims, double val);

// Copy functions
// Note: These functions assume that input != output (i.e. their memory do not overlap)
void mat1D_u8_copy(const uint8_t*const src, uint8_t* dst, struct dim1D dims);
void mat1D_u16_copy(const uint16_t*const src, uint16_t* dst, struct dim1D dims);
void mat1D_u32_copy(const uint32_t*const src, uint32_t* dst, struct dim1D dims);
void mat1D_u64_copy(const uint64_t*const src, uint64_t* dst, struct dim1D dims);
void mat1D_i8_copy(const int8_t*const src, int8_t* dst, struct dim1D dims);
void mat1D_i16_copy(const int16_t*const src, int16_t* dst, struct dim1D dims);
void mat1D_i32_copy(const int32_t*const src, int32_t* dst, struct dim1D dims);
void mat1D_i64_copy(const int64_t*const src, int64_t* dst, struct dim1D dims);
void mat1D_f32_copy(const float*const src, float* dst, struct dim1D dims);
void mat1D_f64_copy(const double*const src, double* dst, struct dim1D dims);

// Copyat functions
// Unlike copy functions, these functions add an offset to the destination area
// Note: These functions assume that input != output (i.e. their memory do not overlap)
void mat1D_u8_copyat(const uint8_t*const src, uint8_t* dst, struct dim1D srcdims, int64_t dsti);
void mat1D_u16_copyat(const uint16_t*const src, uint16_t* dst, struct dim1D srcdims, int64_t dsti);
void mat1D_u32_copyat(const uint32_t*const src, uint32_t* dst, struct dim1D srcdims, int64_t dsti);
void mat1D_u64_copyat(const uint64_t*const src, uint64_t* dst, struct dim1D srcdims, int64_t dsti);
void mat1D_i8_copyat(const int8_t*const src, int8_t* dst, struct dim1D srcdims, int64_t dsti);
void mat1D_i16_copyat(const int16_t*const src, int16_t* dst, struct dim1D srcdims, int64_t dsti);
void mat1D_i32_copyat(const int32_t*const src, int32_t* dst, struct dim1D srcdims, int64_t dsti);
void mat1D_i64_copyat(const int64_t*const src, int64_t* dst, struct dim1D srcdims, int64_t dsti);
void mat1D_f32_copyat(const float*const src, float* dst, struct dim1D srcdims, int64_t dsti);
void mat1D_f64_copyat(const double*const src, double* dst, struct dim1D srcdims, int64_t dsti);

// Unpack functions
void mat1D_u8_unpack(const uint8_t* const src, uint8_t** dst, struct dim1D srcdims, int channels);
void mat1D_u16_unpack(const uint16_t* const src, uint16_t** dst, struct dim1D srcdims, int channels);
void mat1D_u32_unpack(const uint32_t* const src, uint32_t** dst, struct dim1D srcdims, int channels);
void mat1D_u64_unpack(const uint64_t* const src, uint64_t** dst, struct dim1D srcdims, int channels);
void mat1D_i8_unpack(const int8_t* const src, int8_t** dst, struct dim1D srcdims, int channels);
void mat1D_i16_unpack(const int16_t* const src, int16_t** dst, struct dim1D srcdims, int channels);
void mat1D_i32_unpack(const int32_t* const src, int32_t** dst, struct dim1D srcdims, int channels);
void mat1D_i64_unpack(const int64_t* const src, int64_t** dst, struct dim1D srcdims, int channels);
void mat1D_f32_unpack(const float* const src, float** dst, struct dim1D srcdims, int channels);
void mat1D_f64_unpack(const double* const src, double** dst, struct dim1D srcdims, int channels);


}

#endif // CANIF_MAT1D_FUNCTIONS_HPP_