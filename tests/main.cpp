#include "mat2d-functions.hpp"
#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

#include <mat1d.hpp>
#include <mat2d.hpp>
#include <mat3d.hpp>


TEST_CASE("1D Matrix") {
    struct canif::dim1D dims;
    dims.nmin = -3;
    dims.nmax = 512;

    int32_t* mat = canif::mat1D_i32_create(dims);

    canif::mat1D_i32_fill(mat, dims, 0);

    for (int i = dims.nmin; i < dims.nmax; i++) {
	REQUIRE(mat[i] == 0);
    }
    
    canif::mat1D_i32_free(mat, dims);
}

TEST_CASE("2D Matrix") {
    struct canif::dim2D dims;
    dims.colmin = -3;
    dims.colmax = 512;
    dims.rowmin = -3;
    dims.rowmax = 512;
    
    
    int32_t** mat = canif::mat2D_i32_create(dims);

    canif::mat2D_i32_fill(mat, dims, 0);    
    
    for (int i = dims.rowmin; i < dims.rowmax; i++) {
	for (int j = dims.colmin; j < dims.colmax; j++) {
	    REQUIRE(mat[i][j] == 0);
	}
    }
    
    canif::mat2D_i32_free(mat, dims);    
}

TEST_CASE("3D Matrix") {
    struct canif::dim3D dims;
    dims.colmin = -3;
    dims.colmax = 64;
    dims.rowmin = -3;
    dims.rowmax = 64;
    dims.slicemin = -3;
    dims.slicemax = 64;
    
    int32_t*** mat = canif::mat3D_i32_create(dims);

    canif::mat3D_i32_fill(mat, dims, 0);    

    for (int s = dims.slicemin; s < dims.slicemax; s++) {
	for (int r = dims.rowmin; r < dims.rowmax; r++) {
	    for (int c = dims.colmin; c < dims.colmax; c++) {
		REQUIRE(mat[s][r][c] == 0);
	    }
	}
    }
    
    canif::mat3D_i32_free(mat, dims);
    
}
