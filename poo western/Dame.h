#pragma once
#include "Humain.h"

class Cowboy;

class Dame :
	public Humain
{
private:
	string couleurRobe;
	string etat;
	void hurle();
	void remercie(Cowboy& heros);
public:
	Dame(string nom="", string boissonFavorite = "lait", string couleurRobe = "blanche");
	string getNom();
	string getEtat();
	void sePresente();
	void seFaitKidnapper();
	void seFaitLiberer(Cowboy& cowboy);
	void changeDeRobe(string couleurRobe);
};

