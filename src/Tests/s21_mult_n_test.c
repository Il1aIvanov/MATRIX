#include "s21_tests.h"

START_TEST(mult_number_1) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  double mul = -1927431.100000;
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 0.4830389;
  A.matrix[0][1] = -0.0026124;
  A.matrix[0][2] = 986449.3000000;
  A.matrix[1][0] = -992222.2000000;
  A.matrix[1][1] = 448.9855500;
  A.matrix[1][2] = 0.0036965;
  A.matrix[2][0] = 7764.1750000;
  A.matrix[2][1] = 2402.6424000;
  A.matrix[2][2] = -4438548.1000000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = A.matrix[0][0] * mul;
  expected_result.matrix[0][1] = A.matrix[0][1] * mul;
  expected_result.matrix[0][2] = A.matrix[0][2] * mul;
  expected_result.matrix[1][0] = A.matrix[1][0] * mul;
  expected_result.matrix[1][1] = A.matrix[1][1] * mul;
  expected_result.matrix[1][2] = A.matrix[1][2] * mul;
  expected_result.matrix[2][0] = A.matrix[2][0] * mul;
  expected_result.matrix[2][1] = A.matrix[2][1] * mul;
  expected_result.matrix[2][2] = A.matrix[2][2] * mul;

  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_number_2) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  double mul = 0.183714;
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -199.5723700;
  A.matrix[0][1] = -423918.9400000;
  A.matrix[0][2] = -29657.3360000;
  A.matrix[1][0] = -102186.9400000;
  A.matrix[1][1] = 0.0026520;
  A.matrix[1][2] = -14941.4460000;
  A.matrix[2][0] = -0.3353663;
  A.matrix[2][1] = -0.8618939;
  A.matrix[2][2] = 0.3847056;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = A.matrix[0][0] * mul;
  expected_result.matrix[0][1] = A.matrix[0][1] * mul;
  expected_result.matrix[0][2] = A.matrix[0][2] * mul;
  expected_result.matrix[1][0] = A.matrix[1][0] * mul;
  expected_result.matrix[1][1] = A.matrix[1][1] * mul;
  expected_result.matrix[1][2] = A.matrix[1][2] * mul;
  expected_result.matrix[2][0] = A.matrix[2][0] * mul;
  expected_result.matrix[2][1] = A.matrix[2][1] * mul;
  expected_result.matrix[2][2] = A.matrix[2][2] * mul;

  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_number_3) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  double mul = -0.000290;
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -0.0378099;
  A.matrix[0][1] = -165.6646800;
  A.matrix[0][2] = 891161.1000000;
  A.matrix[1][0] = 3112722.7000000;
  A.matrix[1][1] = -191.2620400;
  A.matrix[1][2] = -188.3522900;
  A.matrix[2][0] = -115557.7300000;
  A.matrix[2][1] = -2549.3030000;
  A.matrix[2][2] = 1.4901139;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = A.matrix[0][0] * mul;
  expected_result.matrix[0][1] = A.matrix[0][1] * mul;
  expected_result.matrix[0][2] = A.matrix[0][2] * mul;
  expected_result.matrix[1][0] = A.matrix[1][0] * mul;
  expected_result.matrix[1][1] = A.matrix[1][1] * mul;
  expected_result.matrix[1][2] = A.matrix[1][2] * mul;
  expected_result.matrix[2][0] = A.matrix[2][0] * mul;
  expected_result.matrix[2][1] = A.matrix[2][1] * mul;
  expected_result.matrix[2][2] = A.matrix[2][2] * mul;

  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_number_4) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  double mul = 24.062905;
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 1277165.8000000;
  A.matrix[0][1] = -28.7232420;
  A.matrix[0][2] = -2439.4698000;
  A.matrix[1][0] = -0.0419208;
  A.matrix[1][1] = -85068.2000000;
  A.matrix[1][2] = -475.2236600;
  A.matrix[2][0] = 0.4428307;
  A.matrix[2][1] = -13673.5620000;
  A.matrix[2][2] = 0.0045887;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = A.matrix[0][0] * mul;
  expected_result.matrix[0][1] = A.matrix[0][1] * mul;
  expected_result.matrix[0][2] = A.matrix[0][2] * mul;
  expected_result.matrix[1][0] = A.matrix[1][0] * mul;
  expected_result.matrix[1][1] = A.matrix[1][1] * mul;
  expected_result.matrix[1][2] = A.matrix[1][2] * mul;
  expected_result.matrix[2][0] = A.matrix[2][0] * mul;
  expected_result.matrix[2][1] = A.matrix[2][1] * mul;
  expected_result.matrix[2][2] = A.matrix[2][2] * mul;

  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_number_5) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  double mul = 202.371420;
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 545.0691000;
  A.matrix[0][1] = 42710.4660000;
  A.matrix[0][2] = 42.6911190;
  A.matrix[1][0] = -44801.8610000;
  A.matrix[1][1] = -17574.1730000;
  A.matrix[1][2] = 152926.4000000;
  A.matrix[2][0] = 0.0043415;
  A.matrix[2][1] = -2305.1156000;
  A.matrix[2][2] = 0.0379802;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = A.matrix[0][0] * mul;
  expected_result.matrix[0][1] = A.matrix[0][1] * mul;
  expected_result.matrix[0][2] = A.matrix[0][2] * mul;
  expected_result.matrix[1][0] = A.matrix[1][0] * mul;
  expected_result.matrix[1][1] = A.matrix[1][1] * mul;
  expected_result.matrix[1][2] = A.matrix[1][2] * mul;
  expected_result.matrix[2][0] = A.matrix[2][0] * mul;
  expected_result.matrix[2][1] = A.matrix[2][1] * mul;
  expected_result.matrix[2][2] = A.matrix[2][2] * mul;

  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_number_6) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  double mul = 356.126530;
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -727347.2000000;
  A.matrix[0][1] = -46498.3900000;
  A.matrix[0][2] = -0.0209659;
  A.matrix[1][0] = -0.0007279;
  A.matrix[1][1] = 1231437.3000000;
  A.matrix[1][2] = -4580.0860000;
  A.matrix[2][0] = 1687.5998000;
  A.matrix[2][1] = 14176.3120000;
  A.matrix[2][2] = -78.9657100;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = A.matrix[0][0] * mul;
  expected_result.matrix[0][1] = A.matrix[0][1] * mul;
  expected_result.matrix[0][2] = A.matrix[0][2] * mul;
  expected_result.matrix[1][0] = A.matrix[1][0] * mul;
  expected_result.matrix[1][1] = A.matrix[1][1] * mul;
  expected_result.matrix[1][2] = A.matrix[1][2] * mul;
  expected_result.matrix[2][0] = A.matrix[2][0] * mul;
  expected_result.matrix[2][1] = A.matrix[2][1] * mul;
  expected_result.matrix[2][2] = A.matrix[2][2] * mul;

  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_number_7) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  double mul = -32840.623000;
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 366.8155000;
  A.matrix[0][1] = 2475.9400000;
  A.matrix[0][2] = 0.0044011;
  A.matrix[1][0] = -0.0313799;
  A.matrix[1][1] = -823102.8000000;
  A.matrix[1][2] = -258466.8600000;
  A.matrix[2][0] = -51606.1800000;
  A.matrix[2][1] = 24021.4290000;
  A.matrix[2][2] = 225156.3100000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = A.matrix[0][0] * mul;
  expected_result.matrix[0][1] = A.matrix[0][1] * mul;
  expected_result.matrix[0][2] = A.matrix[0][2] * mul;
  expected_result.matrix[1][0] = A.matrix[1][0] * mul;
  expected_result.matrix[1][1] = A.matrix[1][1] * mul;
  expected_result.matrix[1][2] = A.matrix[1][2] * mul;
  expected_result.matrix[2][0] = A.matrix[2][0] * mul;
  expected_result.matrix[2][1] = A.matrix[2][1] * mul;
  expected_result.matrix[2][2] = A.matrix[2][2] * mul;

  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_number_8) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  double mul = 1311.387000;
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 3.2216126;
  A.matrix[0][1] = 0.0007628;
  A.matrix[0][2] = 74527.9200000;
  A.matrix[1][0] = -0.0041341;
  A.matrix[1][1] = 0.4621115;
  A.matrix[1][2] = 29.1181370;
  A.matrix[2][0] = 495.3991900;
  A.matrix[2][1] = -0.0052105;
  A.matrix[2][2] = -0.0041898;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = A.matrix[0][0] * mul;
  expected_result.matrix[0][1] = A.matrix[0][1] * mul;
  expected_result.matrix[0][2] = A.matrix[0][2] * mul;
  expected_result.matrix[1][0] = A.matrix[1][0] * mul;
  expected_result.matrix[1][1] = A.matrix[1][1] * mul;
  expected_result.matrix[1][2] = A.matrix[1][2] * mul;
  expected_result.matrix[2][0] = A.matrix[2][0] * mul;
  expected_result.matrix[2][1] = A.matrix[2][1] * mul;
  expected_result.matrix[2][2] = A.matrix[2][2] * mul;

  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_number_9) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  double mul = -219.415940;
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -2515183.7000000;
  A.matrix[0][1] = 3688.2912000;
  A.matrix[0][2] = 348.9930300;
  A.matrix[1][0] = -0.1406301;
  A.matrix[1][1] = 3.2679043;
  A.matrix[1][2] = -523873.2000000;
  A.matrix[2][0] = 10.4482720;
  A.matrix[2][1] = 1650.3624000;
  A.matrix[2][2] = 267.0936600;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = A.matrix[0][0] * mul;
  expected_result.matrix[0][1] = A.matrix[0][1] * mul;
  expected_result.matrix[0][2] = A.matrix[0][2] * mul;
  expected_result.matrix[1][0] = A.matrix[1][0] * mul;
  expected_result.matrix[1][1] = A.matrix[1][1] * mul;
  expected_result.matrix[1][2] = A.matrix[1][2] * mul;
  expected_result.matrix[2][0] = A.matrix[2][0] * mul;
  expected_result.matrix[2][1] = A.matrix[2][1] * mul;
  expected_result.matrix[2][2] = A.matrix[2][2] * mul;

  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_number_10) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0};
  double mul = -219.415940;
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -2515183.7000000;
  A.matrix[0][1] = 3688.2912000;
  A.matrix[0][2] = 348.9930300;
  A.matrix[1][0] = -0.1406301;
  A.matrix[1][1] = 3.2679043;
  A.matrix[1][2] = -523873.2000000;
  A.matrix[2][0] = 10.4482720;
  A.matrix[2][1] = 1650.3624000;
  A.matrix[2][2] = 267.0936600;
  A.columns = -1;

  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 1);

  s21_remove_matrix(&A);
}
END_TEST

START_TEST(mult_number_11) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0};
  double mul = 0.0;
  ck_assert_int_eq(s21_mult_number(&A, mul, &result), 1);
}
END_TEST

Suite *test_mult_number(void) {
  Suite *s = suite_create("\033[1;32m-=S21_MULT_NUMBER=-\033[0m");
  TCase *tc = tcase_create("mult_number_tc");

  tcase_add_test(tc, mult_number_1);
  tcase_add_test(tc, mult_number_2);
  tcase_add_test(tc, mult_number_3);
  tcase_add_test(tc, mult_number_4);
  tcase_add_test(tc, mult_number_5);
  tcase_add_test(tc, mult_number_6);
  tcase_add_test(tc, mult_number_7);
  tcase_add_test(tc, mult_number_8);
  tcase_add_test(tc, mult_number_9);
  tcase_add_test(tc, mult_number_10);
  tcase_add_test(tc, mult_number_11);
  suite_add_tcase(s, tc);
  return s;
}