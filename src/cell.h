#ifndef _CELL_H_
#define _CELL_H_
#include <stdbool.h>

#define ALIVE 1
#define DEAD 0

bool cellLives(bool currentCellStatus, int numberOfLiveNeighbors);

#endif