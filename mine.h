//mine.h
#include <stdbool.h>

#ifndef MINE_H
#define MINE_H


/*Deploy the mines with specific number*/
void deployMines(int number);
// check the position has mine or not, return true if it has
bool checkMines(int x, int y);

#endif 