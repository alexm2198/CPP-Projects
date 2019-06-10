#include "Frigider.h"

Frigider::Frigider(const int& id, const double& pret,const int& vol, const bool cong) :Produs(id, "Frigider", pret) {
	if(vol>0)this->volum = vol;
	this->areCongelator = cong;
}

Frigider::~Frigider(){}

void Frigider::info() {
	cout << "---------INFORMATII PRODUS---------" << endl;
	cout <<"ID:"<< id << endl;
	cout << nume << endl;
	cout << "Volum: " << volum << endl;
	cout << "Congelator: ";
	if (areCongelator)cout << "DA" << endl;
	else cout << "NU" << endl;
	cout <<"Pret: "<< pret << endl;
}