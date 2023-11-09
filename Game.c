#include <stdio.h>
#include <conio.h>
#include "board.h"
#include "mine.h"

int main()
{
    initBoard();
    deployMines(8);
    populateBoard();
    getch();
    return 0;
}


