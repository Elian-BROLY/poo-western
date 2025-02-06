#include "Sherif.h"
#include "Brigand.h"

void Sherif::arret(Brigand& brigand)
{
	cout << "(" << nom << ") -- " << "** OYEZ OYEZ BRAVE GENS ! ! " << brigand.getRecompense() << " à qui arretera " << brigand.getNom() << " mort ou vif ! !" << endl;
}

Sherif::Sherif(string nom, string boissonFavorite, string role)
	:Humain(nom, boissonFavorite), role(role)
{
}

void Sherif::sePresente(Brigand& brigand)
{
	if (brigand = brigand.estEnPrison) {
		cout << "(" << nom << ") -- " << "Bonjour, je suis " << role << " " << nom << " et j'aime le " << boissonFavorite << endl;
		arret(brigand);
		brigand.seFaitEmprisonne();
	}
	else {
		cout << "(" << nom << ") -- " << "Bonjour, je suis " << role << " " << nom << " et j'aime le " << boissonFavorite << endl;
	}
}
