#include "grid.h"

#define COLUMN_SIZE 64
#define ROW_SIZE 32

bool grid[COLUMN_SIZE][ROW_SIZE];

bool getCell(int column, int row)
{
    return grid[column][row];
}

void setCell(int column, int row, bool state)
{
    grid[column][row] = state;
}