#ifndef MAGAZIN_H
#define MAGAZIN_H
#endif
#include"Produs.h"
#include<vector>

class Magazin
{
private:
	vector<Produs*> produse;
	int nr_max_produse;
public:
	Magazin(const int&);
	void adaugaProdus(Produs*);
	void eliminaProdus(const int&);
	Produs* cautaProdus(const int&);
	bool id_existent(const int&);
	int numaraMasiniDeSpalat();
	void scrieProduse();
	~Magazin();
};

