#include "../s21_matrix.h"
/**
 * @brief Обратная матрица
 * @param A Указатель на структуру исходной матрицы
 * @param result Указатель на структуру обратной матрицы
 * @return Код ошибки
 * @retval int
 */
int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
  int result_code = MATRIX_CORRECT;
  if (A && A->rows > 0 && A->columns > 0 && A->matrix) {
    if (A->rows == A->columns) {
      double det = 0.0;
      s21_determinant(A, &det);
      if (det != 0) {
        matrix_t complements_matrix = {NULL, 0, 0};
        s21_calc_complements(A, &complements_matrix);
        s21_transpose(&complements_matrix, result);
        s21_remove_matrix(&complements_matrix);
        for (int i = 0; i < result->rows; i++) {
          for (int j = 0; j < result->columns; j++) {
            result->matrix[i][j] = result->matrix[i][j] / det;
          }
        }
      } else {
        result_code = MATRIX_INCORRECT_CALCULATED;
      }
    } else {
      result_code = MATRIX_INCORRECT_CALCULATED;
    }
  } else {
    result_code = MATRIX_INCORRECT;
  }
  return result_code;
}