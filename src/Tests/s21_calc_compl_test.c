#include "s21_tests.h"

START_TEST(calc_complements_1) {
  int result = 0;
  matrix_t A = {NULL, 0, 0};
  matrix_t Z = {NULL, 0, 0};
  matrix_t X = {NULL, 0, 0};

  s21_create_matrix(4, 4, &A);
  A.matrix[0][0] = 112.0;
  A.matrix[0][1] = 243.0;
  A.matrix[0][2] = 3.0;
  A.matrix[0][3] = -8.0;
  A.matrix[1][0] = 47.0;
  A.matrix[1][1] = 51.0;
  A.matrix[1][2] = -66.0;
  A.matrix[1][3] = 99.0;
  A.matrix[2][0] = -74.0;
  A.matrix[2][1] = 85.0;
  A.matrix[2][2] = 97.0;
  A.matrix[2][3] = 63.0;
  A.matrix[3][0] = -13.0;
  A.matrix[3][1] = 79.0;
  A.matrix[3][2] = -99.0;
  A.matrix[3][3] = -121.0;

  s21_calc_complements(&A, &Z);

  s21_create_matrix(4, 4, &X);

  X.matrix[0][0] = -2879514.0;
  X.matrix[0][1] = -1236631.0;
  X.matrix[0][2] = -1685096.0;
  X.matrix[0][3] = 880697.0;
  X.matrix[1][0] = 1162090.0;
  X.matrix[1][1] = -714015.0;
  X.matrix[1][2] = 4046255.0;
  X.matrix[1][3] = -3901600.0;
  X.matrix[2][0] = 4362897.0;
  X.matrix[2][1] = -2049432.0;
  X.matrix[2][2] = -532912.0;
  X.matrix[2][3] = -1370781.0;
  X.matrix[3][0] = 3412773.0;
  X.matrix[3][1] = -1569493.0;
  X.matrix[3][2] = 3144517.0;
  X.matrix[3][3] = 1284666.0;

  result = s21_eq_matrix(&X, &Z);

  s21_remove_matrix(&A);
  s21_remove_matrix(&X);
  s21_remove_matrix(&Z);

  ck_assert_int_eq(result, SUCCESS);
}
END_TEST

START_TEST(calc_complements_2) {
  int result = 0;
  matrix_t A = {NULL, 0, 0};
  matrix_t Z = {NULL, 0, 0};
  matrix_t X = {NULL, 0, 0};

  s21_create_matrix(4, 4, &A);
  A.matrix[0][0] = -1.0;
  A.matrix[0][1] = 2.0;
  A.matrix[0][2] = 7.0;
  A.matrix[0][3] = 9.0;
  A.matrix[1][0] = 1.0;
  A.matrix[1][1] = 0.0;
  A.matrix[1][2] = 0.0;
  A.matrix[1][3] = 0.0;
  A.matrix[2][0] = 47.0;
  A.matrix[2][1] = 13.0;
  A.matrix[2][2] = 17.0;
  A.matrix[2][3] = 21.0;
  A.matrix[3][0] = 22.0;
  A.matrix[3][1] = 7.0;
  A.matrix[3][2] = 1.0;
  A.matrix[3][3] = 3.0;

  s21_calc_complements(&A, &Z);

  s21_create_matrix(4, 4, &X);

  X.matrix[0][0] = 0.0;
  X.matrix[0][1] = -30.0;
  X.matrix[0][2] = -108.0;
  X.matrix[0][3] = 106.0;
  X.matrix[1][0] = 138.0;
  X.matrix[1][1] = -726.0;
  X.matrix[1][2] = -1137.0;
  X.matrix[1][3] = 1061.0;
  X.matrix[2][0] = 0.0;
  X.matrix[2][1] = 12.0;
  X.matrix[2][2] = 57.0;
  X.matrix[2][3] = -47.0;
  X.matrix[3][0] = 0.0;
  X.matrix[3][1] = 6.0;
  X.matrix[3][2] = -75.0;
  X.matrix[3][3] = 57.0;

  result = s21_eq_matrix(&X, &Z);

  s21_remove_matrix(&A);
  s21_remove_matrix(&X);
  s21_remove_matrix(&Z);

  ck_assert_int_eq(result, SUCCESS);
}
END_TEST

START_TEST(calc_complements_3) {
  int result = 0;
  matrix_t A = {NULL, 0, 0};
  matrix_t Z = {NULL, 0, 0};

  s21_create_matrix(4, 3, &A);
  A.matrix[0][0] = -1.0;
  A.matrix[0][1] = 2.0;
  A.matrix[0][2] = 7.0;
  A.matrix[1][0] = 1.0;
  A.matrix[1][1] = 0.0;
  A.matrix[1][2] = 0.0;
  A.matrix[2][0] = 47.0;
  A.matrix[2][1] = 13.0;
  A.matrix[2][2] = 17.0;
  A.matrix[3][0] = 22.0;
  A.matrix[3][1] = 7.0;
  A.matrix[3][2] = 1.0;

  result = s21_calc_complements(&A, &Z);

  s21_remove_matrix(&A);

  ck_assert_int_eq(result, MATRIX_INCORRECT_CALCULATED);
}
END_TEST

START_TEST(calc_complements_4) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -0.024054626500000;
  A.matrix[0][1] = -7.889156500000000;
  A.matrix[0][2] = -220051.834999999991851;
  A.matrix[1][0] = 0.003685790350000;
  A.matrix[1][1] = -4892416.250000000000000;
  A.matrix[1][2] = -40017.773500000002969;
  A.matrix[2][0] = 3630265.350000000093132;
  A.matrix[2][1] = -436356.724999999976717;
  A.matrix[2][2] = 25.551963499999999;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = -17587035427.698596954345703;
  expected_result.matrix[0][1] = -145275136521.292419433593750;
  expected_result.matrix[0][2] = 17760769188543.617187500000000;
  expected_result.matrix[1][0] = 96021098252.423797607421875;
  expected_result.matrix[1][1] = 798846551803.802612304687500;
  expected_result.matrix[1][2] = -28650227.880717914551497;
  expected_result.matrix[2][0] = -1076584857689.840820312500000;
  expected_result.matrix[2][1] = -1773.677524846890037;
  expected_result.matrix[2][2] = 117685.274654057517182;

  ck_assert_int_eq(s21_calc_complements(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(calc_complements_5) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = 0.015101086500000;
  A.matrix[0][1] = 0.003167367550000;
  A.matrix[0][2] = -2528277.950000000186265;
  A.matrix[1][0] = -0.027231088500000;
  A.matrix[1][1] = 16.305733499999999;
  A.matrix[1][2] = -2.314648450000000;
  A.matrix[2][0] = -12.539846499999999;
  A.matrix[2][1] = 0.187016135000000;
  A.matrix[2][2] = -0.001187671450000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 0.413510752853482;
  expected_result.matrix[0][1] = 29.025303922876557;
  expected_result.matrix[0][2] = 204.466302506984619;
  expected_result.matrix[1][0] = -472828.770410961471498;
  expected_result.matrix[1][1] = -31704217.402352608740330;
  expected_result.matrix[1][2] = -0.042542449717612;
  expected_result.matrix[2][0] = 41225426.459294982254505;
  expected_result.matrix[2][1] = 68847.795562755040010;
  expected_result.matrix[2][2] = 0.246320542895514;

  ck_assert_int_eq(s21_calc_complements(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(calc_complements_6) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(3, 3, &A);
  A.matrix[0][0] = -0.004893242350000;
  A.matrix[0][1] = -0.041001349500000;
  A.matrix[0][2] = 0.371617085000000;
  A.matrix[1][0] = 2730164.149999999906868;
  A.matrix[1][1] = -0.002195554450000;
  A.matrix[1][2] = -0.023766945500000;
  A.matrix[2][0] = -43422.453500000003260;
  A.matrix[2][1] = 2272560.950000000186265;
  A.matrix[2][2] = -0.002140884450000;
  s21_create_matrix(3, 3, &expected_result);
  expected_result.matrix[0][0] = 54011.832248778657231;
  expected_result.matrix[0][1] = 6876.985060493251694;
  expected_result.matrix[0][2] = 6204464434284.606445312500000;
  expected_result.matrix[1][0] = 844522.475636051734909;
  expected_result.matrix[1][1] = 16136.525603693915400;
  expected_result.matrix[1][2] = 12900.570675597231457;
  expected_result.matrix[2][0] = 0.001790382383661;
  expected_result.matrix[2][1] = 1014575.642878205399029;
  expected_result.matrix[2][2] = 111940.414517263794551;

  ck_assert_int_eq(s21_calc_complements(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(calc_complements_7) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(4, 4, &A);
  A.matrix[0][0] = 1;
  A.matrix[0][1] = 1;
  A.matrix[0][2] = 1;
  A.matrix[0][3] = 1;
  A.matrix[1][0] = 1;
  A.matrix[1][1] = 1;
  A.matrix[1][2] = 1;
  A.matrix[1][3] = 1;
  A.matrix[2][0] = 1;
  A.matrix[2][1] = 1;
  A.matrix[2][2] = 1;
  A.matrix[2][3] = 1;
  A.matrix[3][0] = 1;
  A.matrix[3][1] = 1;
  A.matrix[3][2] = 1;
  A.matrix[3][3] = 1;
  s21_create_matrix(4, 4, &expected_result);
  expected_result.matrix[0][0] = 0.000000;
  expected_result.matrix[0][1] = -0.000000;
  expected_result.matrix[0][2] = 0.000000;
  expected_result.matrix[0][3] = -0.000000;
  expected_result.matrix[1][0] = -0.000000;
  expected_result.matrix[1][1] = 0.000000;
  expected_result.matrix[1][2] = -0.000000;
  expected_result.matrix[1][3] = 0.000000;
  expected_result.matrix[2][0] = 0.000000;
  expected_result.matrix[2][1] = -0.000000;
  expected_result.matrix[2][2] = 0.000000;
  expected_result.matrix[2][3] = -0.000000;
  expected_result.matrix[3][0] = -0.000000;
  expected_result.matrix[3][1] = 0.000000;
  expected_result.matrix[3][2] = -0.000000;
  expected_result.matrix[3][3] = 0.000000;

  ck_assert_int_eq(s21_calc_complements(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(calc_complements_8) {
  matrix_t A = {NULL, 0, 0}, result = {NULL, 0, 0},
           expected_result = {NULL, 0, 0};
  s21_create_matrix(1, 1, &A);
  A.matrix[0][0] = 2;
  s21_create_matrix(1, 1, &expected_result);
  expected_result.matrix[0][0] = 0.000000;

  ck_assert_int_eq(s21_calc_complements(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

START_TEST(calc_complements_9) {
  matrix_t A = {NULL, 0, 0}, result;
  ck_assert_int_eq(s21_calc_complements(&A, &result), 1);
}
END_TEST

START_TEST(calc_complements_10) {
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
  expected_result.matrix[0][0] =
      -58330453818968108941608009015580688384.0000000000;
  expected_result.matrix[0][1] =
      95844037126640643957168757000888123392.0000000000;
  expected_result.matrix[0][2] =
      34083818612591953132225286308112629760.0000000000;
  expected_result.matrix[0][3] =
      -75215198663884073775802067496531394560.0000000000;
  expected_result.matrix[0][4] =
      24615437318555380754954656386954297344.0000000000;
  expected_result.matrix[0][5] =
      -87928221809223049478664386825370468352.0000000000;
  expected_result.matrix[0][6] =
      1854950763123592641057711793714801672192.0000000000;
  expected_result.matrix[0][7] =
      -3475794064672611294330316151787991597056.0000000000;

  expected_result.matrix[1][0] =
      29261139201274146399396906972653551616.0000000000;
  expected_result.matrix[1][1] =
      -17031650133410266975342021677315784704.0000000000;
  expected_result.matrix[1][2] =
      -27919087995375639687245415362399830016.0000000000;
  expected_result.matrix[1][3] =
      107442541470337867829987466418667388928.0000000000;
  expected_result.matrix[1][4] =
      -397961254312495258926778837152825344.0000000000;
  expected_result.matrix[1][5] =
      -54080946682251212267859571135039406080.0000000000;
  expected_result.matrix[1][6] =
      -373475537301813451455300842422867591168.0000000000;
  expected_result.matrix[1][7] =
      809360442488367977316377624245723725824.0000000000;

  expected_result.matrix[2][0] =
      3533977465439551621454119258565138972672.0000000000;
  expected_result.matrix[2][1] =
      3294405131856586345915123412537960300544.0000000000;
  expected_result.matrix[2][2] =
      -1899955687439082438040575498902038380544.0000000000;
  expected_result.matrix[2][3] =
      3852248171264620562477461344790209626112.0000000000;
  expected_result.matrix[2][4] =
      -57134422804790568445584751237986779136.0000000000;
  expected_result.matrix[2][5] =
      -6761762480397801220990023393960219639808.0000000000;
  expected_result.matrix[2][6] =
      46541685582129519058310262654692241702912.0000000000;
  expected_result.matrix[2][7] =
      -80831138950367815401686818709767238713344.0000000000;

  expected_result.matrix[3][0] =
      933577981461918367111065942255961374720.0000000000;
  expected_result.matrix[3][1] =
      -3401099238686794796421224171578698235904.0000000000;
  expected_result.matrix[3][2] =
      -4445293780027181073135733451676566159360.0000000000;
  expected_result.matrix[3][3] =
      8001968242595032085209000282632809873408.0000000000;
  expected_result.matrix[3][4] =
      -64780590275863554960161216176087629824.0000000000;
  expected_result.matrix[3][5] =
      -20662253004805098433747935479546110803968.0000000000;
  expected_result.matrix[3][6] =
      484820485550365319909183355083508980645888.0000000000;
  expected_result.matrix[3][7] =
      -301195254067644536330920847319540493713408.0000000000;

  expected_result.matrix[4][0] =
      -9582748457165746411203419659265499987968.0000000000;
  expected_result.matrix[4][1] =
      -3191302433551606786646356576110678900736.0000000000;
  expected_result.matrix[4][2] =
      9502492977133404334885478718605338083328.0000000000;
  expected_result.matrix[4][3] =
      -19785683879300250388956008157511413661696.0000000000;
  expected_result.matrix[4][4] =
      180001711113194787960280287679057231872.0000000000;
  expected_result.matrix[4][5] =
      15855475983890259486219327316403750436864.0000000000;
  expected_result.matrix[4][6] =
      -4370659439655694411310062636072509112320.0000000000;
  expected_result.matrix[4][7] =
      -14323272084650702792916847207874612428800.0000000000;

  expected_result.matrix[5][0] =
      -1900744344224378441776886706440889171968.0000000000;
  expected_result.matrix[5][1] =
      13801253453512997584973265301777646878720.0000000000;
  expected_result.matrix[5][2] =
      1233059642594066890289291465000812019712.0000000000;
  expected_result.matrix[5][3] =
      -3005434828534098143004150635547395620864.0000000000;
  expected_result.matrix[5][4] =
      35784058460739404745011996356478238720.0000000000;
  expected_result.matrix[5][5] =
      5547139841999625048020823264139600199680.0000000000;
  expected_result.matrix[5][6] =
      198402374017639316246519255602367029051392.0000000000;
  expected_result.matrix[5][7] =
      -414953498370085839991417196616642174386176.0000000000;

  expected_result.matrix[6][0] =
      229993720715795154115047928016509337600.0000000000;
  expected_result.matrix[6][1] =
      75959900329941649354165979540224999424.0000000000;
  expected_result.matrix[6][2] =
      -139562969109444194540978725559319134208.0000000000;
  expected_result.matrix[6][3] =
      347250387979024646600113292418993881088.0000000000;
  expected_result.matrix[6][4] =
      -3727619620283752748338029058821455872.0000000000;
  expected_result.matrix[6][5] =
      -441994527469569027045350117691501838336.0000000000;
  expected_result.matrix[6][6] =
      -24791992122304619781358699415158099279872.0000000000;
  expected_result.matrix[6][7] =
      44765993782260146282646108184408307531776.0000000000;

  expected_result.matrix[7][0] =
      238427367126477624130209105496848203776.0000000000;
  expected_result.matrix[7][1] =
      -1332670946771032195008140746812075016192.0000000000;
  expected_result.matrix[7][2] =
      -156620432627922298372759754106095009792.0000000000;
  expected_result.matrix[7][3] =
      381535040462763002587044850221312901120.0000000000;
  expected_result.matrix[7][4] =
      -4391862967498232696518226914723233792.0000000000;
  expected_result.matrix[7][5] =
      1607367862498808891738455741387692310528.0000000000;
  expected_result.matrix[7][6] =
      -24294469254311780407219010028203059183616.0000000000;
  expected_result.matrix[7][7] =
      44322360307287033142464703689204944601088.0000000000;

  ck_assert_int_eq(s21_calc_complements(&A, &result), 0);
  ck_assert_int_eq(s21_eq_matrix(&expected_result, &result), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&result);
  s21_remove_matrix(&expected_result);
}
END_TEST

Suite *test_calc_complements(void) {
  Suite *s = suite_create("\033[1;32m-=S21_CALC_COMPLEMENTS=-\033[0m");
  TCase *tc = tcase_create("calc_complements_tc");

  tcase_add_test(tc, calc_complements_1);
  tcase_add_test(tc, calc_complements_2);
  tcase_add_test(tc, calc_complements_3);
  tcase_add_test(tc, calc_complements_4);
  tcase_add_test(tc, calc_complements_5);
  tcase_add_test(tc, calc_complements_6);
  tcase_add_test(tc, calc_complements_7);
  tcase_add_test(tc, calc_complements_8);
  tcase_add_test(tc, calc_complements_9);
  tcase_add_test(tc, calc_complements_10);
  suite_add_tcase(s, tc);
  return s;
}