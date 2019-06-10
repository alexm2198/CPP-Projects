#include "MasinaDeSpalat.h"

MasinaDeSpalat::MasinaDeSpalat(const int& id, const double& pret, const int& rpm, const string& energ) :Produs(id, "Masina De Spalat", pret) {
	if(rpm>0)this->rotatiiPeMinut = rpm;
	this->clasaEnergetica = energ;
}

MasinaDeSpalat::~MasinaDeSpalat(){}

void MasinaDeSpalat::info() {
	cout << "---------INFORMATII PRODUS---------" << endl;
	cout << "ID:" << id << endl;
	cout << nume << endl;
	cout << "RPM: " << rotatiiPeMinut << endl;
	cout << "Clasa Energetica: "<<clasaEnergetica<<endl;
	cout << "Pret: " << pret << endl;
}