#include "../s21_matrix.h"
/**
 * @brief Очистка матриц
 * @param A Указатель на структуру
 */
void s21_remove_matrix(matrix_t *A) {
  for (int i = 0; i < A->rows; i++) {
    free(A->matrix[i]);
  }
  free(A->matrix);
}