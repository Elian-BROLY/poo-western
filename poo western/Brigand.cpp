#include "Brigand.h"
#include "Dame.h"
#include "Cowboy.h"

Brigand::Brigand(string nom /*= ""*/, string boissonFavorite /*= "tord-boyaux"*/, string comportement /*= "mechant"*/)
	:Humain(nom, boissonFavorite), comportement(comportement), nbDamesEnlevees(0), recompense(0), enPrison(false)
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
	if (nbDamesEnlevees == 0){
		cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le " << getComportement() << " et j'aime le " << getBoissonFavorite() << "." << endl;
	}
	else
	{
		cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le " << getComportement() << " et j'aime le " << getBoissonFavorite() << "." << endl;
		cout << "(" << nom << ") -- " << "J'ai l'air " << getComportement() << " et j'ai deja kidnappe " << nbDamesEnlevees << " dame(s) !" << endl;
		cout << "(" << nom << ") -- " << "Ma tete est mise a prix a " << recompense << "$" << endl;
	}
}

void Brigand::kidnappe(Dame& dame)
{
	if (!estEnPrison())
	{
		dame.seFaitKidnapper();
		nbDamesEnlevees++;
		augmenteRecompense();
		cout << "(" << nom << ") -- " << "Ah ah ! " << dame.getNom() << ", tu es mienne desormais !" << endl;
	}
}

void Brigand::seFaitEmprisonne(Cowboy& cowboy)
{
	if (!estEnPrison())
	{
		enPrison = true;
		cout << "(" << nom << ") -- " << "Damned, je suis fait ! " << cowboy.getNom() << ", tu m'as eu !" << endl;
	}
}

void Brigand::augmenteRecompense(int prix)
{
	if (prix > 0)
		this->recompense += prix;
}

void Brigand::diminueRecompense(int prix)
{
	if (prix > 0 && prix <= recompense)
		this->recompense -= prix;
}

bool Brigand::estEnPrison()
{
	return enPrison;
}
