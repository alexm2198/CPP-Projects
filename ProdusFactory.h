#pragma once
#include "Produs.h"
#include "Frigider.h"
#include "MasinaDeSpalat.h"

class ProdusFactory
{
private:
	Frigider* citesteFrigider();
	MasinaDeSpalat* citesteMasinaDeSpalat();
public:
	ProdusFactory();
	Produs* citesteProdus();
};

