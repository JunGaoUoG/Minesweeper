#include <stdio.h>
#include "board.h"

void initBoard()
{
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COLUMN; j++)
        {
            board[i][j]='-';
        }
    }
}

void populateBoard()
{
    for(int i=0; i<ROW; i++)
    {
        for(int j=0;j<COLUMN; j++)
        {
           /*
            * if the Player has not interacted with square then the representation
            * should be '-', and print 3 spaces between the symbol 
           */
          printf("%3c",board[i][j]);
        }
        //print for next row
        printf("\n");
    }
}