#include "s21_tests.h"

START_TEST(inverse_matrix_1) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(2, 2, &A);
  A.matrix[0][0] = -0.018934764500000;
  A.matrix[0][1] = -0.000197005550000;
  A.matrix[1][0] = 0.038865269500000;
  A.matrix[1][1] = 2.390371050000000;
  s21_create_matrix(2, 2, &expected_result);
  expected_result.matrix[0][0] = -52.821844989800695;
  expected_result.matrix[0][1] = -0.004353381297950;
  expected_result.matrix[1][0] = 0.858835384998420;
  expected_result.matrix[1][1] = 0.418415875366873;

  ck_assert_int_eq(s21_inverse_matrix(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&expected_result);
  s21_remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_2) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0};
  s21_create_matrix(4, 4, &A);
  A.matrix[0][0] = 1.0;
  A.matrix[0][1] = 1.0;
  A.matrix[0][2] = 1.0;
  A.matrix[0][3] = 1.0;

  A.matrix[1][0] = 1.0;
  A.matrix[1][1] = 1.0;
  A.matrix[1][2] = 1.0;
  A.matrix[1][3] = 1.0;

  A.matrix[2][0] = 1.0;
  A.matrix[2][1] = 1.0;
  A.matrix[2][2] = 1.0;
  A.matrix[2][3] = 1.0;

  A.matrix[3][0] = 1.0;
  A.matrix[3][1] = 1.0;
  A.matrix[3][2] = 1.0;
  A.matrix[3][3] = 1.0;

  ck_assert_int_eq(s21_inverse_matrix(&A, &result), 2);

  s21_remove_matrix(&A);
}
END_TEST

START_TEST(inverse_matrix_3) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 0.376473485000000;
  A.matrix[0][1] = 0.047216500500000;
  A.matrix[0][2] = -2.516962750000000;
  A.matrix[1][0] = -284561.750000000000000;
  A.matrix[1][1] = -0.002787643950000;
  A.matrix[1][2] = -23.261387500000001;
  A.matrix[2][0] = 0.151830085000000;
  A.matrix[2][1] = 4226441.549999999813735;
  A.matrix[2][2] = 3867.407250000000204;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 0.000032476520434;
  expected_result.matrix[0][1] = -0.000003514132779;
  expected_result.matrix[0][2] = -0.000000000000365;
  expected_result.matrix[1][0] = 0.000363542747685;
  expected_result.matrix[1][1] = 0.000000000481091;
  expected_result.matrix[1][2] = 0.000000236601600;
  expected_result.matrix[2][0] = -0.397292573453796;
  expected_result.matrix[2][1] = -0.000000525615685;
  expected_result.matrix[2][2] = 0.000000004438430;

  ck_assert_int_eq(s21_inverse_matrix(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&expected_result);
  s21_remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_4) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -0.003851720500000;
  A.matrix[0][1] = 2077.326050000000123;
  A.matrix[0][2] = 22678.284999999999854;
  A.matrix[1][0] = 289854.614999999990687;
  A.matrix[1][1] = -0.843398450000000;
  A.matrix[1][2] = -32.502966499999999;
  A.matrix[2][0] = -41.034082499999997;
  A.matrix[2][1] = 0.000186748950000;
  A.matrix[2][2] = 829103.650000000023283;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 0.000000001400709;
  expected_result.matrix[0][1] = 0.000003450005459;
  expected_result.matrix[0][2] = 0.000000000096936;
  expected_result.matrix[1][0] = 0.000481388081034;
  expected_result.matrix[1][1] = -0.000000001857669;
  expected_result.matrix[1][2] = -0.000013167299598;
  expected_result.matrix[2][0] = -0.000000000000039;
  expected_result.matrix[2][1] = 0.000000000170748;
  expected_result.matrix[2][2] = 0.000001206121824;

  ck_assert_int_eq(s21_inverse_matrix(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&expected_result);
  s21_remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_5) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 0.002307043500000;
  A.matrix[0][1] = -41955.204499999999825;
  A.matrix[0][2] = 4416994.150000000372529;
  A.matrix[1][0] = 375981.455000000016298;
  A.matrix[1][1] = 3182986.750000000000000;
  A.matrix[1][2] = -17.297356499999999;
  A.matrix[2][0] = 1353.595550000000003;
  A.matrix[2][1] = -601.226850000000013;
  A.matrix[2][2] = 4101811.350000000093132;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 0.000292246990463;
  expected_result.matrix[0][1] = 0.000003792687554;
  expected_result.matrix[0][2] = -0.000314703205848;
  expected_result.matrix[1][0] = -0.000034520863290;
  expected_result.matrix[1][1] = -0.000000133830342;
  expected_result.matrix[1][2] = 0.000037173442628;
  expected_result.matrix[2][0] = -0.000000101501278;
  expected_result.matrix[2][1] = -0.000000001271201;
  expected_result.matrix[2][2] = 0.000000353095354;

  ck_assert_int_eq(s21_inverse_matrix(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&expected_result);
  s21_remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_6) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 4172.734449999999924;
  A.matrix[0][1] = 0.000770976950000;
  A.matrix[0][2] = -17.868077499999998;
  A.matrix[1][0] = 11648.712499999999636;
  A.matrix[1][1] = -0.017132483500000;
  A.matrix[1][2] = 0.004979658850000;
  A.matrix[2][0] = -726.960450000000037;
  A.matrix[2][1] = 466039.715000000025611;
  A.matrix[2][2] = 0.340832285000000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 0.000000023922225;
  expected_result.matrix[0][1] = 0.000085837828103;
  expected_result.matrix[0][2] = 0.000000000003156;
  expected_result.matrix[1][0] = 0.000000040963063;
  expected_result.matrix[1][1] = 0.000000119235499;
  expected_result.matrix[1][2] = 0.000002145739880;
  expected_result.matrix[2][0] = -0.055960143382786;
  expected_result.matrix[2][1] = 0.020045719106150;
  expected_result.matrix[2][2] = 0.000000000829494;

  ck_assert_int_eq(s21_inverse_matrix(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&expected_result);
  s21_remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_7) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 405.912595000000010;
  A.matrix[0][1] = -4735.680250000000342;
  A.matrix[0][2] = 6.576597500000000;
  A.matrix[1][0] = -0.000204226950000;
  A.matrix[1][1] = 21.745755500000001;
  A.matrix[1][2] = 442176.950000000011642;
  A.matrix[2][0] = -92826.475000000005821;
  A.matrix[2][1] = -121998.934999999997672;
  A.matrix[2][2] = 344.751374999999996;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 0.000249426703277;
  expected_result.matrix[0][1] = 0.000000003839042;
  expected_result.matrix[0][2] = -0.000009682092955;
  expected_result.matrix[1][0] = -0.000189783610967;
  expected_result.matrix[1][1] = 0.000000003469732;
  expected_result.matrix[1][2] = -0.000000829887788;
  expected_result.matrix[2][0] = 0.000000009333456;
  expected_result.matrix[2][1] = 0.000002261537886;
  expected_result.matrix[2][2] = 0.000000000040808;

  ck_assert_int_eq(s21_inverse_matrix(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&expected_result);
  s21_remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_8) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};

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

  s21_create_matrix(8, 8, &expected_result);
  expected_result.matrix[0][0] = 0.0000006479;
  expected_result.matrix[0][1] = -0.0000000065;
  expected_result.matrix[0][2] = -0.0000000051;
  expected_result.matrix[0][3] = -0.0000004915;
  expected_result.matrix[0][4] = -0.0000000897;
  expected_result.matrix[0][5] = -0.0000070405;
  expected_result.matrix[0][6] = 0.0000017251;
  expected_result.matrix[0][7] = -0.0000014175;

  expected_result.matrix[1][0] = 0.0000000000;
  expected_result.matrix[1][1] = 0.0000010479;
  expected_result.matrix[1][2] = -0.0000000081;
  expected_result.matrix[1][3] = -0.0000007850;
  expected_result.matrix[1][4] = -0.0000000339;
  expected_result.matrix[1][5] = -0.0000030645;
  expected_result.matrix[1][6] = -0.0000100069;
  expected_result.matrix[1][7] = 0.0000102921;

  expected_result.matrix[2][0] = 0.0000000000;
  expected_result.matrix[2][1] = 0.0000000000;
  expected_result.matrix[2][2] = 0.0000000173;
  expected_result.matrix[2][3] = 0.0000018147;
  expected_result.matrix[2][4] = 0.0000000761;
  expected_result.matrix[2][5] = 0.0000069235;
  expected_result.matrix[2][6] = -0.0000039825;
  expected_result.matrix[2][7] = 0.0000009195;

  expected_result.matrix[3][0] = -0.0000000000;
  expected_result.matrix[3][1] = -0.0000000000;
  expected_result.matrix[3][2] = 0.0000000000;
  expected_result.matrix[3][3] = -0.0000037817;
  expected_result.matrix[3][4] = -0.0000001586;
  expected_result.matrix[3][5] = -0.0000144276;
  expected_result.matrix[3][6] = 0.0000075942;
  expected_result.matrix[3][7] = -0.0000022413;

  expected_result.matrix[4][0] = 0.0000000000;
  expected_result.matrix[4][1] = 0.0000000000;
  expected_result.matrix[4][2] = -0.0000000000;
  expected_result.matrix[4][3] = -0.0000000000;
  expected_result.matrix[4][4] = 0.0000000192;
  expected_result.matrix[4][5] = 0.0000001311;
  expected_result.matrix[4][6] = -0.0000000677;
  expected_result.matrix[4][7] = 0.0000000267;

  expected_result.matrix[5][0] = 0.0000000000;
  expected_result.matrix[5][1] = 0.0000000000;
  expected_result.matrix[5][2] = -0.0000000000;
  expected_result.matrix[5][3] = -0.0000000000;
  expected_result.matrix[5][4] = -0.0000000000;
  expected_result.matrix[5][5] = 0.0000110751;
  expected_result.matrix[5][6] = -0.0000184112;
  expected_result.matrix[5][7] = 0.0000041367;

  expected_result.matrix[6][0] = -0.0000000000;
  expected_result.matrix[6][1] = -0.0000000000;
  expected_result.matrix[6][2] = 0.0000000000;
  expected_result.matrix[6][3] = 0.0000000000;
  expected_result.matrix[6][4] = 0.0000000000;
  expected_result.matrix[6][5] = 0.0000000000;
  expected_result.matrix[6][6] = 0.0002541541;
  expected_result.matrix[6][7] = 0.0001479559;

  expected_result.matrix[7][0] = 0.0000000000;
  expected_result.matrix[7][1] = 0.0000000000;
  expected_result.matrix[7][2] = -0.0000000000;
  expected_result.matrix[7][3] = -0.0000000000;
  expected_result.matrix[7][4] = -0.0000000000;
  expected_result.matrix[7][5] = -0.0000000000;
  expected_result.matrix[7][6] = -0.0000000000;
  expected_result.matrix[7][7] = -0.0003094460;

  ck_assert_int_eq(s21_inverse_matrix(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&expected_result);
  s21_remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_9) {
  matrix_t A = {NULL, 0, 0}, result;
  ck_assert_int_eq(s21_inverse_matrix(&A, &result), 1);
}
END_TEST

START_TEST(inverse_matrix_10) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0};
  s21_create_matrix(3, 2, &A);
  A.matrix[0][0] = 2606.885150000000067;
  A.matrix[0][1] = 49.031706499999999;

  A.matrix[1][0] = -49944.456500000000233;
  A.matrix[1][1] = 153389.535000000003492;

  A.matrix[2][0] = -31.225942499999999;
  A.matrix[2][1] = -35.091067500000001;
  ck_assert_int_eq(s21_inverse_matrix(&A, &result), 2);
  s21_remove_matrix(&A);
}
END_TEST

Suite *test_inverse_matrix(void) {
  Suite *s = suite_create("\033[1;32m-=S21_INVERSE_MATRIX=-\033[0m");
  TCase *tc = tcase_create("inverse_matrix_tc");

  tcase_add_test(tc, inverse_matrix_1);
  tcase_add_test(tc, inverse_matrix_2);
  tcase_add_test(tc, inverse_matrix_3);
  tcase_add_test(tc, inverse_matrix_4);
  tcase_add_test(tc, inverse_matrix_5);
  tcase_add_test(tc, inverse_matrix_6);
  tcase_add_test(tc, inverse_matrix_7);
  tcase_add_test(tc, inverse_matrix_8);
  tcase_add_test(tc, inverse_matrix_9);
  tcase_add_test(tc, inverse_matrix_10);
  suite_add_tcase(s, tc);
  return s;
}