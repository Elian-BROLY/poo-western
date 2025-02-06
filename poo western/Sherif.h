#pragma once
#include "Humain.h"

class Brigand;

class Sherif :
	public Humain
{
private:
	string role;
	void arret(Brigand& brigand);
public:
	Sherif(string nom = "", string boissonFavorite = "eau", string role = "Sherif");
	void sePresente(Brigand& brigand);
};

