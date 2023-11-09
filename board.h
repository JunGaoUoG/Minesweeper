//board.h
#ifndef BOARD_H
#define BOARD_H

#define ROW 8
#define COLUMN 8

char board[ROW][COLUMN];

//init the board with "-"
void initBoard();
//Populate the board data structure with square objects
void populateBoard();

#endif