#include "s21_tests.h"

START_TEST(determinant_1) {
  matrix_t A = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 17.0;
  A.matrix[0][1] = 42.0;

  A.matrix[1][0] = -20.0;
  A.matrix[1][1] = 22.0;

  double expected_result = 1214.0;
  double result = 0;
  ck_assert_int_eq(s21_determinant(&A, &result), 0);
  ck_assert_int_eq((expected_result - result <= 0.0000001 &&
                    expected_result - result >= -0.0000001),
                   1);

  s21_remove_matrix(&A);
}
END_TEST

START_TEST(determinant_2) {
  matrix_t A = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -543960.449999999953434;
  A.matrix[0][1] = -9611.370500000000902;
  A.matrix[0][2] = 0.076989225000000;

  A.matrix[1][0] = 4524.892499999999927;
  A.matrix[1][1] = -2949.727949999999964;
  A.matrix[1][2] = 0.047534138500000;

  A.matrix[2][0] = -41.785770499999998;
  A.matrix[2][1] = 0.073204105000000;
  A.matrix[2][2] = -417991.715000000025611;

  double expected_result = -688861114339242.5000000;
  double result = 0;
  ck_assert_int_eq(s21_determinant(&A, &result), 0);
  ck_assert_int_eq((expected_result - result <= 0.0000001 &&
                    expected_result - result >= -0.0000001),
                   1);

  s21_remove_matrix(&A);
}
END_TEST

START_TEST(determinant_3) {
  matrix_t A = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 2606.885150000000067;
  A.matrix[0][1] = 49.031706499999999;
  A.matrix[0][2] = -0.000192262050000;

  A.matrix[1][0] = -49944.456500000000233;
  A.matrix[1][1] = 153389.535000000003492;
  A.matrix[1][2] = -0.289829435000000;

  A.matrix[2][0] = -31.225942499999999;
  A.matrix[2][1] = -35.091067500000001;
  A.matrix[2][2] = 0.039382641500000;

  double expected_result = 15817009.0004357;
  double result = 0;
  ck_assert_int_eq(s21_determinant(&A, &result), 0);
  ck_assert_int_eq((expected_result - result <= 0.0000001 &&
                    expected_result - result >= -0.0000001),
                   1);

  s21_remove_matrix(&A);
}
END_TEST

START_TEST(determinant_4) {
  matrix_t A = {NULL, 0, 0};
  s21_create_matrix(4, 4, &A);
  A.matrix[0][0] = 2606.885150000000067;
  A.matrix[0][1] = 49.031706499999999;
  A.matrix[0][2] = -0.000192262050000;
  A.matrix[0][3] = 4324540.00363088;

  A.matrix[1][0] = -49944.456500000000233;
  A.matrix[1][1] = 153389.535000000003492;
  A.matrix[1][2] = -0.289829435000000;
  A.matrix[1][3] = -4431054534.229000000;

  A.matrix[2][0] = -31.225942499999999;
  A.matrix[2][1] = -35.091067500000001;
  A.matrix[2][2] = 0.039382641500000;
  A.matrix[2][3] = -35.091067500000001;

  A.matrix[3][0] = -21.225942499999999;
  A.matrix[3][1] = -45.091067500000001;
  A.matrix[3][2] = 50.039382641500000;
  A.matrix[3][3] = -15.091067500000001;

  double expected_result = 18509341088079528.000000;
  double result = 0.0;
  ck_assert_int_eq(s21_determinant(&A, &result), 0);
  ck_assert_int_eq((expected_result - result <= 0.0000001 &&
                    expected_result - result >= -0.0000001),
                   1);
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(determinant_5) {
  matrix_t A = {NULL, 0, 0};
  double result = 0.0;
  ck_assert_int_eq(s21_determinant(&A, &result), 1);
}
END_TEST

START_TEST(determinant_6) {
  matrix_t A = {NULL, 0, 0};
  s21_create_matrix(8, 8, &A);
  A.matrix[0][0] = 766720;
  A.matrix[0][1] = -7630;
  A.matrix[0][2] = -677640;
  A.matrix[0][3] = -176670;
  A.matrix[0][4] = 56776765;
  A.matrix[0][5] = 6760;
  A.matrix[0][6] = 4765;
  A.matrix[0][7] = 2765;

  A.matrix[1][0] = 2765;
  A.matrix[1][1] = 15;
  A.matrix[1][2] = 57676760;
  A.matrix[1][3] = 27676765;
  A.matrix[1][4] = 5765;
  A.matrix[1][5] = 60;
  A.matrix[1][6] = 76765;
  A.matrix[1][7] = 7625;

  A.matrix[2][0] = 767655;
  A.matrix[2][1] = 6760;
  A.matrix[2][2] = 767645;
  A.matrix[2][3] = 2765;
  A.matrix[2][4] = 576765;
  A.matrix[2][5] = 6760;
  A.matrix[2][6] = 7645;
  A.matrix[2][7] = 2765;

  A.matrix[3][0] = 1670;
  A.matrix[3][1] = 9675;
  A.matrix[3][2] = 4576;
  A.matrix[3][3] = 1760;
  A.matrix[3][4] = 5675;
  A.matrix[3][5] = 6076;
  A.matrix[3][6] = 4765;
  A.matrix[3][7] = 2675;

  A.matrix[4][0] = 176760;
  A.matrix[4][1] = 7695;
  A.matrix[4][2] = 476765;
  A.matrix[4][3] = 76760;
  A.matrix[4][4] = 5765;
  A.matrix[4][5] = 6670;
  A.matrix[4][6] = 4765;
  A.matrix[4][7] = 2675;

  A.matrix[5][0] = 1760;
  A.matrix[5][1] = 95435;
  A.matrix[5][2] = 45435;
  A.matrix[5][3] = 54310;
  A.matrix[5][4] = 5765;
  A.matrix[5][5] = 64530;
  A.matrix[5][6] = 4655;
  A.matrix[5][7] = 2765;

  A.matrix[6][0] = 1450;
  A.matrix[6][1] = 954335;
  A.matrix[6][2] = 445345;
  A.matrix[6][3] = 15430;
  A.matrix[6][4] = 54535;
  A.matrix[6][5] = 6043;
  A.matrix[6][6] = 44535;
  A.matrix[6][7] = 54325;

  A.matrix[7][0] = 1543540;
  A.matrix[7][1] = 9555;
  A.matrix[7][2] = 454335;
  A.matrix[7][3] = 15430;
  A.matrix[7][4] = 5543545;
  A.matrix[7][5] = 654340;
  A.matrix[7][6] = 45435;
  A.matrix[7][7] = 25435;

  double expected_result =
      1340956069773839442634652916774846009043845120.000000;
  double result = 0.0;
  ck_assert_int_eq(s21_determinant(&A, &result), 0);
  ck_assert_int_eq((expected_result - result <= 0.0000001 &&
                    expected_result - result >= -0.0000001),
                   1);
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(determinant_7) {
  matrix_t A = {NULL, 1, 0};
  double result = 0.0;
  ck_assert_int_eq(s21_determinant(&A, &result), 1);
}
END_TEST

START_TEST(determinant_8) {
  matrix_t A = {NULL, 0, 0};
  s21_create_matrix(4, 4, &A);
  A.matrix[0][0] = 1;
  A.matrix[0][1] = 2;
  A.matrix[0][2] = 3;
  A.matrix[0][3] = 4;

  A.matrix[1][0] = 5;
  A.matrix[1][1] = 6;
  A.matrix[1][2] = 7;
  A.matrix[1][3] = 8;

  A.matrix[2][0] = 9;
  A.matrix[2][1] = 10;
  A.matrix[2][2] = 11;
  A.matrix[2][3] = 12;

  A.matrix[3][0] = 13;
  A.matrix[3][1] = 14;
  A.matrix[3][2] = 15;
  A.matrix[3][3] = 16;

  double expected_result = 0.0;
  double result = 0.0;
  ck_assert_int_eq(s21_determinant(&A, &result), 0);
  ck_assert_int_eq((expected_result - result <= 0.0000001 &&
                    expected_result - result >= -0.0000001),
                   1);
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(determinant_9) {
  matrix_t A = {NULL, 0, 0};
  s21_create_matrix(3, 2, &A);
  A.matrix[0][0] = 2606.885150000000067;
  A.matrix[0][1] = 49.031706499999999;

  A.matrix[1][0] = -49944.456500000000233;
  A.matrix[1][1] = 153389.535000000003492;

  A.matrix[2][0] = -31.225942499999999;
  A.matrix[2][1] = -35.091067500000001;
  double result = 0.0;
  ck_assert_int_eq(s21_determinant(&A, &result), 2);
  s21_remove_matrix(&A);
}
END_TEST

START_TEST(determinant_10) {
  matrix_t A = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 38728742987.38728437982;
  A.matrix[0][1] = -3439233442.38438274832874;

  A.matrix[1][0] = -543534520.5345345453;
  A.matrix[1][1] = 34456628982.998487458998;

  double expected_result = 1332592585994195435520.000000;
  double result = 0;
  ck_assert_int_eq(s21_determinant(&A, &result), 0);
  ck_assert_int_eq((expected_result - result <= 0.0000001 &&
                    expected_result - result >= -0.0000001),
                   1);

  s21_remove_matrix(&A);
}
END_TEST

Suite *test_determinant(void) {
  Suite *s = suite_create("\033[1;32m-=S21_DETERMINANT=-\033[0m");
  TCase *tc = tcase_create("determinant_tc");

  tcase_add_test(tc, determinant_1);
  tcase_add_test(tc, determinant_2);
  tcase_add_test(tc, determinant_3);
  tcase_add_test(tc, determinant_4);
  tcase_add_test(tc, determinant_5);
  tcase_add_test(tc, determinant_6);
  tcase_add_test(tc, determinant_7);
  tcase_add_test(tc, determinant_8);
  tcase_add_test(tc, determinant_9);
  tcase_add_test(tc, determinant_10);
  suite_add_tcase(s, tc);
  return s;
}