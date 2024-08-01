#ifndef CANIF_UTILS_HPP_
#define CANIF_UTILS_HPP_

#include <cstdint>
#include <cstddef>
#include <cassert>
#include <cstdlib>

namespace canif {


// Round up to a multiple of a know power of up
// n: number to be rounded up
// m: must be a power of two
constexpr size_t roundup_kpow2(size_t n, int m) {
    return (n + (m - 1)) & -m;
}
    

template <typename T>
T* aligned_new(size_t size, size_t alignment) {
#ifdef _ISOC11_SOURCE
  return (T*)aligned_alloc(alignment, roundup_kpow2(size * sizeof(T), alignment));
#elif (_POSIX_C_SOURCE >= 200112L || _XOPEN_SOURCE >= 600) || __APPLE__
  void* ptr;
  posix_memalign(&ptr, alignment, roundup_kpow2(size * sizeof(T), alignment));
  return reinterpret_cast<T*>(ptr);

#else
  assert(false && "Mem align not available");
  return NULL;
#endif // 
}

template <typename T>
void aligned_delete(T* data, size_t alignment) {
    free(data);
}

}

#endif // CANIF_UTILS_HPP_
