#pragma once
#include "Humain.h"
class Cowboy :
	public Humain
{
private:

public:
	Cowboy(const string nom, const string boissonFavorite);
	string getNom();
	void sePresente();
};

