#include "Pars.h"

Pars::Pars()
{
	coursePars = new int[18];
}


Pars::~Pars()
{
	delete[]coursePars;
}

int Pars::getPars(int index) const
{
	return coursePars[index];
}

void Pars::setRegularPars(int par, int index)
{
	this->coursePars[index] = par;
}

void Pars::setYouthPars(int par, int index)
{
	this->coursePars[index] = par + 1;
}

void Pars::printPars(int size) const
{
	for (int i = 0; i < size; i++) {
		cout << coursePars[i] << endl;
	}
}

int* Pars::getParsArr() const
{
	return coursePars;
}