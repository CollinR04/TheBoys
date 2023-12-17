#pragma once
#include "GroupGame.h"
#include "Scores.h"
#include "Pars.h"
#include <string>
#include <iostream>
using namespace std;

class Game : private GroupGame
{
public:
	Game(string playerName);

	Game();

	~Game();
	
	void setName(string newName);
	
	string getName();

	int* getResultArr() const;

	void compareScore(int* coursePars, int* courseScores, int size); // Compairs the inputed score to the par score and then returns the +/- score

	void printGame(int size) const;

	void printFinalCompare(int* coursePars, int* courseScores, int size) const;

	void printTotal(int* coursePars, int* courseScores, int size);

protected:
	int* courseResults;
	string name;
};