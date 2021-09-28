#pragma once
#include "Arme.h"
class Minigun : public Arme
{
public:
	Minigun();
	Minigun(Arme);
	~Minigun();

	virtual std::string to_string();

};

