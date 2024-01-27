#include "../s21_matrix.h"
/**
 * @brief Транспонирование матрицы
 * @param A Указатель на структуру исходной матрицы
 * @param result Указатель на структуру транспонированной матрицы
 * @return Код ошибки
 * @retval int
 */
int s21_transpose(matrix_t *A, matrix_t *result) {
  int result_code = MATRIX_CORRECT;
  if (A && A->rows > 0 && A->columns > 0 && A->matrix) {
    s21_create_matrix(A->columns, A->rows, result);
    for (int i = 0; i < result->rows; i++) {
      for (int j = 0; j < result->columns; j++) {
        result->matrix[i][j] = A->matrix[j][i];
      }
    }
  } else {
    result_code = MATRIX_INCORRECT;
  }
  return result_code;
}