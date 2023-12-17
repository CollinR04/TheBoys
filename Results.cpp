#include "Results.h"

Results::Results()
{
	courseResults = new int[18];
}

Results::~Results()
{
	delete[]courseResults;
}

int* Results::getResultArr() const
{
	return courseResults;
}

void Results::compareScore(int* coursePars, int* courseScores, int size) {
	for (int i{ 0 }; i < size; i++) {
		courseResults[i] = courseScores[i] - coursePars[i];
	}
}

void Results::printResults(int size) const
{
	for (int i = 0; i < size; i++) {
		cout << courseResults[i] << endl;;
	}
}

void Results::printFinalCompare(int* coursePars, int* courseScores, int size) const
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

void Results::printTotal(int* coursePars, int* courseScores, int size)
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

void Results::addToMap(Results courseResults, int key)
{
	recent.insert({ key, courseResults });

}

int* Results::topScoreWinner(Results* ranked)
{
	return nullptr;
}

int* Results::AllScoreGroup(Results* recent)
{
	return nullptr;
}
