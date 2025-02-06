#include "Humain.h"
#include <iostream>
using namespace std;

Humain::Humain(const string nom, const string boissonFavorite)
	: nom(nom), boissonFavorite(boissonFavorite)
{
}

void Humain::parle(const string texte)
{
	cout << "(" << nom << ") -- " << texte;
}

string Humain::getBoissonFavorite()
{
	return boissonFavorite;
}

void Humain::empty(string nouvelleBoissonFavorite)
{
	boissonFavorite = nouvelleBoissonFavorite;
}

void Humain::setBoissonFavorite(const string nouvelleBoissonFavorite)
{
	if (!nouvelleBoissonFavorite.empty())
		boissonFavorite = nouvelleBoissonFavorite;
}

string Humain::getNom()
{
	return nom;
}

void Humain::sePresente()
{
	cout << "(" << nom << ") -- Bonjour, je suis " << nom << " et j'aime le " << boissonFavorite << endl;
}

void Humain::boit()
{
	cout << "(" << nom << ") -- Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS !" << endl;
}
