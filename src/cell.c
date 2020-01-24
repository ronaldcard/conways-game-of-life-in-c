#include "cell.h"


bool cellLives(bool currentCellStatus, int numberOfLiveNeighbors)
{
    switch(numberOfLiveNeighbors) {
        case 2: 
        case 3: return true;
        default: return false;
    }
}