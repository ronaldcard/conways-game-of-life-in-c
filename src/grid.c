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

int getTopLeftNeighbor(int column, int row)
{
    return 0;
}

int getTopNeighbor(int column, int row)
{
    return 0;
}

int getTopRightNeighbor(int column, int row)
{
    return 0;
}

int getLeftNeighbor(int column, int row)
{
    return 0;
}

int getRightNeighbor(int column, int row)
{
    return 0;
}

int getBottomLeftNeighbor(int column, int row)
{
    return 0;
}

int getBottomNeighbor(int column, int row)
{
    return 0;
}

int getBottomRightNeighbor(int column, int row)
{
    return 0;
}

int getLiveNeighborCount(int currentColumn, int currentRow)
{
    int count = getTopLeftNeighbor(currentColumn, currentRow) 
    + getTopNeighbor(currentColumn, currentRow) 
    + getTopRightNeighbor(currentColumn, currentRow) 
    + getLeftNeighbor(currentColumn, currentRow) 
    + getRightNeighbor(currentColumn, currentRow) 
    + getBottomLeftNeighbor(currentColumn, currentRow) 
    + getBottomNeighbor(currentColumn, currentRow) 
    + getBottomRightNeighbor(currentColumn, currentRow);

    return count;
}