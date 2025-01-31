#include "Cowboy.h"

Cowboy::Cowboy(const string nom, const string boissonFavorite)
	:Humain(nom, boissonFavorite)
{
}

string Cowboy::getNom()
{
	return "vaillant " + nom;
}

void Cowboy::sePresente()
{
	cout << "(" << nom << ") -- Bonjour, je suis le " << getNom() << " et j'aime " << boissonFavorite << endl;
}
