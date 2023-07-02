#include "munit.h"

static MunitResult test_parameters(const MunitParameter params[], void* user_data) {
  const char* foo;

  (void) user_data;

  foo = munit_parameters_get(params, "foo");

  if (strcmp(foo, "one") != 0 &&
      strcmp(foo, "two") != 0 &&
      strcmp(foo, "three") != 0)
    return MUNIT_FAIL;

  return MUNIT_OK;
}

static char* foo_params[] = {
  (char*) "one", (char*) "two", (char*) "three", NULL
};

static MunitParameterEnum test_params[] = {
  { (char*) "foo", foo_params },
  { (char*) "bar", bar_params },
  { (char*) "baz", NULL },
  { NULL, NULL },
};

static MunitTest test_suite_tests[] = {
  { (char*) "/example/rand", test_rand, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL },
  { (char*) "/example/parameters", test_parameters, NULL, NULL, MUNIT_TEST_OPTION_NONE, test_params },
  { NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL }
};

static const MunitSuite test_suite = {
  (char*) "",
  test_suite_tests,
  NULL,
  MUNIT_SUITE_OPTION_NONE
};

int main(int argc, char* argv[MUNIT_ARRAY_PARAM(argc + 1)]) 
{
  return munit_suite_main(&test_suite, (void*) "µnit", argc, argv);
}