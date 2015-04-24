#include "ZooAnimal.h"
#include <iostream>
#include <vector>

void checkAnimals(std::vector<ZooAnimal>& v) {
	int cnt = 0;
	while (cnt < v.size()) {
		v.at(cnt).ispisPodataka();
		v.at(cnt).provjeriMasu();
		v.at(cnt).ispisPodataka();

		std::cout << std::endl;
		cnt++;
	}
}

int main() {

	std::vector<ZooAnimal> zoo;

	ZooAnimal a1("ptica", "Dodo", 2003, 5, 3, 15);
	ZooAnimal a2("macka", "Mickey", 2010, 7, 5, 10);
	ZooAnimal a3("pas", "Wolfy", 2009, 2, 4, 20);

	a3.dodajMasu(120, 2015);
	a3.dodajMasu(100, 2014);

	zoo.reserve(10);
	zoo.push_back(a1);
	zoo.push_back(a2);
	zoo.push_back(a3);

	checkAnimals(zoo); // saljemo referencu na vektor, nece se pozvati copy konstruktor

}