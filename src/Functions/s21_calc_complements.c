#include "../s21_matrix.h"
/**
 * @brief Матрица алгебраических дополнений
 * @param A Указатель на структуру исходной матрицы
 * @param result Указатель на структуру результата матрицы алгебраических
 * дополнений
 * @return Код ошибки
 * @retval int
 */
int s21_calc_complements(matrix_t *A, matrix_t *result) {
  int result_code = MATRIX_CORRECT;
  if (A && A->rows > 0 && A->columns > 0 && A->matrix) {
    if (A->rows == A->columns) {
      s21_create_matrix(A->rows, A->columns, result);
      if (A->rows == 1 && A->columns == 1) {
        result->matrix[0][0] = 1;
      }
      matrix_t matrix_minor = {NULL, 0, 0};
      double det = 0.0;
      for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
          s21_find_minor(A, &matrix_minor, i, j);
          s21_determinant(&matrix_minor, &det);
          result->matrix[i][j] = det;
          s21_remove_matrix(&matrix_minor);
        }
      }
      for (int i = 0; i < result->rows; i++) {
        for (int j = 0; j < result->columns; j++) {
          result->matrix[i][j] = result->matrix[i][j] * pow(-1, i + j);
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
