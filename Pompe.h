#pragma once
#include "Arme.h"
class Pompe : public Arme
{
public:
	Pompe();
	Pompe(Arme);
	~Pompe();

	virtual std::string to_string();

};

