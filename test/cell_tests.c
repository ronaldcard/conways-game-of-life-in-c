#include "unity_fixture.h"
#include "cell.h"

TEST_GROUP(Cell);

TEST_SETUP(Cell) {}

TEST_TEAR_DOWN(Cell) {}

TEST(Cell, live_cell_with_fewer_than_two_live_neighbors_dies)
{   
    TEST_ASSERT_FALSE(doesCellLive(ALIVE, 0));
    TEST_ASSERT_FALSE(doesCellLive(ALIVE, 1));
}

TEST(Cell, live_cell_with_two_or_three_live_neighbors_lives)
{   
    TEST_ASSERT_TRUE(doesCellLive(ALIVE, 2));
    TEST_ASSERT_TRUE(doesCellLive(ALIVE, 3));
}

TEST(Cell, live_cell_with_more_than_three_live_neighbors_dies)
{   
    TEST_ASSERT_FALSE(doesCellLive(ALIVE, 4));
    TEST_ASSERT_FALSE(doesCellLive(ALIVE, 5));
    TEST_ASSERT_FALSE(doesCellLive(ALIVE, 7));
}

TEST(Cell, dead_cell_with_less_than_three_live_neighbors_dies)
{   
    TEST_ASSERT_FALSE(doesCellLive(DEAD, 0));
    TEST_ASSERT_FALSE(doesCellLive(DEAD, 2));
}

TEST_GROUP_RUNNER(Cell)
{
    RUN_TEST_CASE(Cell, live_cell_with_fewer_than_two_live_neighbors_dies);
    RUN_TEST_CASE(Cell, live_cell_with_two_or_three_live_neighbors_lives);
    RUN_TEST_CASE(Cell, live_cell_with_more_than_three_live_neighbors_dies);

    RUN_TEST_CASE(Cell, dead_cell_with_less_than_three_live_neighbors_dies);
}
