#include "Pompe.h"
#include "Arme.h"


Pompe::Pompe()
{
	attaque = 7;
	durabilite = 5;
	poids = 9;
	nom = "Pompe";
	Rarete::COMMUN;
}
std::string Pompe::to_string()
{
	std::string message = Pompe::to_string();

	message = ("Je suis un fusil à pompe");
	return message;
}
