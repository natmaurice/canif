#ifndef CANIF_MAT3D_FUNCTIONS_HPP_
#define CANIF_MAT3D_FUNCTIONS_HPP_

#include <cstdint>

namespace canif {

// Alloc functions
uint8_t*** mat3D_u8_create(struct dim3D dims);
uint16_t*** mat3D_u16_create(struct dim3D dims);
uint32_t*** mat3D_u32_create(struct dim3D dims);
uint64_t*** mat3D_u64_create(struct dim3D dims);
int8_t*** mat3D_i8_create(struct dim3D dims);
int16_t*** mat3D_i16_create(struct dim3D dims);
int32_t*** mat3D_i32_create(struct dim3D dims);
int64_t*** mat3D_i64_create(struct dim3D dims);
float*** mat3D_f32_create(struct dim3D dims);
double*** mat3D_f64_create(struct dim3D dims);

// Free functions
void mat3D_u8_free(uint8_t*** mat, struct dim3D dims);
void mat3D_u16_free(uint16_t*** mat, struct dim3D dims);
void mat3D_u32_free(uint32_t*** mat, struct dim3D dims);
void mat3D_u64_free(uint64_t*** mat, struct dim3D dims);
void mat3D_i8_free(int8_t*** mat, struct dim3D dims);
void mat3D_i16_free(int16_t*** mat, struct dim3D dims);
void mat3D_i32_free(int32_t*** mat, struct dim3D dims);
void mat3D_i64_free(int64_t*** mat, struct dim3D dims);
void mat3D_f32_free(float*** mat, struct dim3D dims);
void mat3D_f64_free(double*** mat, struct dim3D dims);

// Fill functions
// Note: These functions will also fill borders
void mat3D_u8_fill(uint8_t*** mat, struct dim3D dims, uint8_t val);
void mat3D_u16_fill(uint16_t*** mat, struct dim3D dims, uint16_t val);
void mat3D_u32_fill(uint32_t*** mat, struct dim3D dims, uint32_t val);
void mat3D_u64_fill(uint64_t*** mat, struct dim3D dims, uint64_t val);
void mat3D_i8_fill(int8_t*** mat, struct dim3D dims, int8_t val);
void mat3D_i16_fill(int16_t*** mat, struct dim3D dims, int16_t val);
void mat3D_i32_fill(int32_t*** mat, struct dim3D dims, int32_t val);
void mat3D_i64_fill(int64_t*** mat, struct dim3D dims, int64_t val);
void mat3D_f32_fill(float*** mat, struct dim3D dims, float val);
void mat3D_f64_fill(double*** mat, struct dim3D dims, double val);

}

#endif // CANIF_MAT3D_FUNCTIONS_HPP_