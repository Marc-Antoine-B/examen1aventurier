#pragma once
#include "Arme.h"
#include <iostream>
#include <string>
#include <vector>
class Aventurier
{
private:
	int attaque;
	int force;
	int orDispo;

	std::vector<Arme*> vecArme;


protected:
	std::string nom;

public:
	Aventurier();
	~Aventurier();

	int getAtt();
	void acheterArme(Arme* arme);
	void ajouterArme(Arme* arme);
	void changerArme(Arme* arme); 
	void perdreOr(int orPerdu);


	

	virtual std::string to_string();

};

