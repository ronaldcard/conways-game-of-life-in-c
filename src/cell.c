#include "cell.h"

bool doesLiveCellLive(int numberOfLiveNeighbors) 
{    
    switch(numberOfLiveNeighbors) {
        case 2: 
        case 3: return ALIVE;
        default: return DEAD;
    }
}

bool doesDeadCellLive(int numberOfLiveNeighbors) 
{
    return numberOfLiveNeighbors == 3;
}

bool doesCellLive(bool currentCellStatus, int numberOfLiveNeighbors)
{
    return currentCellStatus ? 
            doesLiveCellLive(numberOfLiveNeighbors) : 
                doesDeadCellLive(numberOfLiveNeighbors);    
}