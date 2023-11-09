#include <stdio.h>
#include "board.h"

void initBoard()
{
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COLUMN; j++)
        {
            board[i][j].ischecked=false;
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
            * should be '-', and print 3 spaces between the symbol, otherwise, print 
            * other symbol
           */
          if(!board[i][j].ischecked)
          {
            printf("%3c",'-');
          }
          else
          {
            printf("%3c",board[i][j].symbol);
          }
          
        }
        //print for next row
        printf("\n");
    }
}

bool manipulateBoard(int x, int y)
{
    //check the x , y position
    if(x>=ROW || x<0 ||y>=COLUMN || y<0)
    {
        return false;
    }

    if(board[x][y].symbol!='*')
    {
        board[x][y].symbol='O';      
    }
    board[x][y].ischecked=true;
    return true;
}