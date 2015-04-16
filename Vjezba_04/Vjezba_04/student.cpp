#include "headers.h"

void cStudent::set_basic(std::string i, std::string p, unsigned int mat_br) {
	this->ime = i;
	this->prezime = p;
	this->mb = mat_br;
}

void cStudent::set_pr() {
	int num;
	bool tmp;
	std::cout << "PRISUSTVO - Unesite broj vjezbe: ";
	std::cin >> num;

	std::cout << "Unesite true ako je student bio prisutan ili false ako nije: ";
	std::cin >> tmp;

	this->p[num] = tmp;
}

void cStudent::set_kol() {
	int num;
	std::cout << "IZLAZNI KOLOKVIJI - Unesite broj kolokvija: ";
	std::cin >> num;

	this->kol[num].unos_bodova();
}

void cStudent::set_apk() {
	int num;
	bool tmp;
	std::cout << "IZRADA APLIKACIJE: Unesite broj vjezbe: ";
	std::cin >> num;

	std::cout << "Unesite true ako je student izradio aplikaciju ili false ako nije: ";
	std::cin >> tmp;

	this->apk[num] = tmp;
}

void cStudent::get_pr() {
	for (int i = 1; i < 11; i++) {
		std::cout << "Prisustvo " << i << ": " << this->p[i];
		std::cout << std::endl;
	}
}

void cStudent::get_apk() {
	for (int i = 1; i < 11; i++) {
		std::cout << "Izrada " << i << ": " << this->apk[i];
		std::cout << std::endl;
	}
}


void cStudent::get_all() {
	std::cout << "Ime studenta: " << this->ime << std::endl;
	std::cout << "Prezime studenta: " << this->prezime << std::endl;
	std::cout << "MB studenta: " << this->mb << std::endl;

	for (int i = 1; i < 11; i++) {
		std::cout << "Kolokvij " << i << ": ";
		this->kol[i].print_bodove();
	}

	this->get_pr();
	this->get_apk();
}