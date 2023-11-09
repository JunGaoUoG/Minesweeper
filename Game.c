#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "board.h"
#include "mine.h"
#include "Game.h"

bool isWin=true;

int main()
{
    int x, y;
    initBoard(); 
    // player can start the game and set the state to be startGame
    state=startGame;
    populateBoard();
    printf("Input the x , y position:");
    scanf("%d %d", &x, &y);

    manipulateBoard(x,y);
    deployMines(8);
    populateBoard();

    while(endGame!=state)
    {
        //playing the game
        gameStateManage(state);    
    }   
    gameEnd();
    getch();
    return 0;
}

void executeGame()
{
    int x, y;
    printf("Input the x , y position:");
    scanf("%d %d", &x, &y);
    manipulateBoard(x,y);

    if(true==checkMines(x,y))
    {
        state=endGame;
        isWin=false;
    }   
}

void gameEnd()
{
    if(isWin)
    {
        printf("Win");
    }       
    else
    {
        printf("Lose");
    }     
}


gameState gameStateManage(gameState state)
{
    switch (state)
    {
        //init the game
        case initGame:
            state=startGame;
            initBoard();
            break;
        
        //start the game
        case startGame:
            state=displayGame;
            executeGame();            

        //diaplay the board for the game, this state mostly used by the GUI
        case displayGame:
            state=startGame;
            populateBoard();
            break;

        // restart the game, so it will init the game firstly and start the game later
        case restartGame:
            state=initGame;
            break;

        // end the game and show the results
        case endGame:
            gameEnd();
            break;

        default:
            break;

    }

    return state;
}

