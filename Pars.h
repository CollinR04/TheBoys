#pragma once
#include "Scores.h"
#include <string>
#include <iostream>
using namespace std;

class Pars
{
public:
	Pars();

	~Pars();

	int getPars(int index) const; // userinput for asking for pars

	void setRegularPars(int par, int index);

	void setYouthPars(int par, int index); // userinput for asking for pars

	void printPars(int size) const;

	int* getParsArr() const;

private:
	int* coursePars;
};
