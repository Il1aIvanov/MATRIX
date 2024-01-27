# MATRIX
Реализация библиотеки matrix.h.

### Структура матрицы на языке C:

```c
typedef struct matrix_struct {
    double** matrix;
    int rows;
    int columns;
} matrix_t;
```

## Операции над матрицами

Все операции (кроме сравнения матриц) должны возвращать результирующий код:  
- 0 - OK
- 1 - Ошибка, некорректная матрица   
- 2 - Ошибка вычисления (несовпадающие размеры матриц; матрица, для которой нельзя провести вычисления и т.д.)

### Создание матриц (create_matrix)

```c
int s21_create_matrix(int rows, int columns, matrix_t *result);
```

### Очистка матриц (remove_matrix)

```c
void s21_remove_matrix(matrix_t *A);
```

### Сравнение матриц (eq_matrix)

```c
#define SUCCESS 1
#define FAILURE 0

int s21_eq_matrix(matrix_t *A, matrix_t *B);
```

### Сложение (sum_matrix) и вычитание матриц (sub_matrix)

```c
int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
```
### Умножение матрицы на число (mult_number). Умножение двух матриц (mult_matrix)

```c
int s21_mult_number(matrix_t *A, double number, matrix_t *result);
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
```

Произведением матрицы A = m × n на число λ называется матрица B = m × n = λ × A, элементы которой определяются равенствами B = λ × A(i,j).

```
                1 2 3   2 4 6   
B = 2 × A = 2 × 0 4 2 = 0 8 4 
                2 3 4   4 6 8   
```

Произведением матрицы A = m × k на матрицу B = k × n называется матрица C = m × n = A × B размера m × n, элементы которой определяются равенством C(i,j) = A(i,1) × B(1,j) + A(i,2) × B(2,j) + … + A(i,k) × B(k,j).

```
            1 4    1 -1  1    9 11 17   
C = A × B = 2 5  × 2  3  4 = 12 13 22 
            3 6              15 15 27
```

Компоненты матрицы С вычисляются следующим образом:

```		
```

### Транспонирование матрицы (transpose)

```c
int s21_transpose(matrix_t *A, matrix_t *result);
```
```
```

### Минор матрицы и матрица алгебраических дополнений (calc_complements)

```c
int s21_calc_complements(matrix_t *A, matrix_t *result);
```

```
```

```
```

```
```

```
```

### Определитель матрицы (determinant)

```c
int s21_determinant(matrix_t *A, double *result);
```

```
```

### Обратная матрица (inverse_matrix)

```c
int s21_inverse_matrix(matrix_t *A, matrix_t *result);
```

```
```

```
```

```
```

```
```


```
```

# Chapter III

## Реализация функции библиотеки matrix.h


- Библиотека должна быть разработана на языке Си стандарта C11 с использованием компилятора gcc 
- Оформить решение как статическую библиотеку (с заголовочным файлом s21_matrix.h)
- Библиотека должна быть разработана в соответствии с принципами структурного программирования
- Подготовить полное покрытие unit-тестами функций библиотеки c помощью библиотеки Check
- Unit-тесты должны покрывать не менее 80% каждой функции
- Предусмотреть Makefile для сборки библиотеки и тестов (с целями all, clean, test, s21_matrix.a, gcov_report)
- В цели gcov_report должен формироваться отчёт gcov в виде html страницы. Для этого unit-тесты должны запускаться с флагами gcov 
- Матрица должна быть реализована в виде структуры описанной [выше](#структура-матрицы-на-языке-c) 
- Проверяемая точность дробной части - максимум 6 знаков после запятой.