#include "../s21_matrix.h"
/**
 * @brief Создание матрицы
 * @param rows Строки
 * @param columns Столбцы
 * @param result Указатель на структуру
 * @return Код ошибки
 * @retval int
 */
int s21_create_matrix(int rows, int columns, matrix_t *result) {
  int result_code = MATRIX_CORRECT;
  if (result && rows && columns > 0) {
    result->rows = rows;
    result->columns = columns;
    result->matrix = (double **)malloc(rows * sizeof(double *));
    for (int i = 0; i < rows; i++) {
      result->matrix[i] = (double *)malloc(columns * sizeof(double));
    }

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        result->matrix[i][j] = 0;
      }
    }
  } else {
    result_code = MATRIX_INCORRECT;
  }
  return result_code;
}