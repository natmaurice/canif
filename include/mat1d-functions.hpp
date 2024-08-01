#ifndef CANIF_MAT1D_FUNCTIONS_HPP_
#define CANIF_MAT1D_FUNCTIONS_HPP_

#include <cstdint>

namespace canif {

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

}

#endif // CANIF_MAT1D_FUNCTIONS_HPP_