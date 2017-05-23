#ifndef MATRIX_H
#define MATRIX_H

#include <stdbool.h> // for bool datatype
#include <stddef.h> // for size_t datatype

/**
 * This module defines the datatype Matrix for matrices with element type double.
 *
 * Along with the prototype definition, various help functions are
 * given for creating, destroying, modifying a matrix object.
 */

/**
 * Nested arrays of doubles represent a matrix.
 *
 * The first index is for accessing the rows, the second for the columns.
 */
typedef double** Matrix;

/**
 * Allocates space for a NxM matrix.
 *
 * Please note, each row must have the same number of columns.
 *
 * @note The elements are initialized with zero.
 *
 * @param rows Number of rows.
 * @param cols Number of columns.
 *
 * @return Pointer to the allocated matrix object.
 */
Matrix newMatrix( size_t rows, size_t cols );

/**
 * Copies a given matrix into a new memory location.
 *
 * @param m Pointer to the matrix which should be copied.
 * @param rows Number of rows.
 * @param cols Number of columns.
 *
 * @return Pointer to the deep-copy of the matrix.
 */
Matrix copyMatrix( Matrix m, size_t rows, size_t cols );

/**
 * Destroys the given matrix containing N rows.
 *
 * @param m Pointer to the matrix which should be destroyed.
 * @param rows Number of rows.
 */
void deleteMatrix( Matrix m, size_t rows );

/**
 * Renders a matrix to stdout.
 *
 * Each row is rendered in a single line where the matrix elements of the row
 * are separated by whitespace. The columns should be aligned in whitespace.
 * The row ends with a newline character.
 *
 * @param m Pointer to the matrix which should be printed to stdout.
 * @param rows Number of rows.
 * @param cols Number of columns.
 */
void printMatrix( Matrix m, size_t rows, size_t cols );

/**
 * Multiplies two matrices A and B of dimensions A \in NxM and B \in MxP.
 *
 * @param a Pointer to first matrix.
 * @param b Pointer to second matrix.
 * @param n Number of rows of the first matrix.
 * @param m Number of columns of the first matrix and number of rows of the
 * second matrix.
 * @param p Number of columns of the second matrix.
 *
 * @return Pointer to the matrix product of A and B which is of dimension NxP.
 */
Matrix multMatrix( Matrix a, Matrix b, size_t n, size_t m, size_t p );

/**
 * Multiplies each matrix element with the given value.
 *
 * @note: This function alters the given matrix in place.
 *
 * @param a Pointer to the first matrix.
 * @param rows Number of rows.
 * @param cols Number of columns.
 * @param val Value for scaling.
 */
void scaleMatrix( Matrix a, size_t rows, size_t cols, double val );

/**
 * Elementwise comparison of two matrices of same dimensions.
 *
 * @param a Pointer to first matrix.
 * @param b Pointer to the second matrix.
 * @param rows Number of rows.
 * @param cols Number of columns.
 *
 * @return True if the matrices are elementwisely the same, false otherwise.
 */
bool equalMatrix( Matrix a, Matrix b, size_t rows, size_t cols );

#endif  // MATRIX_H
