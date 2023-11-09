#include "mine.h"
#include "board.h"
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
void deployMines(int number)
{
    //feed the random number generator with the current time
    srand(time(NULL));

    int mine_row,mine_column;
    bool is_mine_placed;
    for(int i=0;i<number; i++)
    {
        is_mine_placed=false;
        
       while(!is_mine_placed)
       {
            mine_row=rand()%8;
            mine_column=rand()%8;
            //check the square has the mine or not
            if( board[mine_row][mine_column]!='*')
            {
                board[mine_row][mine_column]='*';
                is_mine_placed=true;
            }          
       }        
    }
}