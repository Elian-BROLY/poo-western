#include "Cowboy.h"

Cowboy::Cowboy(const string nom)
	:Humain(nom)
{
}

string Cowboy::getNom()
{
	return "vaillant " + nom;
}

void Cowboy::sePresente()
{
	cout << "(" << nom << ") -- Bonjour, je suis le " << getNom() << " et j'aime " << nouvelleBoissonFavorite << endl;
}
