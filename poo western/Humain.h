#pragma once
#include <iostream>
using namespace std;
class Humain
{
protected:
	string nom;
	string boissonFavorite;
public:
	Humain(const string nom, const string boissonFavorite="eau");
	void parle(const string texte);
	string getBoissonFavorite();
	void empty(string);
	void setBoissonFavorite(const string);
	string getNom();
	virtual void sePresente();
	void boit();

};

