#include "unity_fixture.h"
#include "grid.h"

TEST_GROUP(Grid);

TEST_SETUP(Grid) {}

TEST_TEAR_DOWN(Grid) {}

TEST(Grid, get_cell_should_return_dead_cell)
{
    TEST_ASSERT_FALSE(getCell(0, 0));
}

TEST_GROUP_RUNNER(Grid)
{
    RUN_TEST_CASE(Grid, get_cell_should_return_dead_cell);
}