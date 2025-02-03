#pragma once
#include "Humain.h"

class Brigand;
class Dame;

class Cowboy :
	public Humain
{
private:
	int popularite;
	string qualite;
public:
	Cowboy(const string nom, const string boissonFavorite, const string qualite);
	int getPopularite();
	void setPopularite(const int popularite);
	string getQualite();
	void setQualite(const string qualite);
	string getNom();
	void sePresente();
	void incrementePopularite();
	void decrementPopularite();
	void tire(const Brigand& brigand);
	void emprisonne(Brigand& brigand);
	void libere(Dame& dame);
};

