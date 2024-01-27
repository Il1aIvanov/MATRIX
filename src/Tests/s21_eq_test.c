#include "s21_tests.h"

START_TEST(eq_matrix_1) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0};
  s21_create_matrix(1, 1, &A);
  A.matrix[0][0] = 1;
  s21_create_matrix(1, 1, &B);
  B.matrix[0][0] = 0;
  ck_assert_int_eq(s21_eq_matrix(&A, &B), 0);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(eq_matrix_2) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 1;
  A.matrix[0][1] = 2;
  A.matrix[1][0] = 3;
  A.matrix[1][1] = 4;
  s21_create_matrix(2, 2, &B);
  B.matrix[0][0] = 1;
  B.matrix[0][1] = 2;
  B.matrix[1][0] = 3;
  B.matrix[1][1] = 4;
  ck_assert_int_eq(s21_eq_matrix(&A, &B), 1);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(eq_matrix_3) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 1;
  A.matrix[0][1] = 2;
  A.matrix[1][0] = 3;
  A.matrix[1][1] = 4;
  s21_create_matrix(2, 2, &B);
  B.matrix[0][0] = 1;
  B.matrix[0][1] = 2;
  B.matrix[1][0] = 3;
  B.matrix[1][1] = -4;
  ck_assert_int_eq(s21_eq_matrix(&A, &B), 0);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(eq_matrix_4) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 1;
  A.matrix[0][1] = 2;
  A.matrix[1][0] = 3;
  A.matrix[1][1] = 4;
  s21_create_matrix(2, 2, &B);
  B.matrix[0][0] = -1;
  B.matrix[0][1] = 2;
  B.matrix[1][0] = 3;
  B.matrix[1][1] = 4;
  ck_assert_int_eq(s21_eq_matrix(&A, &B), 0);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(eq_matrix_5) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 0.1234567;
  A.matrix[0][1] = 1.2345678;
  A.matrix[1][0] = 2.3456789;
  A.matrix[1][1] = 3.4567891;
  s21_create_matrix(2, 2, &B);
  B.matrix[0][0] = 0.1234567;
  B.matrix[0][1] = 1.2345678;
  B.matrix[1][0] = 2.3456789;
  B.matrix[1][1] = 3.4567891;
  ck_assert_int_eq(s21_eq_matrix(&A, &B), 1);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(eq_matrix_6) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 0.12345678;
  A.matrix[0][1] = 1.23456789;
  A.matrix[1][0] = 2.34567891;
  A.matrix[1][1] = 3.45678910;
  s21_create_matrix(2, 2, &B);
  B.matrix[0][0] = 0.12345678;
  B.matrix[0][1] = 1.23456789;
  B.matrix[1][0] = 2.34567891;
  B.matrix[1][1] = 3.45678910;
  ck_assert_int_eq(s21_eq_matrix(&A, &B), 1);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(eq_matrix_7) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 0.12345678;
  A.matrix[0][1] = -1.23456789;
  A.matrix[1][0] = 2.34567891;
  A.matrix[1][1] = -3.45678910;
  s21_create_matrix(2, 2, &B);
  B.matrix[0][0] = 0.12345678;
  B.matrix[0][1] = -1.23456789;
  B.matrix[1][0] = 2.34567891;
  B.matrix[1][1] = -3.45678910;
  ck_assert_int_eq(s21_eq_matrix(&A, &B), 1);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(eq_matrix_8) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 0.1234569;
  A.matrix[0][1] = -1.23456789;
  A.matrix[1][0] = 2.34567891;
  A.matrix[1][1] = -3.45678910;
  s21_create_matrix(2, 2, &B);
  B.matrix[0][0] = 0.12345678;
  B.matrix[0][1] = -1.23456789;
  B.matrix[1][0] = 2.34567891;
  B.matrix[1][1] = -3.45678910;
  ck_assert_int_eq(s21_eq_matrix(&A, &B), 0);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(eq_matrix_9) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 0;
  A.matrix[0][1] = 1;
  A.matrix[1][0] = 2;
  A.matrix[1][1] = 3;
  s21_create_matrix(2, 2, &B);
  B.matrix[0][0] = 0;
  B.matrix[0][1] = 1;
  B.matrix[1][0] = 2;
  B.matrix[1][1] = 3;
  A.columns = 0;

  ck_assert_int_eq(s21_eq_matrix(NULL, &B), 0);
  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(eq_matrix_10) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0};
  ck_assert_int_eq(s21_eq_matrix(&A, &B), 0);
}
END_TEST

Suite *test_eq_matrix(void) {
  Suite *s = suite_create("\033[1;32m-=S21_EQ_MATRIX=-\033[0m");
  TCase *tc = tcase_create("eq_matrix_tc");

  tcase_add_test(tc, eq_matrix_1);
  tcase_add_test(tc, eq_matrix_2);
  tcase_add_test(tc, eq_matrix_3);
  tcase_add_test(tc, eq_matrix_4);
  tcase_add_test(tc, eq_matrix_5);
  tcase_add_test(tc, eq_matrix_6);
  tcase_add_test(tc, eq_matrix_7);
  tcase_add_test(tc, eq_matrix_8);
  tcase_add_test(tc, eq_matrix_9);
  tcase_add_test(tc, eq_matrix_10);
  suite_add_tcase(s, tc);
  return s;
}