#include "../s21_matrix.h"
/**
 * @brief метод Исключения Гаусса, для матрицы 4...n-ого порядка
 * @param A Указатель на структуру матрицы
 * @return Кол-во замен строк
 * @retval int
 */
int s21_calculate_determinant(matrix_t *A) {
  int SwapCount = 0;
  for (int i = 0; i < A->rows - 1; i++) {
    for (int k = i + 1; k < A->rows; k++) {
      if (fabs(A->matrix[i][i]) < fabs(A->matrix[k][i])) {
        SwapCount++;
        for (int j = 0; j < A->columns; j++) {
          double temp;
          temp = A->matrix[i][j];
          A->matrix[i][j] = A->matrix[k][j];
          A->matrix[k][j] = temp;
        }
      }
    }
    for (int k = i + 1; k < A->rows; k++) {
      double term = A->matrix[k][i] / A->matrix[i][i];
      if (A->matrix[i][i] == 0) {
        term = 1;
      }
      for (int j = 0; j < A->columns; j++) {
        A->matrix[k][j] = A->matrix[k][j] - term * A->matrix[i][j];
      }
    }
  }
  return SwapCount;
}

/**
 * @brief Минор матрицы
 */
void s21_find_minor(matrix_t *A, matrix_t *result, int i, int j) {
  s21_create_matrix(A->rows - 1, A->columns - 1, result);
  int i_res = 0, j_res = 0;
  for (int i_i = 0; i_i < A->rows; i_i++) {
    if (i_i != i) {
      j_res = 0;
      for (int j_j = 0; j_j < A->columns; j_j++) {
        if (j_j != j) {
          result->matrix[i_res][j_res++] = A->matrix[i_i][j_j];
        }
      }
      i_res++;
    }
  }
}

/**
 * @brief Определитель 2-ого порядка
 * @return Определитель
 * @retval double
 */
double s21_determinant_2(matrix_t *A) {
  double det = 0.0;
  det =
      (A->matrix[0][0] * A->matrix[1][1]) - (A->matrix[1][0] * A->matrix[0][1]);
  return det;
}

/**
 * @brief Определитель 3-ого порядка
 * @return Определитель
 * @retval double
 */
double s21_determinant_3(matrix_t *A) {
  double det = 0.0;
  det = (A->matrix[0][0] * A->matrix[1][1] * A->matrix[2][2]) +
        (A->matrix[0][1] * A->matrix[1][2] * A->matrix[2][0]) +
        (A->matrix[0][2] * A->matrix[1][0] * A->matrix[2][1]) -
        (A->matrix[2][0] * A->matrix[1][1] * A->matrix[0][2]) -
        (A->matrix[2][1] * A->matrix[1][2] * A->matrix[0][0]) -
        (A->matrix[2][2] * A->matrix[1][0] * A->matrix[0][1]);
  return det;
}