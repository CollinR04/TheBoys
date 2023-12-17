#include "Scores.h"

Scores::Scores()
{
	courseScores = new int[18];
}

Scores::Scores(int score, int parkName, int size)
{
	this->score = score;
	this->parkName = parkName;
	this->size = size;
}

Scores::~Scores()
{
	delete[]courseScores;
}

int Scores::getScore(int index) const
{
	return courseScores[index];
}

void Scores::setScore(int score, int index)
{
	this->courseScores[index] = score;
}

unsigned int Scores::getSize() const
{
	return size;
}

void Scores::printScore(int size) const
{
	for (int i = 0; i < size; i++) {
		cout << courseScores[i] << endl;
	}
}

int* Scores::getScoreArr() const
{
	return courseScores;
}

enum Location {
	PHELLEN, WAKANDA, MIDDLE_SCHOOL
};

void Scores::setName(int name) // look into enum
{
	if (name == PHELLEN) {
		this->size = 9;
	}
	else if (name == WAKANDA) {
		this->size = 14;
	}
	else if (name == MIDDLE_SCHOOL) {
		this->size = 18;
	}
}