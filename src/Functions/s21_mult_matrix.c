#include "../s21_matrix.h"
/**
 * @brief Умножение двух матриц
 * @param A Указатель на структуру 1 матрицы
 * @param B Указатель на структуру 2 матрицы
 * @param result Указатель на структуру реузльтата умножения двух матриц
 * @return Код ошибки
 * @retval int
 */
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int result_code = MATRIX_CORRECT;
  if (A && A->rows > 0 && A->columns > 0 && A->matrix && B && B->rows > 0 &&
      B->columns > 0 && B->matrix) {
    if (A->columns == B->rows) {
      s21_create_matrix(A->rows, B->columns, result);
      for (int i = 0; i < result->rows; i++) {
        for (int j = 0; j < result->columns; j++) {
          double sum = 0.0;
          for (int k = 0; k < B->rows; k++) {
            sum = sum + A->matrix[i][k] * B->matrix[k][j];
          }
          result->matrix[i][j] = sum;
        }
      }
    } else {
      result_code = MATRIX_INCORRECT_CALCULATED;
    }
  } else {
    result_code = MATRIX_INCORRECT;
  }
  return result_code;
}