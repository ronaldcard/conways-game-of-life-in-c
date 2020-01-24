#include "unity_fixture.h"
#include "life.h"
#include "Arduino.h"

TEST_GROUP(Life);

TEST_SETUP(Life){}

TEST_TEAR_DOWN(Life){}

TEST(Life, modify_this_to_begin)
{
    TEST_FAIL_MESSAGE("Failing on purpose!!!");
}

TEST_GROUP_RUNNER(Life)
{
    RUN_TEST_CASE(Life, modify_this_to_begin);
}
