#include "Game.h"

Game::Game()
{
	name = "Player";
	courseResults = new int[18];
}

Game::Game(string playerName)
{
	name = playerName;
	courseResults = new int[18];
}

Game::~Game()
{
	delete[]courseResults;
}

void Game::setName(string newName) {
	name = newName;
}

string Game::getName() {
	return name;
}

int* Game::getResultArr() const
{
	return courseResults;
}

void Game::compareScore(int* coursePars, int* courseScores, int size) {
	for (int i{ 0 }; i < size; i++) {
		courseResults[i] = courseScores[i] - coursePars[i];
	}
}

void Game::printGame(int size) const
{
	for (int i = 0; i < size; i++) {
		cout << courseResults[i] << endl;;
	}
}

void Game::printFinalCompare(int* coursePars, int* courseScores, int size) const
{
	cout << "------------------------------------------------------------------" << endl;
	cout << "Par	Score	Results" << endl;

	for (int i = 0; i < size; i++) {
		cout << coursePars[i];
		cout << "	";
		cout << courseScores[i];
		cout << "	";
		cout << courseResults[i] << endl;;
	}
}

void Game::printTotal(int* coursePars, int* courseScores, int size)
{
	int totalScore = 0;
	int totalResult = 0;
	int totalPar = 0;

	for (int i = 0; i < size; i++) {
		totalPar += coursePars[i];
	}

	for (int i = 0; i < size; i++) {
		totalScore += courseScores[i];
	}

	for (int i = 0; i < size; i++) {
		totalResult += courseResults[i];
	}

	cout << "------------------------------------------------------------------" << endl;
	cout << "Total Par   Total Score   Total Results" << endl;
	cout << totalPar;
	cout << "		";
	cout << totalScore;
	cout << "		";
	cout << totalResult << endl;
}