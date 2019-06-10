#include "ProdusFactory.h"
#include<iostream>
using namespace std;

ProdusFactory::ProdusFactory(){}

Produs* ProdusFactory:: citesteProdus() {
	char c;
	do {
		cout << "Tipul produsului:"<<endl;
		cout << "F - Frigider"<<endl;
		cout << "M - Masina de spalat"<<endl;
		cin >> c; c = toupper(c);
		switch (c) {
		case 'F':cout << "Ati selectat Frigider!" << endl; return citesteFrigider();
		case 'M':cout << "Ati selectat Masina De Spalat!" << endl; return citesteMasinaDeSpalat();
		default:cout << "Comanda invalida!"<<endl;
		}
	} while (1);
}

Frigider* ProdusFactory::citesteFrigider() {
	int id,vol;
	double price;
	bool cong;
	cout << "Id: "; cin >> id;
	cout << "Pret: "; cin >> price;
	cout << "Volum: "; cin >> vol;
	cout << "Congelator? (D/N): ";
	char answer; cin >> answer; answer = toupper(answer);
	switch (answer) {
		case'D':cong = true; break;
		case'N':cong = false; break;
		default:cout << "Comanda invalida!\n";
	}
	return new Frigider(id, price, vol, cong);
}

MasinaDeSpalat* ProdusFactory::citesteMasinaDeSpalat() {
	int id, rpm;
	double price;
	string energ;
	cout << "ID: "; cin >> id;
	cout << "Pret: "; cin >> price;
	cout << "RPM: "; cin >> rpm;
	cout << "Clasa energetica: "; cin >> energ;
	return new MasinaDeSpalat(id, price, rpm, energ);
}