#include "Dame.h"
#include "Cowboy.h"

void Dame::hurle()
{
		cout << "** " << getNom() << " hurle" << endl;
}

void Dame::remercie(Cowboy& heros)
{
	cout << "(" << nom << ")--" << "Merci " << heros.getNom() << ", je suis enfin " << etat << endl;
}

Dame::Dame(string nom, string boissonFavorite, string couleurRobe)
	:Humain(nom, boissonFavorite), couleurRobe(couleurRobe), etat("libre")
{
}

string Dame::getNom()
{
	return "Miss " + nom;
}

string Dame::getEtat()
{
	return etat;
}

void Dame::sePresente()
{
	cout << "(" << nom << ") -- Bonjour, je suis " << getNom() << " et j'ai une jolie robe " << couleurRobe << endl;
}

void Dame::seFaitKidnapper()
{
	hurle();
	etat = "kidnapper";
	cout << "(" << nom << ") -- " << "Au secours, je me fais " << etat << "!" << endl;
}

void Dame::seFaitLiberer(Cowboy& cowboy)
{
	etat = "libre";
	remercie(cowboy);
}

void Dame::changeDeRobe(string couleurRobe)
{
	this->couleurRobe = couleurRobe;
	cout << "(" << nom << ") -- Regardez ma nouvelles robe " << couleurRobe << " ! " << endl;
}
