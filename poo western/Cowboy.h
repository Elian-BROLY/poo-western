#pragma once
#include "Humain.h"

class Brigand;
class Dame;
class Humain;

class Cowboy :
	public Humain
{
private:
	int popularite;
	string qualite;
public:
	Cowboy(string nom = "", string boissonFavorite = "coca-cola", string qualite = "vaillant", int popularite = 0);
	int getPopularite();
	void setPopularite(int popularite);
	string getQualite();
	void setQualite(string qualite);
	string getNom();
	void sePresente();
	void incrementePopularite();
	void decrementPopularite();
	void tire(Brigand& brigand);
	void emprisonne(Brigand& brigand);
	void libere(Dame& dame);
};

