#pragma once
#include "Humain.h"

class Dame;
class Cowboy;

class Brigand :
	public Humain
{
private:
	string comportement;
	int nbDamesEnlevees;
	int recompense;
	bool enPrison;
public:
	Brigand(const string nom = "", const string boissonFavorite = "tord-boyaux", const string comportement = "mechant");
	string getComportement();
	int getNbDamesEnlevees();
	int getRecompense();
	void sePresente();
	void kidnappe(Dame& dame);
	void seFaitEmprisonne(Cowboy& cowboy);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	bool estEnPrison();
};

