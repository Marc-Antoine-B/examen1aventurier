#include "Factory.h"
#include "Pompe.h"
#include "Minigun.h"
#include "Sniper.h"
#include "Arme.h"

enum class TypeArme
{
	POMPE = 1,
	MINIGUN = 2,
	SNIPER = 3
};
inline int genererNb(int min, int max)
{
	return(rand() % (max - min + 1)) + min;
}

int nombre = genererNb(1, 3);

Arme* Factory::RandomArme()
{
	Arme* arme = nullptr;



	TypeArme typeA = (TypeArme)::nombre;
	if (typeA == TypeArme::POMPE)
		arme = new Pompe;
	else if (typeA == TypeArme::MINIGUN)
		arme = new Minigun;
	else if (typeA == TypeArme::SNIPER)
		arme = new Sniper;

}

