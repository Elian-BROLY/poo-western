#pragma once
#include "Cowboy.h"

class Brigand;

class Sherif :
	public Cowboy
{
private:
	int nbBrigand = 0;
public:
	Sherif(string nom = "", string boissonFavorite = "eau", int nbBrigand = 0);
	void sePresente();
	void rechercher(Brigand& brigand);
	void emprisonne(Brigand& brigand);
	void coffrer();
	int getNbBringandEmprisonne();
	void respect();
};

