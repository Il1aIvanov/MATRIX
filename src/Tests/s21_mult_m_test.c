#include "s21_tests.h"

START_TEST(mult_matrix_1) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -0.215440685000000;
  A.matrix[0][1] = -1.905695500000000;
  A.matrix[0][2] = -0.001530493450000;
  A.matrix[1][0] = 4.203877350000000;
  A.matrix[1][1] = 14.028807499999999;
  A.matrix[1][2] = -166736.149999999994179;
  A.matrix[2][0] = -0.044835271500000;
  A.matrix[2][1] = -1.722983350000000;
  A.matrix[2][2] = -175325.250000000000000;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = -43482.025500000003376;
  B.matrix[0][1] = -0.001401972950000;
  B.matrix[0][2] = -3585.278150000000096;
  B.matrix[1][0] = -125719.005000000004657;
  B.matrix[1][1] = -539.041550000000029;
  B.matrix[1][2] = -3.037000500000000;
  B.matrix[2][0] = 3495631.149999999906868;
  B.matrix[2][1] = 38.807226499999999;
  B.matrix[2][2] = -0.003476231650000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 243599.89887319;
  expected_result.matrix[0][1] = 1027.18996398;
  expected_result.matrix[0][2] = 778.20238406;
  expected_result.matrix[1][0] = -582850026251.89489746;
  expected_result.matrix[1][1] = -6478129.65482115;
  expected_result.matrix[1][2] = -14535.06162180;
  expected_result.matrix[2][0] = -612872186720.25671387;
  expected_result.matrix[2][1] = -6802957.92824066;
  expected_result.matrix[2][2] = 775.45080365;

  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_matrix_2) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -2.228389350000000;
  A.matrix[0][1] = 0.001132855150000;
  A.matrix[0][2] = 0.964559650000000;
  A.matrix[1][0] = -244412.774999999994179;
  A.matrix[1][1] = 277.539375000000007;
  A.matrix[1][2] = 6522.618499999999585;
  A.matrix[2][0] = 951.901449999999954;
  A.matrix[2][1] = -4911746.950000000186265;
  A.matrix[2][2] = -146.308754999999991;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = 0.003307813650000;
  B.matrix[0][1] = -790.344749999999976;
  B.matrix[0][2] = 1.580828550000000;
  B.matrix[1][0] = -4085.101850000000013;
  B.matrix[1][1] = 19.511144500000000;
  B.matrix[1][2] = -1366.845450000000028;
  B.matrix[2][0] = -0.002350883650000;
  B.matrix[2][1] = 470579.465000000025611;
  B.matrix[2][2] = -41.691102500000000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -4.63746733;
  expected_result.matrix[0][1] = 455663.18198462;
  expected_result.matrix[0][2] = -45.28469465;
  expected_result.matrix[1][0] = -1134600.42009091;
  expected_result.matrix[1][1] = 3262586092.79413414;
  expected_result.matrix[1][2] = -1037663.28107122;
  expected_result.matrix[2][0] = 20064986555.66952515;
  expected_result.matrix[2][1] = -165436030.45512524;
  expected_result.matrix[2][2] = 6713606574.72516823;

  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_matrix_3) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -2.763500000000000;
  A.matrix[0][1] = -28.486130500000002;
  A.matrix[0][2] = 4.722917050000000;
  A.matrix[1][0] = 87.845214999999996;
  A.matrix[1][1] = -38.902574999999999;
  A.matrix[1][2] = 0.728013250000000;
  A.matrix[2][0] = 29729.461500000001251;
  A.matrix[2][1] = 0.042760915000000;
  A.matrix[2][2] = 2307865.250000000000000;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = -0.034081771500000;
  B.matrix[0][1] = -26634.692500000001019;
  B.matrix[0][2] = -17.299825500000001;
  B.matrix[1][0] = 0.002521086250000;
  B.matrix[1][1] = -0.021222833500000;
  B.matrix[1][2] = 2.043713500000000;
  B.matrix[2][0] = -21027.646499999998923;
  B.matrix[2][1] = 25986.345499999999447;
  B.matrix[2][2] = 0.323084555000000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -99311.80780724;
  expected_result.matrix[0][1] = 196336.93150930;
  expected_result.matrix[0][2] = -8.88352014;
  expected_result.matrix[1][0] = -15311.49726561;
  expected_result.matrix[1][1] = -2320811.05965544;
  expected_result.matrix[1][2] = -1598.97739839;
  expected_result.matrix[2][0] = -48528975659.86672974;
  expected_result.matrix[2][1] = 59181148688.69987488;
  expected_result.matrix[2][2] = 231321.20852830;

  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_matrix_4) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -0.001644462650000;
  A.matrix[0][1] = 0.003248003250000;
  A.matrix[0][2] = 0.003276360500000;
  A.matrix[1][0] = 1.114398350000000;
  A.matrix[1][1] = 3515.109750000000076;
  A.matrix[1][2] = 0.000986449850000;
  A.matrix[2][0] = 3802078.450000000186265;
  A.matrix[2][1] = 0.042973715500000;
  A.matrix[2][2] = -36271.569499999997788;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = -2640072.450000000186265;
  B.matrix[0][1] = -7585.780499999999847;
  B.matrix[0][2] = -3.627556650000000;
  B.matrix[1][0] = -80.211624999999998;
  B.matrix[1][1] = 0.046498884500000;
  B.matrix[1][2] = 0.000073200250000;
  B.matrix[2][0] = -0.630296950000000;
  B.matrix[2][1] = 0.022416649500000;
  B.matrix[2][2] = -33.531177499999998;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 4341.23794462;
  expected_result.matrix[0][1] = 12.47475718;
  expected_result.matrix[0][2] = -0.10389461;
  expected_result.matrix[1][0] = -3224045.04788306;
  expected_result.matrix[1][1] = -8290.13256828;
  expected_result.matrix[1][2] = -3.81831306;
  expected_result.matrix[2][0] = -10037762545725.29101562;
  expected_result.matrix[2][1] = -28841733378.56528473;
  expected_result.matrix[2][2] = -12576026.53000796;

  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_matrix_5) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 20.969890500000002;
  A.matrix[0][1] = -0.038784836500000;
  A.matrix[0][2] = 0.004806554350000;
  A.matrix[1][0] = -3061.659850000000006;
  A.matrix[1][1] = 0.493787185000000;
  A.matrix[1][2] = -0.001124850000000;
  A.matrix[2][0] = -0.006936330500000;
  A.matrix[2][1] = -0.429208955000000;
  A.matrix[2][2] = 0.284807995000000;
  s21_create_matrix(3, 3, &B);
  B.matrix[0][0] = -175478.464999999996508;
  B.matrix[0][1] = 1853.298649999999952;
  B.matrix[0][2] = -0.000654251850000;
  B.matrix[1][0] = -0.037208958500000;
  B.matrix[1][1] = 6068.695499999999811;
  B.matrix[1][2] = -3.666842350000000;
  B.matrix[2][0] = 0.134170315000000;
  B.matrix[2][1] = -423.006835000000024;
  B.matrix[2][2] = 429387.864999999990687;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -3679764.19407004;
  expected_result.matrix[0][1] = 38626.06318622;
  expected_result.matrix[0][2] = 2064.00460864;
  expected_result.matrix[1][0] = 537255370.81160605;
  expected_result.matrix[1][1] = -5671172.94687740;
  expected_result.matrix[1][2] = -482.80448309;
  expected_result.matrix[2][0] = 1217.23081207;
  expected_result.matrix[2][1] = -2738.06927427;
  expected_result.matrix[2][2] = 122294.67075409;

  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_matrix_6) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(2, 3, &A);
  A.matrix[0][0] = 0.928156450000000;
  A.matrix[0][1] = -0.008364642500000;
  A.matrix[0][2] = 0.047394921500000;
  A.matrix[1][0] = -0.050667275000000;
  A.matrix[1][1] = -2319.094250000000102;
  A.matrix[1][2] = 0.019621115000000;
  s21_create_matrix(3, 2, &B);
  B.matrix[0][0] = 4911228.650000000372529;
  B.matrix[0][1] = 0.024611285000000;
  B.matrix[1][0] = 0.001861040650000;
  B.matrix[1][1] = 44.336772500000002;
  B.matrix[2][0] = 0.001523399650000;
  B.matrix[2][1] = -409814.145000000018626;
  s21_create_matrix(2, 2, &expected_result);
  expected_result.matrix[0][0] = 4558388.54897893;
  expected_result.matrix[0][1] = -19423.45724999;
  expected_result.matrix[1][0] = -248842.88849621;
  expected_result.matrix[1][1] = -110862.16588297;

  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_matrix_7) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(2, 3, &A);
  A.matrix[0][0] = 15.982693500000000;
  A.matrix[0][1] = 347461.414999999979045;
  A.matrix[0][2] = 0.002911749550000;
  A.matrix[1][0] = 0.010026745500000;
  A.matrix[1][1] = 21.481781500000000;
  A.matrix[1][2] = -0.001718074500000;
  s21_create_matrix(3, 2, &B);
  B.matrix[0][0] = 2182.914999999999964;
  B.matrix[0][1] = -191.054945000000004;
  B.matrix[1][0] = 0.279209715000000;
  B.matrix[1][1] = 11.696585499999999;
  B.matrix[2][0] = -381.719335000000001;
  B.matrix[2][1] = 467133.765000000013970;
  s21_create_matrix(2, 2, &expected_result);
  expected_result.matrix[0][0] = 131902.35256610;
  expected_result.matrix[0][1] = 4062418.75240092;
  expected_result.matrix[1][0] = 28.54127750;
  expected_result.matrix[1][1] = -553.22277504;

  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_matrix_8) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 4, &A);
  A.matrix[0][0] = -0.028560677500000;
  A.matrix[0][1] = 374652.005000000004657;
  A.matrix[0][2] = -0.003908400750000;
  A.matrix[0][3] = -966687.050000000046566;
  A.matrix[1][0] = -131.642644999999987;
  A.matrix[1][1] = -4.248408450000000;
  A.matrix[1][2] = 3088683.850000000093132;
  A.matrix[1][3] = -0.002547309150000;
  A.matrix[2][0] = 0.003858520150000;
  A.matrix[2][1] = 21075.052500000001601;
  A.matrix[2][2] = -299716.525000000023283;
  A.matrix[2][3] = -322056.494999999995343;
  s21_create_matrix(4, 3, &B);
  B.matrix[0][0] = 2.740563250000000;
  B.matrix[0][1] = 0.045389558500000;
  B.matrix[0][2] = 0.357497525000000;
  B.matrix[1][0] = 4.846515050000000;
  B.matrix[1][1] = -16169.022499999999127;
  B.matrix[1][2] = 2.679501650000000;
  B.matrix[2][0] = -0.002418256750000;
  B.matrix[2][1] = 394.054295000000025;
  B.matrix[2][2] = -3388.591849999999795;
  B.matrix[3][0] = 3.283904350000000;
  B.matrix[3][1] = -10924.515499999999520;
  B.matrix[3][2] = -21.923917500000002;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -1358751.30610138;
  expected_result.matrix[0][1] = 4502830961.31774521;
  expected_result.matrix[0][2] = 22197461.03185624;
  expected_result.matrix[1][0] = -7850.60390451;
  expected_result.matrix[1][1] = 1217177851.45437002;
  expected_result.matrix[1][2] = -10466288979.72631264;
  expected_result.matrix[2][0] = -954737.36367128;
  expected_result.matrix[2][1] = 3059443589.48344135;
  expected_result.matrix[2][2] = 1022734184.59136748;

  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_matrix_9) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 4, &A);
  A.matrix[0][0] = 46.136551500000003;
  A.matrix[0][1] = -25.355509500000000;
  A.matrix[0][2] = -35597.254500000002736;
  A.matrix[0][3] = -48.188358500000000;
  A.matrix[1][0] = -260009.915000000008149;
  A.matrix[1][1] = -0.849219500000000;
  A.matrix[1][2] = 1308.191250000000082;
  A.matrix[1][3] = 0.024486828500000;
  A.matrix[2][0] = -114210.544999999998254;
  A.matrix[2][1] = -83401.384999999994761;
  A.matrix[2][2] = -29073.675500000001193;
  A.matrix[2][3] = -0.001791779150000;
  s21_create_matrix(4, 3, &B);
  B.matrix[0][0] = 0.355356285000000;
  B.matrix[0][1] = -1092.601349999999911;
  B.matrix[0][2] = -22680.133499999999913;
  B.matrix[1][0] = 7.304461500000000;
  B.matrix[1][1] = 2133386.549999999813735;
  B.matrix[1][2] = 42.137648499999997;
  B.matrix[2][0] = -0.002057954450000;
  B.matrix[2][1] = -19938.680499999998574;
  B.matrix[2][2] = 46.183151500000001;
  B.matrix[3][0] = -29.282782500000000;
  B.matrix[3][1] = 3437.702249999999822;
  B.matrix[3][2] = -0.041305712500000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 1315.53331988;
  expected_result.matrix[0][1] = 655453115.13009763;
  expected_result.matrix[0][2] = -2691442.97589955;
  expected_result.matrix[1][0] = -92405.76978919;
  expected_result.matrix[1][1] = 256191947.49486732;
  expected_result.matrix[1][2] = 5897119964.13321781;
  expected_result.matrix[2][0] = -649727.75599005;
  expected_result.matrix[2][1] = -177222915694.12490845;
  expected_result.matrix[2][2] = 2585453355.50200987;

  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&result, &expected_result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(mult_matrix_10) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0};
  s21_create_matrix(2, 3, &A);
  A.matrix[0][0] = 1;
  A.matrix[0][1] = 2;
  A.matrix[0][2] = 3;
  A.matrix[1][0] = 4;
  A.matrix[1][1] = 5;
  A.matrix[1][2] = 6;
  s21_create_matrix(2, 3, &B);
  B.matrix[0][0] = 1;
  B.matrix[0][1] = 2;
  B.matrix[0][2] = 3;
  B.matrix[1][0] = 4;
  B.matrix[1][1] = 5;
  B.matrix[1][2] = 6;

  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 2);

  s21_remove_matrix(&A);
  s21_remove_matrix(&B);
}
END_TEST

START_TEST(mult_matrix_11) {
  matrix_t A = {NULL, 0, 0}, B = {NULL, 0, 0}, result = {NULL, 0, 0};
  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 1);
}
END_TEST

START_TEST(mult_matrix_12) {
  matrix_t A = {NULL, 0, 0}, B, result;
  ck_assert_int_eq(s21_mult_matrix(&A, &B, &result), 1);
}
END_TEST

Suite *test_mult_matrix(void) {
  Suite *s = suite_create("\033[1;32m-=S21_MULT_MATRIX=-\033[0m");
  TCase *tc = tcase_create("mult_matrix_tc");

  tcase_add_test(tc, mult_matrix_1);
  tcase_add_test(tc, mult_matrix_2);
  tcase_add_test(tc, mult_matrix_3);
  tcase_add_test(tc, mult_matrix_4);
  tcase_add_test(tc, mult_matrix_5);
  tcase_add_test(tc, mult_matrix_6);
  tcase_add_test(tc, mult_matrix_7);
  tcase_add_test(tc, mult_matrix_8);
  tcase_add_test(tc, mult_matrix_9);
  tcase_add_test(tc, mult_matrix_10);
  tcase_add_test(tc, mult_matrix_11);
  tcase_add_test(tc, mult_matrix_12);
  suite_add_tcase(s, tc);
  return s;
}