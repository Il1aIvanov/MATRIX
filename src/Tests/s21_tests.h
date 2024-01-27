#ifndef SRC_TESTS_ME_H
#define SRC_TESTS_ME_H

#include <check.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_matrix.h"

Suite *test_eq_matrix(void);
Suite *test_sum_matrix(void);
Suite *test_sub_matrix(void);
Suite *test_mult_number(void);
Suite *test_mult_matrix(void);
Suite *test_transpose_matrix(void);
Suite *test_determinant(void);
Suite *test_calc_complements(void);
Suite *test_inverse_matrix(void);

#endif  // SRC_TESTS_ME_H
