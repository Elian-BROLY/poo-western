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
	void arret(Brigand& brigand);
};

