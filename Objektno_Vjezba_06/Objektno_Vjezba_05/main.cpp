#include "ZooAnimal.h"
#include <iostream>
#include <vector>

int main() {

	std::vector<ZooAnimal> zoo;

	ZooAnimal a1("ptica", "Dodo", 2003, 5, 3, 15);
	ZooAnimal a2("macka", "Mickey", 2010, 7, 5, 10);
	ZooAnimal a3("pas", "Wolfy", 2009, 2, 4, 20);

	a3.dodajMasu(120, 2015);
	a3.dodajMasu(100, 2014);


	zoo.reserve(10);
	zoo.push_back(a1); // copy konstruktor
	zoo.push_back(a2); // copy konstruktor
	zoo.push_back(a3); // copy konstruktor

	get_counter(); // non-member funkcija kojom dohvacamo staticku varijablu counter

	zoo.pop_back();

}