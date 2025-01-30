#pragma once
#include "Humain.h"
class Cowboy :
	public Humain
{
private:
	string nouvelleBoissonFavorite = "whisky";
public:
	Cowboy(const string nom = "");
	string getNom();
	void sePresente();
};

