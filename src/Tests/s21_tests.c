#include "s21_tests.h"

int main(void) {
  int Failed = 0;
  Suite *s21_matrix_tests[] = {test_eq_matrix(),      test_sum_matrix(),
                               test_sub_matrix(),     test_mult_number(),
                               test_mult_matrix(),    test_transpose_matrix(),
                               test_determinant(),    test_calc_complements(),
                               test_inverse_matrix(), NULL};

  for (int i = 0; s21_matrix_tests[i] != NULL; i++) {
    SRunner *sr = srunner_create(s21_matrix_tests[i]);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);

    Failed += srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  printf("========= FAILED: %d =========\n", Failed);

  return Failed == 0 ? 0 : 1;
}