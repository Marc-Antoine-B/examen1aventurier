#include "Sniper.h"

Sniper::Sniper()
{
	attaque = 10;
	durabilite = 6;
	poids = 4;
	nom = "Sniper";
	Rarete::EPIQUE;
}
std::string Sniper::to_string()
{
	std::string message = Sniper::to_string();

	message = ("Je suis un fusil de sniper");
	return message;
}