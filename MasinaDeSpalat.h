#pragma once
#include "Produs.h"
class MasinaDeSpalat : public Produs
{
private:
	int rotatiiPeMinut;
	string clasaEnergetica;
public:
	MasinaDeSpalat(const int&,const double&,const int&,const string&);
	~MasinaDeSpalat();
	void info();
};

