#pragma once
#include "Produs.h"
class Frigider : public Produs
{
private:
	int volum;
	bool areCongelator;
public:
	Frigider(const int&,const double&,const int&, const bool);
	void info();
	~Frigider();
};

