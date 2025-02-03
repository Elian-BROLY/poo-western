#include "Brigand.h"
#include "Dame.h"
#include "Cowboy.h"

Brigand::Brigand(const string nom, const string boissonFavorite, const string comportement)
	:Humain(nom, boissonFavorite)
{
}

string Brigand::getComportement()
{
	return comportement;
}

int Brigand::getNbDamesEnlevees()
{
	return nbDamesEnlevees;
}

int Brigand::getRecompense()
{
	return recompense;
}

void Brigand::sePresente()
{
	cout << "(" << nom << ")--" << "Bonjour, je suis " << getNom() << " le " << getComportement() << " et j'aime le " << getBoissonFavorite() << "." << endl;
}

void Brigand::kidnappe(Dame& dame)
{
	dame.seFaitKidnapper();
	nbDamesEnlevees++;
	augmenteRecompense();
	cout << "(" << nom << ")--" << "Ah ah ! " << dame.getNom() << ", tu es mienne desormais !" << endl;
}

void Brigand::seFaitEmprisonne(Cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << nom << ")--" << "Damned, je suis fait ! " << cowboy.getNom() << ", tu m'as eu !" << endl;
	}
}

void Brigand::augmenteRecompense(const int prix)
{
	if (prix > 0)
		this->recompense += prix;
}

void Brigand::diminueRecompense(const int prix)
{
	if (prix > 0 && prix <= recompense)
		this->recompense -= prix;
}

bool Brigand::estEnPrison()
{
	return enPrison;
}
