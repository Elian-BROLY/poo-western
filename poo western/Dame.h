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
	void remercie(const Cowboy& heros);
public:
	Dame(const string nom="", const string boissonFavorite = "lait", const string couleurRobe = "blanche");
	string getNom();
	string getEtat();
	void sePresente();
	void seFaitKidnapper();
	void seFaitLiberer(Cowboy& cowboy);
	void changeDeRobe(const string couleurRobe);
};

