#include "GroupGame.h"

GroupGame::GroupGame()
{
    playerNum = 1;
    gameArray = new GroupGame[playerNum];
}

GroupGame::GroupGame(int players)
{
    playerNum = players;
    gameArray = new GroupGame[playerNum];
}

GroupGame::~GroupGame()
{
    
}

int GroupGame::getPlayerCount()
{
    return playerNum;
}


void GroupGame::createGame(string name) {
    for (int i = 0; i < playerNum; i++) {
        gameArray[i] = { Game(name) };
    }
}


