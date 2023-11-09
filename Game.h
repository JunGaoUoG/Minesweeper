#ifndef GAME_H
#define GAME_H

typedef enum 
{
    initGame=0,
    startGame,
    displayGame,
    restartGame,
    endGame
} gameState;

static gameState state=initGame;

//manage the state
gameState gameStateManage(gameState state);
//deal with the end game
void gameEnd();
#endif