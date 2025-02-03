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
	Brigand(string nom = "", string boissonFavorite = "tord-boyaux", string comportement = "mechant");
	string getComportement();
	int getNbDamesEnlevees();
	int getRecompense();
	void sePresente();
	void kidnappe(Dame& dame);
	void seFaitEmprisonne(Cowboy& cowboy);
	void augmenteRecompense(int prix = 100);
	void diminueRecompense(int prix = 100);
	bool estEnPrison();
};

