#include "unity_fixture.h"
#include "cell.h"

TEST_GROUP(Cell);

TEST_SETUP(Cell) {}

TEST_TEAR_DOWN(Cell) {}

TEST(Cell, live_cell_with_fewer_than_two_live_neighbors_dies)
{
    TEST_FAIL_MESSAGE("On purpose!");
}

TEST_GROUP_RUNNER(Cell)
{
    RUN_TEST_CASE(Cell, live_cell_with_fewer_than_two_live_neighbors_dies);
}
