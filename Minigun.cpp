#include "Minigun.h"

Minigun::Minigun()
{
	attaque = 3;
	durabilite = 9;
	poids = 10;
	nom = "Minigun";
	Rarete::LEGENDAIRE;
}
std::string Minigun::to_string()
{
	std::string message = Minigun::to_string();

	message = ("Je suis un minigun");
	return message;
}