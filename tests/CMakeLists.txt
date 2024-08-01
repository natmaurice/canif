cmake_minimum_required(VERSION 3.10)

project(CANIF_tests CXX)

# include canif headers
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../include")

# include Catch2 headers
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/lib/Catch2")

add_executable(run_tests main.cpp)

target_link_libraries(run_tests PUBLIC canif)
target_link_libraries(run_tests PRIVATE Catch2::Catch2WithMain)
