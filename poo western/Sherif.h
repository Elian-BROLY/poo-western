#pragma once
#include "Cowboy.h"

class Brigand;

class Sherif :
	public Cowboy
{
private:

public:
	Sherif(string nom = "", string boissonFavorite = "eau");
	void sePresente();
	void rechercher(Brigand& brigand);
	void emprisonne(Brigand& brigand);
	void coffrer();
};

