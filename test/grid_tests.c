#include "unity_fixture.h"
#include "grid.h"

TEST_GROUP(Grid);

TEST_SETUP(Grid) {}

TEST_TEAR_DOWN(Grid) {}

TEST(Grid, get_cell_should_return_dead_cell)
{
    TEST_ASSERT_FALSE(getCell(0, 0));
}

TEST(Grid, get_cell_should_return_live_cell)
{
    setCell(0, 0, true);
    setCell(63, 0, true);
    setCell(0, 31, true);
    setCell(63, 31, true);

    TEST_ASSERT_TRUE(getCell(0, 0));
    TEST_ASSERT_TRUE(getCell(63, 0));
    TEST_ASSERT_TRUE(getCell(0, 31));
    TEST_ASSERT_TRUE(getCell(63, 31));
}

TEST(Grid, get_neighbor_count_succeeds)
{
    int count = getLiveNeighborCount(0, 0);
    
    TEST_ASSERT_EQUAL_INT(0, count);
}

TEST_GROUP_RUNNER(Grid)
{
    RUN_TEST_CASE(Grid, get_cell_should_return_dead_cell);
    RUN_TEST_CASE(Grid, get_cell_should_return_live_cell);
}