#include "Cowboy.h"
#include "Dame.h"
#include "Brigand.h"
#include "Humain.h"

Cowboy::Cowboy(string nom, string boissonFavorite, string qualite, int popularite)
	:Humain(nom, boissonFavorite), qualite(qualite), popularite(popularite)
{
}

int Cowboy::getPopularite()
{
	return popularite;
}

void Cowboy::setPopularite(int _popularite)
{
	popularite = _popularite;
}

string Cowboy::getQualite()
{
	return qualite;
}

void Cowboy::setQualite(string _qualite)
{
	qualite = _qualite;
}

string Cowboy::getNom()
{
	return nom;
}

void Cowboy::sePresente()
{
	cout << "(" << nom << ") -- Bonjour, je suis le " << getQualite() << " " << getNom() << " et j'aime " << boissonFavorite << endl;
}

void Cowboy::incrementePopularite()
{
	popularite++;
}

void Cowboy::decrementPopularite()
{
	if (popularite > 0)
	{
		popularite--;
	}
}

void Cowboy::tire(Brigand& brigand)
{
	cout << "** le " << getQualite() << " " << getNom() << " tire sur " << brigand.getNom() << endl;
}

void Cowboy::emprisonne(Brigand& brigand)
{
	cout << "(" << nom << ") -- " << "Prends ca, rascal !" << endl;
	brigand.seFaitEmprisonne(*this);
}

void Cowboy::libere(Dame& dame)
{
	cout << "** Le " << getQualite() << " " << getNom() << " libere " << dame.getNom() << endl;
	dame.seFaitLiberer(*this);
}


