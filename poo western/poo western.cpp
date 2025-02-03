#include <iostream>
#include <string>
#include "Brigand.h"
#include "Dame.h"
#include "Cowboy.h"
using namespace std;


int main()
{
	Cowboy lucky("Lucky Luke", "coca-cola");
	Dame jenny("Jenny");
	Brigand joe("Joe");

	// 1. La rencontre ...
	lucky.sePresente();
	jenny.sePresente();

	// 2. Mais un brigand arrive ...
	joe.sePresente();
	joe.kidnappe(jenny);

	// 3. Heureusement le cowboy s’interpose ...
	lucky.sePresente();
	joe.sePresente();
	lucky.tire(joe);
	lucky.emprisonne(joe);
	lucky.libere(jenny);
}

