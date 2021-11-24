#include "unity.h"
#include <unit_converter.h>

/* Modify these two lines according to the project */
#include <unit_converter.h>
#define PROJECT_NAME    "Unit_Converter"

/* Prototypes for all the test functions */
int length_convert(int u1, int u2, int a);
int mass_convert(int u1, int u2, int a);
int time_convert(int u1, int u2, int a);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN(test_unit_converter.h);

/* Run Test functions */
  RUN_TEST();
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
int length_convert(void) {
  TEST_ASSERT_EQUAL(10, length_convert(1, 1, 10));
  TEST_ASSERT_EQUAL(100, length_convert(2, 1, 10));
}

int mass_convert(void) {
  TEST_ASSERT_EQUAL(10, mass_convert(1, 1, 10));
  TEST_ASSERT_EQUAL(10000, mass_convert(2, 1, 10));
}

int time_convert(void) {
  TEST_ASSERT_EQUAL(10, time_convert(1, 1, 10));
  TEST_ASSERT_EQUAL(600, time_convert(2, 1, 10));
}