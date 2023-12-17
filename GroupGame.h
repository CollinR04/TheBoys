#pragma once
#include "Results.h"
#include "Game.h"

class GroupGame : private Results
{
public:
	GroupGame(int players);

	GroupGame();

	~GroupGame();

	int getPlayerCount();

	void createGame(string name);

protected:
	int playerNum;
	GroupGame* gameArray;
};