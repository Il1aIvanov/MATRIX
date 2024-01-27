#include "../s21_matrix.h"
/**
 * @brief Сравнение матриц
 * @param A Указатель на стрктуру 1 матрицы
 * @param B Указатель на структуру 2 матрицы
 * @return Код ошибки
 * @retval int
 */
int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int result_code = FAILURE;
  if (A && A->rows > 0 && A->columns > 0 && A->matrix && B && B->rows > 0 &&
      B->columns > 0 && B->matrix) {
    if ((A->rows == B->rows) && (A->columns == B->columns)) {
      result_code = SUCCESS;
      for (int i = 0; i < A->rows; i++) {
        for (int j = 0; j < A->columns; j++) {
          if (fabs(A->matrix[i][j] - B->matrix[i][j]) > 0.0000001) {
            result_code = FAILURE;
          }
        }
      }
    }
  }
  return result_code;
}