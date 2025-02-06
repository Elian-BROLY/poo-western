#include "Sherif.h"
#include "Brigand.h"

Sherif::Sherif(string nom, string boissonFavorite, int nbBrigand)
	:Cowboy(nom, boissonFavorite), nbBrigand(nbBrigand)
{
}

void Sherif::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis Sherif " << nom << " et j'aime le " << boissonFavorite << " et j'ai arrete " << nbBrigand << " brigants" << endl;
}

void Sherif::rechercher(Brigand& brigand)
{
	cout << "** OYEZ OYEZ BRAVE GENS ! ! " << brigand.getRecompense() << "$ a qui arretera " << brigand.getNom() << " mort ou vif ! !" << endl;
}

void Sherif::emprisonne(Brigand& brigand)
{
	nbBrigand++;
	brigand.seFaitEmprisonne(*this);
}

void Sherif::coffrer()
{
	cout << "(" << nom << ") -- " << "Au nom de la loi, je vous arrete !" << endl;
}

int Sherif::getNbBringandEmprisonne()
{
	return nbBrigand;
}

void Sherif::respect()
{
	cout << "(" << nom << ") -- " << "Recommencez et Respectez moi, On m'appelle Sherif " << getNom() << endl;
}
