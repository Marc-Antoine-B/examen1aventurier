#pragma once
#include <string>
#include "Factory.h"
class Arme
{
private:
	int valeur;

protected:
	int attaque;
	int durabilite;
	float poids;
	std::string nom;
	enum Rarete
	{
		COMMUN = 1,
		RARE = 2,
		EPIQUE = 3,
		LEGENDAIRE = 4
	};
	
public:
	Arme();
	~Arme();

	int getValeur();
	int getAtt();
	int getDura();
	float getPoids();
	std::string getNom();
	enum getRarete;

	virtual std::string to_string();
};

int main() {
	
	Arme MonArme1;

}

