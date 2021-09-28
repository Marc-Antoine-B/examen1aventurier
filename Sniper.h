#pragma once
#include "Arme.h"
class Sniper : public Arme
{
public:
	Sniper();
	Sniper(Arme);
	~Sniper();

	virtual std::string to_string();

};

