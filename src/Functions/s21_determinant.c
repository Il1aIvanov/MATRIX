#include "../s21_matrix.h"
/**
 * @brief Определитель матрицы
 * @param A Указатель на структуру
 * @param result  Результат определителя
 * @return Код ошибки
 * @retval int
 */
int s21_determinant(matrix_t *A, double *result) {
  int result_code = MATRIX_CORRECT;
  if (A && A->rows > 0 && A->columns > 0 && A->matrix) {
    if (A->rows == A->columns) {
      if (A->rows == 1) {
        *result = A->matrix[0][0];
      } else if (A->rows == 2) {
        *result = s21_determinant_2(A);
      } else if (A->rows == 3) {
        *result = s21_determinant_3(A);
      } else {
        double det = *result;
        det = 1.0;
        int SwapCount = s21_calculate_determinant(A);
        for (int i = 0; i < A->rows; i++) {
          det = det * A->matrix[i][i];
        }
        det = det * pow(-1, SwapCount);
        *result = det;
      }
    } else {
      result_code = MATRIX_INCORRECT_CALCULATED;
    }
  } else {
    result_code = MATRIX_INCORRECT;
  }
  return result_code;
}
