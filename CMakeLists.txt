cmake_minimum_required(VERSION 3.10)
project(CANIF CXX)

set(target canif)
set(inc_dir "include")
set(src_dir "src")


# CMake options
option(CANIF_USE_PNG "Enable PNG Read/Write functions" OFF)

# Print CMake options
message(STATUS "Canif options")
message(STATUS "  * CANIF_USE_PNG: '${CANIF_USE_PNG}'")

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
  ${src_dir}/mat2d.cpp
  ${src_dir}/mat1d-functions.cpp
  ${src_dir}/mat2d-functions.cpp
  ${src_dir}/mat3d-functions.cpp
)



add_library(${target} STATIC ${CANIF_SRCs})
#set_target_properties(canif PROPERTIES POSITION_INDEPENDENT_CODE ON)


# Check for optional libraries
find_package(PNG)
if (PNG_FOUND)
  include_directories(${PNG_INCLUDE_DIRS})

  target_link_libraries(${target} PUBLIC ${PNG_LIBRARIES})
  target_compile_definitions(${target} PUBLIC CANIF_USE_PNG=1)
endif()

find_package(ZLIB)
if (ZLIB_FOUND)
  include_directories(${ZLIB_INCLUDE_DIRS})

  target_link_libraries(${target} PUBLIC ${PNG_LIBRARIES})
  target_compile_definitions(${target} PUBLIC CANIF_USE_ZLIB=1)
endif()



target_include_directories(${target} PUBLIC
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${inc_dir}>)

add_subdirectory(tests)
