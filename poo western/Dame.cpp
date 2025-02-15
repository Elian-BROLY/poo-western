#include "Dame.h"

Dame::Dame(const string nom, const string boissonFavorite, const string couleurRobe)
	:Humain(nom, boissonFavorite), couleurRobe(couleurRobe), etat("libre")
{
}

string Dame::getNom() const
{
	return "Miss " + nom;
}

string Dame::getEtat() const
{
	return etat;
}

void Dame::sePresente() const
{
	cout << "(" << nom << ") -- Bonjour, je suis " << getNom() << " et j'ai une jolie robe " << couleurRobe << endl;
}

void Dame::changeDeRobe(const string couleurRobe)
{
	this->couleurRobe = couleurRobe;
	cout << "(" << nom << ") -- Regardez ma nouvelles robe " << couleurRobe << " ! " << endl;
}
