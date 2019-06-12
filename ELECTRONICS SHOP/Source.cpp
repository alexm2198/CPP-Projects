#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include"Produs.h"
#include"MasinaDeSpalat.h"
#include"Magazin.h"
#include"ProdusFactory.h"
#include"Exceptii.h"
using namespace std;

int main() {
	cout << "-----------PROIECT2 TELACAD MATEI ALEXANDRU---------------" << endl;
	cout << "------SIMULAREA UNUI MAGAZIN DE ELECTROCASNICE------------" << endl;
	cout << "Elemente de programare folosite in cadrul acestui program prototip:" << endl;
	cout << "Clase, Dynamic_Cast, Exceptii, Factory Design Pattern, STL" << endl << endl;
	Magazin shop(4);
	ProdusFactory* f=new ProdusFactory;
	char op;
		do {
			cout << "A - Adauga produs" << endl;
			cout << "E - Elimina produs" << endl;
			cout << "C - Cauta produs" << endl;
			cout << "N - Numara masini de spalat" << endl;
			cout << "L - Scrie produse" << endl;
			cout << "Q - Exit!" << endl;
			cin >> op; op = toupper(op);
			try {
				switch (op) {
				case 'A':shop.adaugaProdus(f->citesteProdus());
					 break;
				case 'E':cout << "Introduceti ID-ul produsului de eliminat: ";
					 int id; cin >> id;
					 shop.eliminaProdus(id);
					 break;
				case 'C':cout << "Introduceti ID-ul produsului cautat: "; cin >> id;
					 if (shop.cautaProdus(id))shop.cautaProdus(id)->info();
					 break;
				case 'N':cout <<"In magazin sunt "<< shop.numaraMasiniDeSpalat() << " masini de spalat!" << endl;
					 break;
				case 'L':shop.scrieProduse();
					 break;
				case 'Q':cout << "La revedere!" << endl;
					 break;
				default:cout << "Comanda invalida!" << endl;
				}
			}
			catch (MagazinPlinException& e) {
				cout << "Magazin plin! Nu mai puteti adauga produse!" << endl;
			}
			catch (ProdusInexistentException& e) {
				cout << "Produs inexistent!" << endl;
			}
		} while (op != 'Q');
	delete f;
	return 0;
}
