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

	Cowboy lucky("Lucky Luke");
	Dame jenny("Jenny");

	lucky.sePresente();
	jenny.sePresente();

	cout << endl;

	// 2. ALLONS BOIRE UN COUP

	jenny.changeDeRobe("verte");
	lucky.boit();
	jenny.boit();
}

