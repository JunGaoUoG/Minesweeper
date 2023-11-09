//board.h
#include <stdbool.h>
#ifndef BOARD_H
#define BOARD_H

#define ROW 8
#define COLUMN 8

//define a struct type 
typedef struct {
    //The symbol is for printing to be "-", "o" or "*"
    char symbol;
    bool ischecked;
} Tile;

Tile board[ROW][COLUMN];

//init the board 
void initBoard();
//Populate the board data structure with square objects
void populateBoard();
//manipulate the board with defined position
bool manipulateBoard(int x, int y);



#endif