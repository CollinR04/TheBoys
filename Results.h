#pragma once
#include "Scores.h"
#include "Pars.h"
#include <string>
#include <iostream>
#include <map>
#include <ranges>
using namespace std;

class Results
{
public:
	Results();

	~Results();

	/*void addToRanked(Results courseResults, int key);

	void addToTotal(Results courseResults, int key);*/

	virtual int* topScoreWinner(Results* ranked);//change to void and print out, look at lab 8, virtual print and desctructor

	virtual int* AllScoreGroup(Results* total);

protected:
	multimap<int, Results*> total; //map of every game played
	multimap<int, Results*> ranked; //map of every game sorted by best scores
};
