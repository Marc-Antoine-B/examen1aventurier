#include "Aventurier.h"
#include "Arme.h"
int Aventurier::getAtt()
{
	return attaque = 1 + Arme::getAtt;
}

std::string Aventurier::to_string()
{
	std::string message = Aventurier::to_string();

	std::string message = "Nom nom : --------" + nom + "mon attaque : ------- " + attaque + " mon arme actuelle : -------- " +vecArme;
	return message;
}

Aventurier::Aventurier()
{
	attaque : 1;
	force : 30;
	orDispo : 5000;
}
void perdreOr(int orPerdu)
{
	orDispo - orPerdu = orDispo;
}
