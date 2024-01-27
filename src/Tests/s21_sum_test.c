#include "s21_tests.h"

START_TEST(sum_matrix_1) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
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

  s21_create_matrix(2, 2, &expected_result);
  expected_result.matrix[0][0] = 0.2469134;
  expected_result.matrix[0][1] = 2.4691356;
  expected_result.matrix[1][0] = 4.6913578;
  expected_result.matrix[1][1] = 6.9135782;

  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sum_matrix_2) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 0.1234567;
  A.matrix[0][1] = 1.2345678;
  A.matrix[1][0] = 2.3456789;
  A.matrix[1][1] = 3.4567891;
  s21_create_matrix(2, 2, &B);
  B.matrix[0][0] = -0.1234567;
  B.matrix[0][1] = -1.2345678;
  B.matrix[1][0] = -2.3456789;
  B.matrix[1][1] = -3.4567891;

  s21_create_matrix(2, 2, &expected_result);
  expected_result.matrix[0][0] = 0.;
  expected_result.matrix[0][1] = 0.;
  expected_result.matrix[1][0] = 0.;
  expected_result.matrix[1][1] = 0.;

  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sum_matrix_3) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = 0.1234567;
  A.matrix[0][1] = 1.2345678;
  A.matrix[1][0] = 2.3456789;
  A.matrix[1][1] = 3.4567891;
  s21_create_matrix(1, 2, &B);
  B.matrix[0][0] = -0.1234567;
  B.matrix[0][1] = -1.2345678;

  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 2);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(sum_matrix_4) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 0.0029505;
  A.matrix[0][1] = 318.6678900;
  A.matrix[0][2] = 3759.4079000;
  A.matrix[1][0] = 57.7330300;
  A.matrix[1][1] = 14.5939210;
  A.matrix[1][2] = -0.1004186;
  A.matrix[2][0] = 0.0016319;
  A.matrix[2][1] = -0.0361026;
  A.matrix[2][2] = 0.0019665;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = -386.6114200;
  B.matrix[0][1] = -0.0040667;
  B.matrix[0][2] = 0.0006393;
  B.matrix[1][0] = -1611.0358000;
  B.matrix[1][1] = 12013.7920000;
  B.matrix[1][2] = 0.0012487;
  B.matrix[2][0] = 0.0336169;
  B.matrix[2][1] = 0.0191422;
  B.matrix[2][2] = -3.6317673;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -386.60846949;
  expected_result.matrix[0][1] = 318.66382335;
  expected_result.matrix[0][2] = 3759.40853927;
  expected_result.matrix[1][0] = -1553.30277000;
  expected_result.matrix[1][1] = 12028.38592100;
  expected_result.matrix[1][2] = -0.09916986;
  expected_result.matrix[2][0] = 0.03524888;
  expected_result.matrix[2][1] = -0.01696033;
  expected_result.matrix[2][2] = -3.62980079;

  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sum_matrix_5) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -4733076.5000000;
  A.matrix[0][1] = -3.1601060;
  A.matrix[0][2] = -436.1973600;
  A.matrix[1][0] = -1.8295468;
  A.matrix[1][1] = 2.4739556;
  A.matrix[1][2] = 34597.3390000;
  A.matrix[2][0] = 1919.7929000;
  A.matrix[2][1] = 0.0279614;
  A.matrix[2][2] = -36052.5980000;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = -33.9372020;
  B.matrix[0][1] = 16863.7400000;
  B.matrix[0][2] = -0.0033442;
  B.matrix[1][0] = -382.6070000;
  B.matrix[1][1] = 446633.6500000;
  B.matrix[1][2] = 4765.2424000;
  B.matrix[2][0] = -21261.6130000;
  B.matrix[2][1] = 0.0065843;
  B.matrix[2][2] = -23667.8150000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -4733110.43720200;
  expected_result.matrix[0][1] = 16860.57989400;
  expected_result.matrix[0][2] = -436.20070418;
  expected_result.matrix[1][0] = -384.43654680;
  expected_result.matrix[1][1] = 446636.12395560;
  expected_result.matrix[1][2] = 39362.58140000;
  expected_result.matrix[2][0] = -19341.82010000;
  expected_result.matrix[2][1] = 0.03454573;
  expected_result.matrix[2][2] = -59720.41300000;

  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sum_matrix_6) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -98.8395500;
  A.matrix[0][1] = -3.8190725;
  A.matrix[0][2] = 2.7221250;
  A.matrix[1][0] = 0.0080763;
  A.matrix[1][1] = 1394.7936000;
  A.matrix[1][2] = -3973.1568000;
  A.matrix[2][0] = -391.9078700;
  A.matrix[2][1] = 4.2373596;
  A.matrix[2][2] = 0.0398351;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 0.0013534;
  B.matrix[0][1] = 4538.1670000;
  B.matrix[0][2] = -19394.2180000;
  B.matrix[1][0] = -132046.7700000;
  B.matrix[1][1] = -0.0252405;
  B.matrix[1][2] = 35232.4720000;
  B.matrix[2][0] = -3.4059951;
  B.matrix[2][1] = 0.0046672;
  B.matrix[2][2] = -2107.0257000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -98.83819661;
  expected_result.matrix[0][1] = 4534.34792750;
  expected_result.matrix[0][2] = -19391.49587500;
  expected_result.matrix[1][0] = -132046.76192372;
  expected_result.matrix[1][1] = 1394.76835948;
  expected_result.matrix[1][2] = 31259.31520000;
  expected_result.matrix[2][0] = -395.31386510;
  expected_result.matrix[2][1] = 4.24202679;
  expected_result.matrix[2][2] = -2106.98586493;

  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sum_matrix_7) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -4.0110560;
  A.matrix[0][1] = -0.0034990;
  A.matrix[0][2] = 0.4294190;
  A.matrix[1][0] = 0.0022492;
  A.matrix[1][1] = -3126524.4000000;
  A.matrix[1][2] = -9571.0780000;
  A.matrix[2][0] = 248372.5900000;
  A.matrix[2][1] = -0.0045226;
  A.matrix[2][2] = 0.0162478;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 3.1325388;
  B.matrix[0][1] = -0.0021570;
  B.matrix[0][2] = -0.0321479;
  B.matrix[1][0] = 719418.4000000;
  B.matrix[1][1] = 3564412.4000000;
  B.matrix[1][2] = -0.0007022;
  B.matrix[2][0] = 3292.6505000;
  B.matrix[2][1] = -25.9845560;
  B.matrix[2][2] = -75.3330300;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -0.87851720;
  expected_result.matrix[0][1] = -0.00565602;
  expected_result.matrix[0][2] = 0.39727107;
  expected_result.matrix[1][0] = 719418.40224924;
  expected_result.matrix[1][1] = 437888.00000000;
  expected_result.matrix[1][2] = -9571.07870224;
  expected_result.matrix[2][0] = 251665.24050000;
  expected_result.matrix[2][1] = -25.98907859;
  expected_result.matrix[2][2] = -75.31678217;

  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sum_matrix_8) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 31348.2940000;
  A.matrix[0][1] = -55.8180000;
  A.matrix[0][2] = 42.9827840;
  A.matrix[1][0] = -2.5962240;
  A.matrix[1][1] = -470874.4100000;
  A.matrix[1][2] = 4.3937574;
  A.matrix[2][0] = -141369.1400000;
  A.matrix[2][1] = -36326.6890000;
  A.matrix[2][2] = 20010.7660000;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 293.9500700;
  B.matrix[0][1] = -2.4228187;
  B.matrix[0][2] = 379.2343200;
  B.matrix[1][0] = -1.8769706;
  B.matrix[1][1] = -0.3904651;
  B.matrix[1][2] = 26.5277710;
  B.matrix[2][0] = -374822.3000000;
  B.matrix[2][1] = 0.1095138;
  B.matrix[2][2] = 0.3602021;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 31642.24407000;
  expected_result.matrix[0][1] = -58.24081870;
  expected_result.matrix[0][2] = 422.21710400;
  expected_result.matrix[1][0] = -4.47319460;
  expected_result.matrix[1][1] = -470874.80046514;
  expected_result.matrix[1][2] = 30.92152840;
  expected_result.matrix[2][0] = -516191.44000000;
  expected_result.matrix[2][1] = -36326.57948620;
  expected_result.matrix[2][2] = 20011.12620212;

  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sum_matrix_9) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -0.0034697;
  A.matrix[0][1] = -276.4664100;
  A.matrix[0][2] = 0.0046363;
  A.matrix[1][0] = 0.0644216;
  A.matrix[1][1] = -3.6669221;
  A.matrix[1][2] = 0.0047845;
  A.matrix[2][0] = 0.0029141;
  A.matrix[2][1] = 3.3140103;
  A.matrix[2][2] = -0.1027278;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 0.0007441;
  B.matrix[0][1] = 1.9519430;
  B.matrix[0][2] = -4361375.3000000;
  B.matrix[1][0] = -3515427.0000000;
  B.matrix[1][1] = -1.1772020;
  B.matrix[1][2] = 46.3027750;
  B.matrix[2][0] = 390.6775400;
  B.matrix[2][1] = 17817.3570000;
  B.matrix[2][2] = 4927.6214000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -0.00272563;
  expected_result.matrix[0][1] = -274.51446700;
  expected_result.matrix[0][2] = -4361375.29536366;
  expected_result.matrix[1][0] = -3515426.93557841;
  expected_result.matrix[1][1] = -4.84412410;
  expected_result.matrix[1][2] = 46.30755952;
  expected_result.matrix[2][0] = 390.68045414;
  expected_result.matrix[2][1] = 17820.67101030;
  expected_result.matrix[2][2] = 4927.51867220;

  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sum_matrix_10) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -0.3850879;
  A.matrix[0][1] = 380.1950700;
  A.matrix[0][2] = 3.1508108;
  A.matrix[1][0] = 1389693.3000000;
  A.matrix[1][1] = -463033.7500000;
  A.matrix[1][2] = -39.9871550;
  A.matrix[2][0] = -59.4598100;
  A.matrix[2][1] = -2.8555780;
  A.matrix[2][2] = 436952.1400000;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 4668.3850000;
  B.matrix[0][1] = 412.2151800;
  B.matrix[0][2] = -0.0457940;
  B.matrix[1][0] = 4413.1042000;
  B.matrix[1][1] = -230.5740400;
  B.matrix[1][2] = -331.8124800;
  B.matrix[2][0] = 2732.0840000;
  B.matrix[2][1] = 2451841.3000000;
  B.matrix[2][2] = -0.0003511;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 4667.99991213;
  expected_result.matrix[0][1] = 792.41025000;
  expected_result.matrix[0][2] = 3.10501680;
  expected_result.matrix[1][0] = 1394106.40420000;
  expected_result.matrix[1][1] = -463264.32404000;
  expected_result.matrix[1][2] = -371.79963500;
  expected_result.matrix[2][0] = 2672.62419000;
  expected_result.matrix[2][1] = 2451838.44442200;
  expected_result.matrix[2][2] = 436952.13964887;

  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(sum_matrix_11) {
  matrix_t A = {NULL, 0, 0}, B, result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &B);
  ck_assert_int_eq(s21_sum_matrix(&A, &B, &result), 1);
  s21_remove_matrix(&B);
}
END_TEST

Suite *test_sum_matrix(void) {
  Suite *s = suite_create("\033[1;32m-=S21_SUM_MATRIX=-\033[0m");
  TCase *tc = tcase_create("sum_matrix_tc");

  tcase_add_test(tc, sum_matrix_1);
  tcase_add_test(tc, sum_matrix_2);
  tcase_add_test(tc, sum_matrix_3);
  tcase_add_test(tc, sum_matrix_4);
  tcase_add_test(tc, sum_matrix_5);
  tcase_add_test(tc, sum_matrix_6);
  tcase_add_test(tc, sum_matrix_7);
  tcase_add_test(tc, sum_matrix_8);
  tcase_add_test(tc, sum_matrix_9);
  tcase_add_test(tc, sum_matrix_10);
  tcase_add_test(tc, sum_matrix_11);
  suite_add_tcase(s, tc);
  return s;
}