#ifndef CANIF_MAT3D_FUNCTIONS_HPP_
#define CANIF_MAT3D_FUNCTIONS_HPP_

#include <cstdint>

namespace canif {

// LOW-LEVEL API

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

// Copy functions
// Note: These functions assume that input != output (i.e. their memory do not overlap)
void mat3D_u8_copy(const uint8_t*const *const *const src, uint8_t*** dst, struct dim3D dims);
void mat3D_u16_copy(const uint16_t*const *const *const src, uint16_t*** dst, struct dim3D dims);
void mat3D_u32_copy(const uint32_t*const *const *const src, uint32_t*** dst, struct dim3D dims);
void mat3D_u64_copy(const uint64_t*const *const *const src, uint64_t*** dst, struct dim3D dims);
void mat3D_i8_copy(const int8_t*const *const *const src, int8_t*** dst, struct dim3D dims);
void mat3D_i16_copy(const int16_t*const *const *const src, int16_t*** dst, struct dim3D dims);
void mat3D_i32_copy(const int32_t*const *const *const src, int32_t*** dst, struct dim3D dims);
void mat3D_i64_copy(const int64_t*const *const *const src, int64_t*** dst, struct dim3D dims);
void mat3D_f32_copy(const float*const *const *const src, float*** dst, struct dim3D dims);
void mat3D_f64_copy(const double*const *const *const src, double*** dst, struct dim3D dims);

// Copyat functions
// Unlike copy functions, these functions add an offset to the destination area
// Note: These functions assume that input != output (i.e. their memory do not overlap)
void mat3D_u8_copyat(const uint8_t*const *const *const src, uint8_t*** dst, struct dim3D dstdims, int64_t dsts, int dstr, int dstc);
void mat3D_u16_copyat(const uint16_t*const *const *const src, uint16_t*** dst, struct dim3D dstdims, int64_t dsts, int dstr, int dstc);
void mat3D_u32_copyat(const uint32_t*const *const *const src, uint32_t*** dst, struct dim3D dstdims, int64_t dsts, int dstr, int dstc);
void mat3D_u64_copyat(const uint64_t*const *const *const src, uint64_t*** dst, struct dim3D dstdims, int64_t dsts, int dstr, int dstc);
void mat3D_i8_copyat(const int8_t*const *const *const src, int8_t*** dst, struct dim3D dstdims, int64_t dsts, int dstr, int dstc);
void mat3D_i16_copyat(const int16_t*const *const *const src, int16_t*** dst, struct dim3D dstdims, int64_t dsts, int dstr, int dstc);
void mat3D_i32_copyat(const int32_t*const *const *const src, int32_t*** dst, struct dim3D dstdims, int64_t dsts, int dstr, int dstc);
void mat3D_i64_copyat(const int64_t*const *const *const src, int64_t*** dst, struct dim3D dstdims, int64_t dsts, int dstr, int dstc);
void mat3D_f32_copyat(const float*const *const *const src, float*** dst, struct dim3D dstdims, int64_t dsts, int dstr, int dstc);
void mat3D_f64_copyat(const double*const *const *const src, double*** dst, struct dim3D dstdims, int64_t dsts, int dstr, int dstc);

// Pack functions
// Convert a matrix of size [Z; N] into a 1D array of size [NxZ] (with Z channels).
// This is equivalence to a SoA => AoS transformation and is the opposite operation of mat1D_T_unpack() functions
// Note: Destination array must be pre-allocated
void mat3D_u8_pack(const uint8_t *const *const *const src, uint8_t** dst, struct dim3D srcdims);
void mat3D_u16_pack(const uint16_t *const *const *const src, uint16_t** dst, struct dim3D srcdims);
void mat3D_u32_pack(const uint32_t *const *const *const src, uint32_t** dst, struct dim3D srcdims);
void mat3D_u64_pack(const uint64_t *const *const *const src, uint64_t** dst, struct dim3D srcdims);
void mat3D_i8_pack(const int8_t *const *const *const src, int8_t** dst, struct dim3D srcdims);
void mat3D_i16_pack(const int16_t *const *const *const src, int16_t** dst, struct dim3D srcdims);
void mat3D_i32_pack(const int32_t *const *const *const src, int32_t** dst, struct dim3D srcdims);
void mat3D_i64_pack(const int64_t *const *const *const src, int64_t** dst, struct dim3D srcdims);
void mat3D_f32_pack(const float *const *const *const src, float** dst, struct dim3D srcdims);
void mat3D_f64_pack(const double *const *const *const src, double** dst, struct dim3D srcdims);


}

#endif // CANIF_MAT3D_FUNCTIONS_HPP_