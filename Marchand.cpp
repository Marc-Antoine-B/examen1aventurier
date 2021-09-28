#include "Marchand.h"
#include "Arme.h"
#include "Aventurier.h"
#include "Pompe.h"
#include "Sniper.h"
#include "Minigun.h"
#include "Factory.h"
#include <string>
#include <iostream>
#include <ctime>
#include <conio.h>
#include <stdlib.h>
#include <chrono>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_UN 49
#define KEY_DEUX 50
#define KEY_TROIS 51
#define KEY_QUATRE 52
#define KEY_Q 113

enum class MENU
{
	MENU_PRINCIPAL = 1,
	MENU_STATUT = 2,
	MENU_MARCHE_ARME = 3,
	MENU_ACHAT = 4,
	MENU_EQUIPEE= 5,
};
enum class HUMEUR
{
	CONTENT = 1,
	MARABOUT = 2,
	COLÉRIQUE = 3,
};
inline int humeur(int min, int max)
{
	return(rand() % (max - min + 1)) + min;
}

int nombre = humeur(1, 3);

inline int nbPrix(int min, int max)
{
	return(rand() % (max - min + 1)) + min;
}

int Prixnet = nbPrix(2000, 3000);

Marchand::Marchand()
{
	monAventurier = new Aventurier();
	menuAffiche = MENU::MENU_PRINCIPAL;
}
Marchand::~Marchand()
{
	delete monAventurier;
}

void Marchand::handleEvents(float deltaTime)
{
	if (menuAffiche == MENU::MENU_PRINCIPAL)
	{
		switch (_getch())
		{
		case KEY_UP:
			std::cout << "Up" << std::endl << "Temps" << std::endl;
			break;
		case KEY_UN:
			changerMenu(MENU::MENU_STATUT);
			break;
		case KEY_DEUX:
			changerMenu(MENU::MENU_MARCHE_ARME);
			break;
		case KEY_TROIS:
			changerMenu(MENU::MENU_ACHAT);
			break;
		case KEY_QUATRE:
			changerMenu(MENU::MENU_EQUIPEE);
			break;
		case KEY_Q:
			std::cout << "Veuillez entrer un caractère valide" << std::endl;
			break;
		}
	}
	else if (menuAffiche == MENU::MENU_MARCHE_ARME)
	{
		srand(time(NULL));
		Arme* Arme1 = Factory::RandomArme();
		std::cout << Arme1->to_string();


		srand(time(NULL));
		Arme* Arme2 = Factory::RandomArme();
		std::cout << Arme2->to_string();


		srand(time(NULL));
		Arme* Arme3 = Factory::RandomArme();
		std::cout << Arme3->to_string();
	}
	else if (menuAffiche == MENU::MENU_ACHAT)
	{

		int prix;
		std::cout << "CHOISSISEZ QUEL ARME VOUS VOULEZ ACHETER" << std::endl;
		std::cout << "Cliquer sur 1 pour acheter" << std::endl;
		Arme* Arme1 = Factory::RandomArme();
		std::cout << Arme1->to_string();
		std::cout << "Cliquer sur 2 pour acheter" << std::endl;
		Arme* Arme2 = Factory::RandomArme();
		std::cout << Arme1->to_string();
		std::cout << "Cliquer sur 3 pour acheter" << std::endl;
		Arme* Arme3 = Factory::RandomArme();
		std::cout << Arme1->to_string();

		Aventurier a;

		if (kbhit() != 0) {
			switch (_getch())
			{
			case KEY_UN:
				if (nombre == 1)
				{
					prix = Prixnet;
					a.acheterArme(Arme *Arme1);
					a.ajouterArme(Arme* Arme1);
					a.perdreOr(prix);
					std::cout << "Vous avez acheté l'arme." << std::endl;
				}
				else if (nombre == 2)
				{
					std::cout << "Je suis pas d'humeur aujourd'hui, 150$ de plus sur ton achat" << std::endl;
					prix = Prixnet + 150;
					a.acheterArme(Arme* Arme1);
					a.ajouterArme(Arme* Arme1);
					a.perdreOr(prix);
					std::cout << "Vous avez acheté l'arme." << std::endl;
				}
				else
				{
					std::cout << "Je suis pas content aujourd'hui, 300$ de plus sur ton achat" << std::endl;
					prix = Prixnet + 300;
					a.acheterArme(Arme* Arme1);
					a.ajouterArme(Arme* Arme1);
					a.perdreOr(prix);
					std::cout << "Vous avez acheté l'arme." << std::endl;
				}
				break;
			case KEY_DEUX:
				if (nombre == 1)
				{
					prix = Prixnet;
					a.acheterArme(Arme* Arme2);
					a.ajouterArme(Arme* Arme2);
					a.perdreOr(prix);
					std::cout << "Vous avez acheté l'arme." << std::endl;
				}
				else if (nombre == 2)
				{
					std::cout << "Je suis pas d'humeur aujourd'hui, 150$ de plus sur ton achat" << std::endl;
					prix = Prixnet + 150;
					a.acheterArme(Arme* Arme2);
					a.ajouterArme(Arme* Arme2);
					a.perdreOr(prix);
					std::cout << "Vous avez acheté l'arme." << std::endl;
				}
				else
				{
					std::cout << "Je suis pas content aujourd'hui, 300$ de plus sur ton achat" << std::endl;
					prix = Prixnet + 300;
					a.acheterArme(Arme* Arme2);
					a.ajouterArme(Arme* Arme2);
					a.perdreOr(prix);
					std::cout << "Vous avez acheté l'arme." << std::endl;
				}
				break;
			case KEY_TROIS:
				if (nombre == 1)
				{
					prix = Prixnet;
					a.acheterArme(Arme* Arme3);
					a.ajouterArme(Arme* Arme3);
					a.perdreOr(prix);
					std::cout << "Vous avez acheté l'arme." << std::endl;
				}
				else if (nombre == 2)
				{
					std::cout << "Je suis pas d'humeur aujourd'hui, 150$ de plus sur ton achat" << std::endl;
					prix = Prixnet + 150;
					a.acheterArme(Arme* Arme3);
					a.ajouterArme(Arme* Arme3);
					a.perdreOr(prix);
					std::cout << "Vous avez acheté l'arme." << std::endl;
				}
				else
				{
					std::cout << "Je suis pas content aujourd'hui, 300$ de plus sur ton achat" << std::endl;
					prix = Prixnet + 300;
					a.acheterArme(Arme* Arme3);
					a.ajouterArme(Arme* Arme3);
					a.perdreOr(prix);
					std::cout << "Vous avez acheté l'arme." << std::endl;
				}
				break;
				
		}


	}
	else if (menuAffiche == MENU::MENU_EQUIPEE)
	{
			std::cout << "Changer votre arme." << std::endl;
			std::cout << "Cliquer sur 1 pour échanger" << std::endl;
			std::cout << "Cliquer sur 2 pour échanger" << std::endl;
			std::cout << "Cliquer sur 3 pour échanger" << std::endl;
			if (kbhit() != 0) {
				switch (_getch())
				{
				case KEY_UN:
					a.changerArme(Arme* Arme1);
					break;
				case KEY_DEUX:
					a.changerArme(Arme* Arme2);
					break;
				case KEY_TROIS:
					a.changerArme(Arme* Arme3);
					break;
	}
		else
			afficherMenu(MENU::MENU_PRINCIPAL);
		
		delete Arme1;
		delete Arme2;
		delete Arme3;

}



void afficherMenu(MENU menuAffiche)
{
	std::vector<Arme*>vecArme = monAventurier->getAtt();
	switch (menuAffiche)
	{
	case MENU::MENU_PRINCIPAL:
		std::cout << "BIENVENUE JEUNE AVENTURIER, JE SUIS MALUS LE MARCHAND, QUE PUIS-JE POUR TOI" << std::endl;
		std::cout << "_______________________________" << std::endl;
		std::cout << "1 - AFFICHER VOTRE STATUT" << std::endl;
		std::cout << "2 - VOIR LES ARMES DISPONIBLES AU MARCHÉ" << std::endl;
		std::cout << "3 - ACHETER UNE ARME" << std::endl;
		std::cout << "4 - EQUIPER UNE ARME" << std::endl;
		break;

	case MENU::MENU_STATUT:
		std::cout << monAventurier->to_string();
		std::cout << "VOICI VOTRE STATUT MONSIEUR" << std::endl;
		break;

	case MENU::MENU_MARCHE_ARME:
		std::cout << "VOICI MES ARMES !" << std::endl;
		break;

	case MENU::MENU_ACHAT:
		for (int i = 0; i < vecArme.size(); i++)
		{
			std::cout << vecArme[i]->to_string() << " ";
		}
		std::cout << "Acheter une arme." << std::endl;
		break;
	}
}
