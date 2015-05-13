#include "ZooAnimal.h"
#include <iostream>
#include <vector>

int main() {

	std::vector<ZooAnimal> zoo;

	ZooAnimal a1("ptica", "Dodo", 2003, 5, 3, 15);
	ZooAnimal a2("macka", "Mickey", 2010, 7, 5, 10);
	ZooAnimal a3("pas", "Wolfy", 2009, 2, 4, 20);
	ZooAnimal a4("ptica", "Dodo", 2002, 15, 13, 115);

	a3.dodajMasu(120, 2015);
	a3.dodajMasu(100, 2014);

	zoo.reserve(10);
	zoo.push_back(a1);
	zoo.push_back(a2);

	::get_counter(); // non-member funkcija kojom dohvacamo staticku varijablu counter

	std::cout << std::boolalpha << "Zivotinja a1 == a2: " << (a1 == a2) << std::endl;

	std::cout << std::boolalpha << "Zivotinja a1 == a4: " << (a1 == a4) << std::endl;

	a1.ispisPodataka();
	a1 = a3;
	a1.ispisPodataka();


	++a1;
	a1++;

	--a2;	
	a2++;
}