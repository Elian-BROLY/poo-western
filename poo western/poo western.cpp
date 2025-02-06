#include <iostream>
#include <string>
#include "Brigand.h"
#include "Dame.h"
#include "Cowboy.h"
#include "Barman.h"
#include "Sherif.h"
using namespace std;

void presentezVous(Humain& humain) 
	{
		humain.sePresente();
	}

int main()
{
	Cowboy lucky("Lucky Luke", "coca-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");
	Barman robert("Robert");
	Sherif clint("Clint");

	// 1. Les présentations des personnages de l'histoire
	presentezVous(lucky);
	presentezVous(jenny);
	presentezVous(joe);
	presentezVous(robert);

	cout << endl;

	// 2. Robert sert les clients
	robert.sert(lucky);
	robert.sert(jenny);
	robert.sert(joe);

	cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

	// 3. Le Sherif arrive
	presentezVous(lucky);
	presentezVous(jenny);
	presentezVous(joe);
	presentezVous(robert);
	presentezVous(clint);
}

