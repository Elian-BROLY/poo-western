#include <iostream>
#include <string>
#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
using namespace std;


int main()
{
	//DEBUT DU TP 

	Humain luck("Lucky Luke", "coca-cola");

	cout << "Une histoire sur " << luck.getNom() << endl;
	luck.sePresente();
	luck.boit();

	cout << endl;

	Humain* joe = new Humain("Joe", "eau");
	cout << "Une histoire sur " << joe->getNom() << endl;
	joe->setBoissonFavorite("whisky");
	joe->sePresente();
	joe->boit();

	cout << endl;

	Dame jen("Jenny");
	jen.sePresente();

	cout << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << endl;

	// 1. LA RENCONTRE 

	Cowboy lucky("Lucky Luke", "whisky");
	Dame jenny("Jenny");

	lucky.sePresente();
	jenny.sePresente();

	cout << endl;
	
	// 2. ALLONS BOIRE UN COUP

	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();
}





/*
#include <iostream>
#include <string>
#include "Humain.h"
#include "Dame.h"
#include "Cowboy.h"
using namespace std;

void afficherMenu() {
	cout << "Menu de Gestion du Dialogue" << endl;
	cout << "1. Afficher le Dialogue" << endl;
	cout << "2. Faire Parler un Personnage" << endl;
	cout << "3. Presenter un Personnage" << endl;
	cout << "4. Faire Boire un Personnage" << endl;
	cout << "5. Changer de Boisson Favorite" << endl;
	cout << "6. Afficher tout les Personnages" << endl;
	cout << "7. Ajouter un Personnage" << endl;
	cout << "0. Quitter" << endl;
}
void sousMenu() {
	cout << "1. Humain" << endl;
	cout << "2. Dame" << endl;
	cout << "3. Cowboy" << endl;
}

void creationHumain(Humain* hum, int _num)
{
	string reponse;
	cout << "Ajout d'un Personnage(Humain)\n";
	cout << "Quel est le Nom du Personnage(Humain) : ";
	cin >> reponse;
	hum->setNom(reponse);
	cout << "Quelle est la boisson Favorite du Personnage";
	cin >> reponse;
	hum->setBoissonFavorite(reponse);
}
void creationDame(Dame* dam, int _num)
{
	string reponse;
	cout << "Ajout d'un Personnage(Dame)\n";
	cout << "Quel est le Nom du Personnage(Dame) : ";
	cin >> reponse;
	dam->setNom(reponse);
	cout << "Quelle est la boisson Favorite du Personnage";
	cin >> reponse;
	dam->setBoissonFavorite(reponse);
}
void creationCowboy(Cowboy* cow, int _num)
{
	string reponse;
	cout << "Ajout d'un Personnage(Cowboy)\n";
	cout << "Quel est la Nom du Personnage(Cowboy) : ";
	cin >> reponse;
	cow->setNom(reponse);
	cout << "Quelle est la boisson Favorite du Personnage";
	cin >> reponse;
	cow->setBoissonFavorite(reponse);
}


int main()
{
	int choixm, choixsm, cpthum = 0, cptdam = 0, cptcow = 0, choix;
	string bf, txt;
	Humain cptHumain[50];
	Dame cptDame[50];
	Cowboy cptCowboy[50];

	cpthum++;
	Humain* joe = new Humain("Joe", "eau");
	cptdam++;
	Dame jenny("Jenny");
	cptcow++;
	Cowboy lucky("Lucky Luke");

	do {
		afficherMenu();
		cout << "Veuillez faire un choix : ";
		cin >> choixm;
		cout << endl;
		switch (choixm) {

		case 1:
			break;

		case 2:
			sousMenu();
			cout << "Veuillez faire un choix : ";
			cin >> choixsm;
			cout << endl;
			switch (choixsm) {
			case 1:
				cout << "Veuillez selectionne l'Humain que vous-voulez Faire Parler : (De 1 a " << cpthum << ")" << " (";
				for (int i = 1; i <= cpthum; i++)
				{
					if (i < cpthum)
						cout << cptHumain[i].getNom() << ", ";
					else
						cout << cptHumain[i].getNom() << ") : ";
				}
				cin >> choix;
				cout << "Qu'est ce que " << cptHumain[choix].getNom() << " veut dire ? : ";
				cin >> txt;
				cptHumain[choix].parle(txt);
				break;
			case 2:
				cout << "Veuillez selectionne la Dame que vous-voulez Faire Parler : (De 1 a " << cptdam << ")" << " (";
				for (int i = 1; i <= cptdam; i++)
				{
					if (i < cptdam)
						cout << cptDame[i].getNom() << ", ";
					else
						cout << cptDame[i].getNom() << ") : ";
				}
				cin >> choix;
				cout << "Qu'est ce que " << cptDame[choix].getNom() << " veut dire ? : ";
				cin >> txt;
				cptDame[choix].parle(txt);
				break;
			case 3:
				cout << "Veuillez selectionne le Cowboy que vous-voulez Faire Parler : (De 1 a " << cptcow << ")" << " (";
				for (int i = 1; i <= cptcow; i++)
				{
					if (i < cptcow)
						cout << cptCowboy[i].getNom() << ", ";
					else
						cout << cptCowboy[i].getNom() << ") : ";
				}
				cin >> choix;
				cout << "Qu'est ce que " << cptCowboy[choix].getNom() << " veut dire ? : ";
				cin >> txt;
				cptCowboy[choix].parle(txt);
				break;
			} break;

		case 3:
			sousMenu();
			cout << "Veuillez faire un choix : ";
			cin >> choixsm;
			cout << endl;
			switch (choixsm) {
			case 1:
				cout << "Veuillez selectionne l'Humain qui doit Se Presenter : (De 1 a " << cpthum << ")" << " (";
				for (int i = 1; i <= cpthum; i++)
				{
					if (i < cpthum)
						cout << cptHumain[i].getNom() << ", ";
					else
						cout << cptHumain[i].getNom() << ") : ";
				}
				cin >> choix;
				cptHumain[choix].sePresente();
				break;
			case 2:
				cout << "Veuillez selectionne la Dame qui doit Se Presenter : (De 1 a " << cptdam << ")" << " (";
				for (int i = 1; i <= cptdam; i++)
				{
					if (i < cptdam)
						cout << cptDame[i].getNom() << ", ";
					else
						cout << cptDame[i].getNom() << ") : ";
				}
				cin >> choix;
				cptDame[choix].sePresente();
				break;
			case 3:
				cout << "Veuillez selectionne le Cowboy qui doit Se Presenter : (De 1 a " << cptcow << ")" << " (";
				for (int i = 1; i <= cptcow; i++)
				{
					if (i < cptcow)
						cout << cptCowboy[i].getNom() << ", ";
					else
						cout << cptCowboy[i].getNom() << ") : ";
				}
				cin >> choix;
				cptCowboy[choix].sePresente();
				break;
			} break;

		case 4:
			sousMenu();
			cout << "Veuillez faire un choix : ";
			cin >> choixsm;
			cout << endl;
			switch (choixsm) {
			case 1:
				cout << "Veuillez selectionne l'Humain que vous-voulez Faire Boire: (De 1 a " << cpthum << ")" << " (";
				for (int i = 1; i <= cpthum; i++)
				{
					if (i < cpthum)
						cout << cptHumain[i].getNom() << ", ";
					else
						cout << cptHumain[i].getNom() << ") : ";
				}
				cin >> choix;
				cptHumain[choix].boit();
				break;
			case 2:
				cout << "Veuillez selectionne la Dame que vous-voulez Faire Boire : (De 1 a " << cptdam << ")" << " (";
				for (int i = 1; i <= cptdam; i++)
				{
					if (i < cptdam)
						cout << cptDame[i].getNom() << ", ";
					else
						cout << cptDame[i].getNom() << ") : ";
				}
				cin >> choix;
				cptDame[choix].boit();
				break;
			case 3:
				cout << "Veuillez selectionne le Cowboy que vous-voulez Faire Boire : (De 1 a " << cptcow << ")" << " (";
				for (int i = 1; i <= cptcow; i++)
				{
					if (i < cptcow)
						cout << cptCowboy[i].getNom() << ", ";
					else
						cout << cptCowboy[i].getNom() << ") : ";
				}
				cin >> choix;
				cptCowboy[choix].boit();
				break;
			} break;

		case 5:
			sousMenu();
			cout << "Veuillez faire un choix : ";
			cin >> choixsm;
			cout << endl;
			switch (choixsm) {
			case 1:
				cout << "Veuillez selectionne l'Humain ou vous-voulez Changer sa Boisson Favorite : (De 1 a " << cpthum << ")" << " (";
				for (int i = 1; i <= cpthum; i++)
				{
					if (i < cpthum)
						cout << cptHumain[i].getNom() << ", ";
					else
						cout << cptHumain[i].getNom() << ") : ";
				}
				cin >> choix;
				cout << "Quelle est la nouvelle Boisson Favorite de " << cptHumain[choix].getNom() << " ? : ";
				cin >> bf;
				cptHumain[choix].setBoissonFavorite(bf);
				break;
			case 2:
				cout << "Veuillez selectionne la Dame ou vous-voulez Changer sa Boisson Favorite : (De 1 a " << cptdam << ")" << " (";
				for (int i = 1; i <= cptdam; i++)
				{
					if (i < cptdam)
						cout << cptDame[i].getNom() << ", ";
					else
						cout << cptDame[i].getNom() << ") : ";
				}
				cin >> choix;
				cout << "Quelle est la nouvelle Boisson Favorite de " << cptDame[choix].getNom() << " ? : ";
				cin >> bf;
				cptDame[choix].setBoissonFavorite(bf);
				break;
			case 3:
				cout << "Veuillez selectionne le Cowboy ou vous-voulez Changer sa Boisson Favorite : (De 1 a " << cptcow << ")" << " (";
				for (int i = 1; i <= cptcow; i++)
				{
					if (i < cptcow)
						cout << cptCowboy[i].getNom() << ", ";
					else
						cout << cptCowboy[i].getNom() << ") : ";
				}
				cin >> choix;
				cout << "Quelle est la nouvelle Boisson Favorite de " << cptCowboy[choix].getNom() << " ? : ";
				cin >> bf;
				cptCowboy[choix].setBoissonFavorite(bf);
				break;
			} break;

		case 6:
			cout << "Les Humains sont : ";
			for (int i = 1; i <= cpthum; i++)
			{
				if (i < cpthum)
					cout << cptHumain[i].getNom() << ", ";
				else
					cout << cptHumain[i].getNom() << endl;
			}
			cout << "Les Dames sont : ";
			for (int i = 1; i <= cptdam; i++)
			{
				if (i < cptdam)
					cout << cptDame[i].getNom() << ", ";
				else
					cout << cptDame[i].getNom() << endl;
			}
			cout << "Les Cowboys sont : ";
			for (int i = 1; i <= cptcow; i++)
			{
				if (i < cptcow)
					cout << cptCowboy[i].getNom() << ", ";
				else
					cout << cptCowboy[i].getNom() << endl;
			}
			break;

		case 7:
			sousMenu();
			cout << "Veuillez faire un choix : ";
			cin >> choixsm;
			cout << endl;
			switch (choixsm) {
			case 1:
				cpthum++;
				creationHumain(&cptHumain[cpthum], cpthum);
				cout << endl;
				break;

			case 2:
				cptdam++;
				creationDame(&cptDame[cptdam], cptdam);
				cout << endl;
				break;

			case 3:
				cptcow++;
				creationCowboy(&cptCowboy[cptcow], cptcow);
				cout << endl;
				break;
			} break;

		case 0:
			cout << "Vous avez choisi de quitter." << endl;
			break;

		default:
			cout << "Choix invalide. Veuillez choisir a nouveau." << endl << endl;
		}
	} while (choixm != 0);
}
*/