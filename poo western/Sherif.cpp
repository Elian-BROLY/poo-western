#include "Sherif.h"
#include "Brigand.h"

Sherif::Sherif(string nom, string boissonFavorite)
	:Cowboy(nom, boissonFavorite)
{
}

void Sherif::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis Sherif " << nom << " et j'aime le " << boissonFavorite << endl;
}

void Sherif::rechercher(Brigand& brigand)
{
	cout << "** OYEZ OYEZ BRAVE GENS ! ! " << brigand.getRecompense() << "$ a qui arretera " << brigand.getNom() << " mort ou vif ! !" << endl;
}

void Sherif::emprisonne(Brigand& brigand)
{
	brigand.seFaitEmprisonne(*this);
}

void Sherif::coffrer()
{
	cout << "(" << nom << ") -- " << "Au nom de la loi, je vous arrete !" << endl;
}
