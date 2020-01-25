#ifndef _GRID_H_
#define _GRID_H_
#include <stdbool.h>

bool getCell(int column, int row);
void setCell(int column, int row, bool state);

int getLiveNeighborCount(int currentColumn, int currentRow);

#endif