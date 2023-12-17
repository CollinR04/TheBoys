#pragma once
#include <iostream>
using namespace std;

class Scores
{
public:
	Scores();

	~Scores();

	Scores(int score, int name, int size);

	int getScore(int index) const;

	int* getScoreArr() const;

	void setScore(int score, int index); // user input adds the score into the array

	string getPlayerName() const;

	void setPlayerName(string playerName);

	unsigned int getSize() const;

	void printScore(int size) const;

	enum Location;

	void setName(int parkName);

private:
	int* courseScores;
	int score{ 0 };
	int parkName{ 0 };
	int size{ 0 };
	string playerName{ " " };
};
