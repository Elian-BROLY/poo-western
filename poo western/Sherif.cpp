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

void Sherif::arret(Brigand& brigand)
{
	brigand.augmenteRecompense();
	cout << "(" << nom << ") -- " << "** OYEZ OYEZ BRAVE GENS ! ! " << brigand.getRecompense() << "$ a qui arretera " << brigand.getNom() << " mort ou vif ! !" << endl;
	brigand.seFaitEmprisonne(*this);
}