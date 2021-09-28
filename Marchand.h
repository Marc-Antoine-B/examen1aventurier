#pragma once
#include "Arme.h"

class Marchand
{
private:
	void afficherMenu(MENU menu);
	void changerMenu(MENU nouvmenu);
	virtual void handleEvents(float deltaTime) = 0;


	MENU menuAffiche;
	Aventurier* monAventurier = monAventurier;
};

