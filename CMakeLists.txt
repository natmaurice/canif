cmake_minimum_required(VERSION 3.10)
project(CANIF CXX)

set(inc_dir "include")
set(src_dir "src")

set(
  CANIF_HEADERS
  ${inc_dir}/mat1d.hpp
  ${inc_dir}/mat2d.hpp
  ${inc_dir}/mat3d.hpp
  ${inc_dir}/mat1d-functions.hpp
  ${inc_dir}/mat2d-functions.hpp
  ${inc_dir}/mat3d-functions.hpp
)

set(CANIF_SRCs
  ${src_dir}/mat1d-functions.cpp
  ${src_dir}/mat2d-functions.cpp
  ${src_dir}/mat3d-functions.cpp
)


add_library(canif STATIC ${CANIF_SRCs})
#set_target_properties(canif PROPERTIES POSITION_INDEPENDENT_CODE ON)

target_include_directories(canif PUBLIC
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${inc_dir}>)

add_subdirectory(tests)
