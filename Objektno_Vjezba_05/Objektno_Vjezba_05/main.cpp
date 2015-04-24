#include "ZooAnimal.h"
#include <vector>

int main() {

	std::vector<ZooAnimal> zoo;

	ZooAnimal a1("ptica", "Dodo", 2003, 5, 3, 15);
	ZooAnimal a2("macka", "Mickey", 2010, 7, 5, 10);
	ZooAnimal a3("pas", "Wolfy", 2009, 2, 4, 20);

	zoo.push_back(a1);
	zoo.push_back(a2);
	zoo.push_back(a3);

	zoo.at(2).ispisPodataka();

	zoo.at(2).dodajMasu(120, 2015);
	zoo.at(2).dodajMasu(100, 2014);

	zoo.at(2).provjeriMasu();

	zoo.at(2).ispisPodataka();
}