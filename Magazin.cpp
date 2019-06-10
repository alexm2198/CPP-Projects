#include "Magazin.h"
#include"MasinaDeSpalat.h"
#include"Exceptii.h"

Magazin::Magazin(const int& nr_max){
	this->nr_max_produse = nr_max;
}

Magazin::~Magazin(){
	for (int i = 0; i < this->produse.size(); i++) {
		this->produse[i] = NULL;
		delete this->produse[i];
	}
}

bool Magazin::id_existent(const int& id) {
	for (int i = 0; i < this->produse.size(); i++) {
		if (this->produse[i]->get_id() == id)return true;
	}
	return false;
}

void Magazin::adaugaProdus(Produs* p) {
	if (p) {
		if (this->produse.size() + 1 <= this->nr_max_produse) {
			if (!id_existent(p->get_id())) {
				this->produse.push_back(p);
				cout << "Adaugare efectuata cu succes!" << endl;
			}
			else cout << "Adaugare esuata! ID deja existent!" << endl;
		}
		else throw MagazinPlinException();
	}
}

Produs* Magazin::cautaProdus(const int& id) {
	for (int i = 0; i < this->produse.size(); i++) {
		if (this->produse[i]->get_id() == id)return this->produse[i];
	}
	throw ProdusInexistentException();
}

void Magazin::eliminaProdus(const int& id) {
	Produs* to_erase = cautaProdus(id);
	for (int i = 0; i < this->produse.size(); i++) {
		if (to_erase == this->produse[i]) {
			this->produse[i] = NULL;
			delete this->produse[i];
			this->produse.erase(this->produse.begin() + i);
			cout << "Stergere efectuata cu succes!" << endl;
			return;
		}
	}
}

int Magazin::numaraMasiniDeSpalat() {
	int counter = 0;
	for (int i = 0; i < this->produse.size(); i++) {
		if (dynamic_cast<MasinaDeSpalat*>(this->produse[i]) != NULL)counter++;
	}
	return counter;
}

void Magazin::scrieProduse() {
	for (int i = 0; i < this->produse.size(); i++)cout << *this->produse[i] << endl;
}