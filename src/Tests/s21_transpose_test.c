#include "s21_tests.h"

START_TEST(transpose_0) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(2, 3, &A);
  A.matrix[0][0] = 16.81917950;
  A.matrix[0][1] = -23.23668050;
  A.matrix[0][2] = 35.51556450;
  A.matrix[1][0] = -0.00261292;
  A.matrix[1][1] = -400.78935000;
  A.matrix[1][2] = 157.39789500;
  s21_create_matrix(3, 2, &expected_result);
  expected_result.matrix[0][0] = 16.81917950;
  expected_result.matrix[0][1] = -0.00261292;
  expected_result.matrix[1][0] = -23.23668050;
  expected_result.matrix[1][1] = -400.78935000;
  expected_result.matrix[2][0] = 35.51556450;
  expected_result.matrix[2][1] = 157.39789500;

  ck_assert_int_eq(s21_transpose(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(transpose_1) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(2, 3, &A);
  A.matrix[0][0] = 2.14785295;
  A.matrix[0][1] = 0.35961424;
  A.matrix[0][2] = 4.38537635;
  A.matrix[1][0] = -5442.63450000;
  A.matrix[1][1] = -778804.45000000;
  A.matrix[1][2] = -1.28421950;
  s21_create_matrix(3, 2, &expected_result);
  expected_result.matrix[0][0] = 2.14785295;
  expected_result.matrix[0][1] = -5442.63450000;
  expected_result.matrix[1][0] = 0.35961424;
  expected_result.matrix[1][1] = -778804.45000000;
  expected_result.matrix[2][0] = 4.38537635;
  expected_result.matrix[2][1] = -1.28421950;

  ck_assert_int_eq(s21_transpose(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(transpose_2) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 2, &A);
  A.matrix[0][0] = -4712.33335000;
  A.matrix[0][1] = -0.03221049;
  A.matrix[1][0] = -670.04050000;
  A.matrix[1][1] = -0.00489849;
  A.matrix[2][0] = 3.01496465;
  A.matrix[2][1] = -0.01501167;
  s21_create_matrix(2, 3, &expected_result);
  expected_result.matrix[0][0] = -4712.33335000;
  expected_result.matrix[0][1] = -670.04050000;
  expected_result.matrix[0][2] = 3.01496465;
  expected_result.matrix[1][0] = -0.03221049;
  expected_result.matrix[1][1] = -0.00489849;
  expected_result.matrix[1][2] = -0.01501167;

  ck_assert_int_eq(s21_transpose(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(transpose_3) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 2, &A);
  A.matrix[0][0] = -0.34200715;
  A.matrix[0][1] = 223140.37500000;
  A.matrix[1][0] = 1.83414005;
  A.matrix[1][1] = -468451.01500000;
  A.matrix[2][0] = -1022630.55000000;
  A.matrix[2][1] = -32456.54050000;
  s21_create_matrix(2, 3, &expected_result);
  expected_result.matrix[0][0] = -0.34200715;
  expected_result.matrix[0][1] = 1.83414005;
  expected_result.matrix[0][2] = -1022630.55000000;
  expected_result.matrix[1][0] = 223140.37500000;
  expected_result.matrix[1][1] = -468451.01500000;
  expected_result.matrix[1][2] = -32456.54050000;

  ck_assert_int_eq(s21_transpose(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(transpose_4) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 5, &A);
  A.matrix[0][0] = -483125.32500000;
  A.matrix[0][1] = -49.31123250;
  A.matrix[0][2] = -45929.21450000;
  A.matrix[0][3] = 2.50384825;
  A.matrix[0][4] = -4908.37965000;
  A.matrix[1][0] = 1.07491455;
  A.matrix[1][1] = -147482.86500000;
  A.matrix[1][2] = 10.25626050;
  A.matrix[1][3] = 0.00526124;
  A.matrix[1][4] = -47.10034250;
  A.matrix[2][0] = -15400.86500000;
  A.matrix[2][1] = 451.28419500;
  A.matrix[2][2] = -0.01979624;
  A.matrix[2][3] = 309198.69500000;
  A.matrix[2][4] = -0.03386659;
  s21_create_matrix(5, 3, &expected_result);
  expected_result.matrix[0][0] = -483125.32500000;
  expected_result.matrix[0][1] = 1.07491455;
  expected_result.matrix[0][2] = -15400.86500000;
  expected_result.matrix[1][0] = -49.31123250;
  expected_result.matrix[1][1] = -147482.86500000;
  expected_result.matrix[1][2] = 451.28419500;
  expected_result.matrix[2][0] = -45929.21450000;
  expected_result.matrix[2][1] = 10.25626050;
  expected_result.matrix[2][2] = -0.01979624;
  expected_result.matrix[3][0] = 2.50384825;
  expected_result.matrix[3][1] = 0.00526124;
  expected_result.matrix[3][2] = 309198.69500000;
  expected_result.matrix[4][0] = -4908.37965000;
  expected_result.matrix[4][1] = -47.10034250;
  expected_result.matrix[4][2] = -0.03386659;

  ck_assert_int_eq(s21_transpose(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(transpose_5) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 5, &A);
  A.matrix[0][0] = 0.00436685;
  A.matrix[0][1] = 28.74566850;
  A.matrix[0][2] = 1779.10995000;
  A.matrix[0][3] = -43.61884950;
  A.matrix[0][4] = 0.41824188;
  A.matrix[1][0] = -132.49949500;
  A.matrix[1][1] = -49.70142650;
  A.matrix[1][2] = -411.40598500;
  A.matrix[1][3] = 23162.69950000;
  A.matrix[1][4] = 7498.28500000;
  A.matrix[2][0] = 4419336.55000000;
  A.matrix[2][1] = 3507253.95000000;
  A.matrix[2][2] = -3092407.95000000;
  A.matrix[2][3] = -257.45003500;
  A.matrix[2][4] = 27.03842450;
  s21_create_matrix(5, 3, &expected_result);
  expected_result.matrix[0][0] = 0.00436685;
  expected_result.matrix[0][1] = -132.49949500;
  expected_result.matrix[0][2] = 4419336.55000000;
  expected_result.matrix[1][0] = 28.74566850;
  expected_result.matrix[1][1] = -49.70142650;
  expected_result.matrix[1][2] = 3507253.95000000;
  expected_result.matrix[2][0] = 1779.10995000;
  expected_result.matrix[2][1] = -411.40598500;
  expected_result.matrix[2][2] = -3092407.95000000;
  expected_result.matrix[3][0] = -43.61884950;
  expected_result.matrix[3][1] = 23162.69950000;
  expected_result.matrix[3][2] = -257.45003500;
  expected_result.matrix[4][0] = 0.41824188;
  expected_result.matrix[4][1] = 7498.28500000;
  expected_result.matrix[4][2] = 27.03842450;

  ck_assert_int_eq(s21_transpose(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(transpose_6) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(2, 3, &A);
  A.matrix[0][0] = 16.81917950;
  A.matrix[0][1] = -23.23668050;
  A.matrix[0][2] = 35.51556450;
  A.matrix[1][0] = -0.00261292;
  A.matrix[1][1] = -400.78935000;
  A.matrix[1][2] = 157.39789500;
  s21_create_matrix(3, 2, &expected_result);
  expected_result.matrix[0][0] = 16.81917950;
  expected_result.matrix[0][1] = -0.00261292;
  expected_result.matrix[1][0] = -23.23668050;
  expected_result.matrix[1][1] = -400.78935000;
  expected_result.matrix[2][0] = 35.51556450;
  expected_result.matrix[2][1] = 157.39789500;

  ck_assert_int_eq(s21_transpose(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(transpose_7) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0};
  s21_create_matrix(2, 3, &A);
  A.matrix[0][0] = 16.81917950;
  A.matrix[0][1] = -23.23668050;
  A.matrix[0][2] = 35.51556450;
  A.matrix[1][0] = -0.00261292;
  A.matrix[1][1] = -400.78935000;
  A.matrix[1][2] = 157.39789500;
  A.columns = -42;

  ck_assert_int_eq(s21_transpose(&A, &result), 1);

  s21_remove_matrix(&A);
}
END_TEST

START_TEST(transpose_8) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(1, 1, &A);
  A.matrix[0][0] = 16.81917950;
  s21_create_matrix(1, 1, &expected_result);
  expected_result.matrix[0][0] = 16.81917950;

  ck_assert_int_eq(s21_transpose(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(transpose_10) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 5, &A);
  A.matrix[0][0] = 321;
  A.matrix[0][1] = 343;
  A.matrix[0][2] = 433;
  A.matrix[0][3] = -2240;
  A.matrix[0][4] = 34110;
  A.matrix[1][0] = -972;
  A.matrix[1][1] = -867;
  A.matrix[1][2] = -411;
  A.matrix[1][3] = 23;
  A.matrix[1][4] = 798;
  A.matrix[2][0] = 436;
  A.matrix[2][1] = 3253;
  A.matrix[2][2] = 9247;
  A.matrix[2][3] = -27;
  A.matrix[2][4] = 27;
  s21_create_matrix(5, 3, &expected_result);
  expected_result.matrix[0][0] = 321;
  expected_result.matrix[0][1] = -972;
  expected_result.matrix[0][2] = 436;
  expected_result.matrix[1][0] = 343;
  expected_result.matrix[1][1] = -867;
  expected_result.matrix[1][2] = 3253;
  expected_result.matrix[2][0] = 433;
  expected_result.matrix[2][1] = -411;
  expected_result.matrix[2][2] = 9247;
  expected_result.matrix[3][0] = -2240;
  expected_result.matrix[3][1] = 23;
  expected_result.matrix[3][2] = -27;
  expected_result.matrix[4][0] = 34110;
  expected_result.matrix[4][1] = 798;
  expected_result.matrix[4][2] = 27;

  ck_assert_int_eq(s21_transpose(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

Suite *test_transpose_matrix(void) {
  Suite *s = suite_create("\033[1;32m-=S21_TRANSPOSE=-\033[0m");
  TCase *tc = tcase_create("transpose_tc");

  tcase_add_test(tc, transpose_0);
  tcase_add_test(tc, transpose_1);
  tcase_add_test(tc, transpose_2);
  tcase_add_test(tc, transpose_3);
  tcase_add_test(tc, transpose_4);
  tcase_add_test(tc, transpose_5);
  tcase_add_test(tc, transpose_6);
  tcase_add_test(tc, transpose_7);
  tcase_add_test(tc, transpose_8);
  tcase_add_test(tc, transpose_10);
  suite_add_tcase(s, tc);
  return s;
}