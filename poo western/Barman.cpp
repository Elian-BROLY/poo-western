#include "Barman.h"

string Barman::terminePhrase()
{
	return " mon gars.";
}

Barman::Barman(string nom, string boissonFavorite, string nomBar)
	:Humain(nom, boissonFavorite), nomBar(nomBar)
{
}

string Barman::getNomBar()
{
	return nomBar;
}

void Barman::parle(string texte)
{
	cout << "(" << nom << ") -- " << texte;
}

void Barman::sePresente()
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getNom() << " le barman du " << getNomBar() << " et j'aime le " << getBoissonFavorite() << terminePhrase() << endl;
}

void Barman::sert(Humain& client)
{
	cout << "(" << nom << ") -- " << "Tiens " << client.getNom() << ", un verre de " << client.getBoissonFavorite() << terminePhrase() << endl;
}
