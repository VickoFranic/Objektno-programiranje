#include "headers.h"

void cKolokvij::unos_bodova() {
	std::cout << "Unesite bodove za pojedini zadatak (5):" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cin >> this->bodovi[i];
}

void cKolokvij::print_bodove() {
	for (int i = 0; i < 5; i++)
		std::cout << this->bodovi[i] << " ";

	std::cout << std::endl;
}