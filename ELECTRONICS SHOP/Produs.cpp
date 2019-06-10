#include "Produs.h"

Produs::Produs(const int& id,const string& nume,const double& pret){
	this->id = id;
	this->nume = nume;
	if (pret > 0.0)this->pret = pret;
}

Produs::~Produs(){}

int Produs::get_id() {
	return this->id;
}

ostream & operator<<(ostream &out, const Produs &p){
	out << p.id << " -- " << p.nume << " -- " << p.pret;
	return out;
}

void Produs::info() {
	cout << "---------INFORMATII PRODUS---------" << endl;
	cout << id << endl;
	cout << nume << endl;
	cout << pret << endl;
}