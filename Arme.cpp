#include "Arme.h"
#include <string>
#include <iostream>

std::string Arme::to_string()
{
	std::string message = Arme::to_string();

	std::string message = "VALEUR : --------" + valeur + "ATTAQUE : -------" + attaque + " DURABILITÉ : -------- " + durabilite + "POIDS : -------- "+poids + "NOM : -------- "+nom;
	return message
}
int Arme::getValeur()
{
	return valeur;
}
int Arme::getAtt()
{
	return attaque;
}
int Arme::getDura()
{
	return durabilite;
}
float Arme::getPoids()
{
	return poids;
}
std::string Arme::getNom()
{
	return nom;
}







