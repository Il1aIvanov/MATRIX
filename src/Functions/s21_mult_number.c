#include "../s21_matrix.h"
/**
 * @brief Умножение матрицы на число
 * @param A Указатель на стркутуру исходной матрицы
 * @param number Число, на которое будет умножаться матрица
 * @param result Указатель на структуру реузльтата умножения матрицы на число
 * @return Код ошибки
 * @retval int
 */
int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  int result_code = MATRIX_CORRECT;
  if (A && A->rows > 0 && A->columns > 0 && A->matrix) {
    s21_create_matrix(A->rows, A->columns, result);
    for (int i = 0; i < result->rows; i++) {
      for (int j = 0; j < result->columns; j++) {
        result->matrix[i][j] = A->matrix[i][j] * number;
      }
    }
  } else {
    result_code = MATRIX_INCORRECT;
  }
  return result_code;
}