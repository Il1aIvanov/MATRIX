#include "s21_tests.h"

START_TEST(sub_matrix_1) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -619987.4000000;
  A.matrix[0][1] = -1010883.8000000;
  A.matrix[0][2] = 320661.2700000;
  A.matrix[1][0] = -3710697.9000000;
  A.matrix[1][1] = 29059.0270000;
  A.matrix[1][2] = -19208.2020000;
  A.matrix[2][0] = 0.0479208;
  A.matrix[2][1] = -407349.3300000;
  A.matrix[2][2] = 435511.3700000;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 137.7129600;
  B.matrix[0][1] = 0.9916686;
  B.matrix[0][2] = 476373.1100000;
  B.matrix[1][0] = -2971342.8000000;
  B.matrix[1][1] = -74.1849800;
  B.matrix[1][2] = 24.8657570;
  B.matrix[2][0] = 3449.5545000;
  B.matrix[2][1] = -7.4219260;
  B.matrix[2][2] = -3123.1389000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -620125.11296000;
  expected_result.matrix[0][1] = -1010884.79166860;
  expected_result.matrix[0][2] = -155711.84000000;
  expected_result.matrix[1][0] = -739355.10000000;
  expected_result.matrix[1][1] = 29133.21198000;
  expected_result.matrix[1][2] = -19233.06775700;
  expected_result.matrix[2][0] = -3449.50657917;
  expected_result.matrix[2][1] = -407341.90807400;
  expected_result.matrix[2][2] = 438634.50890000;

  ck_assert_int_eq(s21_sub_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sub_matrix_2) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 345974.8900000;
  A.matrix[0][1] = 42.7914980;
  A.matrix[0][2] = 0.0006776;
  A.matrix[1][0] = -4130.1837000;
  A.matrix[1][1] = -4599277.6000000;
  A.matrix[1][2] = -3350.0807000;
  A.matrix[2][0] = 3967659.8000000;
  A.matrix[2][1] = -0.0019629;
  A.matrix[2][2] = 2.4555151;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = -3851116.2000000;
  B.matrix[0][1] = -3703.4360000;
  B.matrix[0][2] = 122020.5700000;
  B.matrix[1][0] = -1756.1666000;
  B.matrix[1][1] = -0.0051391;
  B.matrix[1][2] = -0.2639936;
  B.matrix[2][0] = 0.0049661;
  B.matrix[2][1] = -0.4967623;
  B.matrix[2][2] = -256.2902400;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 4197091.09000000;
  expected_result.matrix[0][1] = 3746.22749800;
  expected_result.matrix[0][2] = -122020.56932245;
  expected_result.matrix[1][0] = -2374.01710000;
  expected_result.matrix[1][1] = -4599277.59486087;
  expected_result.matrix[1][2] = -3349.81670640;
  expected_result.matrix[2][0] = 3967659.79503394;
  expected_result.matrix[2][1] = 0.49479941;
  expected_result.matrix[2][2] = 258.74575510;

  ck_assert_int_eq(s21_sub_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sub_matrix_3) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -2.8931938;
  A.matrix[0][1] = 23.6995430;
  A.matrix[0][2] = 0.6065027;
  A.matrix[1][0] = -0.0022334;
  A.matrix[1][1] = -0.0027014;
  A.matrix[1][2] = -0.4963243;
  A.matrix[2][0] = -1143.8319000;
  A.matrix[2][1] = -51.0124100;
  A.matrix[2][2] = -315.5692300;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 8.5368960;
  B.matrix[0][1] = 88310.8000000;
  B.matrix[0][2] = 284141.4700000;
  B.matrix[1][0] = -0.3045643;
  B.matrix[1][1] = 456625.0900000;
  B.matrix[1][2] = 0.0025560;
  B.matrix[2][0] = 3199.9280000;
  B.matrix[2][1] = -4.4381046;
  B.matrix[2][2] = -232.6447000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -11.43008980;
  expected_result.matrix[0][1] = -88287.10045700;
  expected_result.matrix[0][2] = -284140.86349730;
  expected_result.matrix[1][0] = 0.30233095;
  expected_result.matrix[1][1] = -456625.09270144;
  expected_result.matrix[1][2] = -0.49888025;
  expected_result.matrix[2][0] = -4343.75990000;
  expected_result.matrix[2][1] = -46.57430540;
  expected_result.matrix[2][2] = -82.92453000;

  ck_assert_int_eq(s21_sub_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sub_matrix_4) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -410244.1000000;
  A.matrix[0][1] = -37541.7330000;
  A.matrix[0][2] = -325.2832900;
  A.matrix[1][0] = -0.3105985;
  A.matrix[1][1] = -202850.9500000;
  A.matrix[1][2] = -40.7574300;
  A.matrix[2][0] = -215112.8400000;
  A.matrix[2][1] = -4.5927947;
  A.matrix[2][2] = -0.3710842;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 247841.7500000;
  B.matrix[0][1] = 10560.9540000;
  B.matrix[0][2] = 733.5139000;
  B.matrix[1][0] = -70034.9900000;
  B.matrix[1][1] = -1221928.0000000;
  B.matrix[1][2] = 0.0450332;
  B.matrix[2][0] = -3466.7904000;
  B.matrix[2][1] = 2143441.6000000;
  B.matrix[2][2] = -0.0035153;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -658085.85000000;
  expected_result.matrix[0][1] = -48102.68700000;
  expected_result.matrix[0][2] = -1058.79719000;
  expected_result.matrix[1][0] = 70034.67940149;
  expected_result.matrix[1][1] = 1019077.05000000;
  expected_result.matrix[1][2] = -40.80246324;
  expected_result.matrix[2][0] = -211646.04960000;
  expected_result.matrix[2][1] = -2143446.19279470;
  expected_result.matrix[2][2] = -0.36756890;

  ck_assert_int_eq(s21_sub_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sub_matrix_5) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -435114.0000000;
  A.matrix[0][1] = -2.7901000;
  A.matrix[0][2] = -473417.0800000;
  A.matrix[1][0] = -2144559.4000000;
  A.matrix[1][1] = 0.0002874;
  A.matrix[1][2] = -26.5005370;
  A.matrix[2][0] = -0.0348873;
  A.matrix[2][1] = 71.6887000;
  A.matrix[2][2] = -28.7533460;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = -33.1732520;
  B.matrix[0][1] = 4.9902775;
  B.matrix[0][2] = 0.1537494;
  B.matrix[1][0] = 21640.0460000;
  B.matrix[1][1] = -91.0052100;
  B.matrix[1][2] = -0.3646994;
  B.matrix[2][0] = -1.2986790;
  B.matrix[2][1] = -795.0894000;
  B.matrix[2][2] = -104246.5800000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -435080.82674800;
  expected_result.matrix[0][1] = -7.78037750;
  expected_result.matrix[0][2] = -473417.23374938;
  expected_result.matrix[1][0] = -2166199.44600000;
  expected_result.matrix[1][1] = 91.00549738;
  expected_result.matrix[1][2] = -26.13583758;
  expected_result.matrix[2][0] = 1.26379166;
  expected_result.matrix[2][1] = 866.77810000;
  expected_result.matrix[2][2] = 104217.82665400;

  ck_assert_int_eq(s21_sub_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sub_matrix_6) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -1460200.6000000;
  A.matrix[0][1] = -0.0165966;
  A.matrix[0][2] = -44211.1330000;
  A.matrix[1][0] = 90699.0600000;
  A.matrix[1][1] = 0.0518650;
  A.matrix[1][2] = -48392.2040000;
  A.matrix[2][0] = -2712.8521000;
  A.matrix[2][1] = 0.0043193;
  A.matrix[2][2] = -194.0899800;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 2.0226601;
  B.matrix[0][1] = 0.0417909;
  B.matrix[0][2] = 4782184.0000000;
  B.matrix[1][0] = -3.0611537;
  B.matrix[1][1] = 19.5325710;
  B.matrix[1][2] = -0.0023147;
  B.matrix[2][0] = 13.6939580;
  B.matrix[2][1] = -202460.0900000;
  B.matrix[2][2] = -419.2816400;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -1460202.62266010;
  expected_result.matrix[0][1] = -0.05838754;
  expected_result.matrix[0][2] = -4826395.13300000;
  expected_result.matrix[1][0] = 90702.12115370;
  expected_result.matrix[1][1] = -19.48070603;
  expected_result.matrix[1][2] = -48392.20168530;
  expected_result.matrix[2][0] = -2726.54605800;
  expected_result.matrix[2][1] = 202460.09431926;
  expected_result.matrix[2][2] = 225.19166000;

  ck_assert_int_eq(s21_sub_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sub_matrix_7) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 4000.2120000;
  A.matrix[0][1] = 11.4770410;
  A.matrix[0][2] = 319611.9400000;
  A.matrix[1][0] = 4065.2519000;
  A.matrix[1][1] = -0.0109316;
  A.matrix[1][2] = 0.0301233;
  A.matrix[2][0] = 449290.5600000;
  A.matrix[2][1] = 2189.0421000;
  A.matrix[2][2] = -3.6007731;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 0.4707365;
  B.matrix[0][1] = 12096.3030000;
  B.matrix[0][2] = 0.2367291;
  B.matrix[1][0] = -21769.5380000;
  B.matrix[1][1] = -4.1250674;
  B.matrix[1][2] = 1567493.3000000;
  B.matrix[2][0] = 485599.6900000;
  B.matrix[2][1] = -13.5207680;
  B.matrix[2][2] = -16.1054850;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 3999.74126353;
  expected_result.matrix[0][1] = -12084.82595900;
  expected_result.matrix[0][2] = 319611.70327090;
  expected_result.matrix[1][0] = 25834.78990000;
  expected_result.matrix[1][1] = 4.11413577;
  expected_result.matrix[1][2] = -1567493.26987674;
  expected_result.matrix[2][0] = -36309.13000000;
  expected_result.matrix[2][1] = 2202.56286800;
  expected_result.matrix[2][2] = 12.50471190;

  ck_assert_int_eq(s21_sub_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sub_matrix_8) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(4, 2, &A);
  A.matrix[0][0] = -251.3653500;
  A.matrix[0][1] = 4.1519258;
  A.matrix[1][0] = -0.0012305;
  A.matrix[1][1] = -2.0742813;
  A.matrix[2][0] = -0.0049638;
  A.matrix[2][1] = 0.0045675;
  A.matrix[3][0] = 0.1179339;
  A.matrix[3][1] = -353475.6000000;
  s21_create_matrix(4, 2, &B);
  B.matrix[0][0] = -237750.8900000;
  B.matrix[0][1] = -4.0623626;
  B.matrix[1][0] = -4188729.3000000;
  B.matrix[1][1] = -95413.0900000;
  B.matrix[2][0] = 2.6012423;
  B.matrix[2][1] = -3325429.0000000;
  B.matrix[3][0] = 32.2291340;
  B.matrix[3][1] = -3.7269662;
  s21_create_matrix(4, 2, &expected_result);
  expected_result.matrix[0][0] = 237499.52465000;
  expected_result.matrix[0][1] = 8.21428840;
  expected_result.matrix[1][0] = 4188729.29876952;
  expected_result.matrix[1][1] = 95411.01571870;
  expected_result.matrix[2][0] = -2.60620611;
  expected_result.matrix[2][1] = 3325429.00456750;
  expected_result.matrix[3][0] = -32.11120014;
  expected_result.matrix[3][1] = -353471.87303380;

  ck_assert_int_eq(s21_sub_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sub_matrix_9) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0};
  s21_create_matrix(0, 1, &A);
  s21_create_matrix(1, 1, &B);

  ck_assert_int_eq(s21_sub_matrix(&A, &B, &result), 1);

  s21_remove_matrix(&B);
}
END_TEST

START_TEST(sub_matrix_10) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0};
  s21_create_matrix(1, 2, &A);
  s21_create_matrix(1, 1, &B);

  ck_assert_int_eq(s21_sub_matrix(&A, &B, &result), 2);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

Suite *test_sub_matrix(void) {
  Suite *s = suite_create("\033[1;32m-=S21_SUB_MATRIX=-\033[0m");
  TCase *tc = tcase_create("sub_matrix_tc");

  tcase_add_test(tc, sub_matrix_1);
  tcase_add_test(tc, sub_matrix_2);
  tcase_add_test(tc, sub_matrix_3);
  tcase_add_test(tc, sub_matrix_4);
  tcase_add_test(tc, sub_matrix_5);
  tcase_add_test(tc, sub_matrix_6);
  tcase_add_test(tc, sub_matrix_7);
  tcase_add_test(tc, sub_matrix_8);
  tcase_add_test(tc, sub_matrix_9);
  tcase_add_test(tc, sub_matrix_10);
  suite_add_tcase(s, tc);
  return s;
}