#pragma once
#include "Humain.h"

class Barman :
	public Humain
{
private:
	string nomBar;
	string terminePhrase();
public:
	Barman(string nom = "", string boissonFavorite = "biere", string nomBar = "Saloon Robert");
	string getNomBar();
	void parle(string texte);
	void sePresente();
	void sert(Humain& client);
};

