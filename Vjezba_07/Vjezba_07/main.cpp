#include "ZooAnimal.h"
#include "Species.h"
#include <iostream>
#include <vector>
#include <memory>

void print(std::vector<OSS::ZooAnimal*>& v) {
	int hrana = 0, tmp;

	for (int i = 0; i < v.size(); i++) {
		std::cout << *v.at(i) << std::endl;
		hrana += v.at(i)->Food();
	}

	std::cout << "KOLICINA HRANE KOJU JE POTREBNO OSIGURATI U JEDNOM DANU : " << hrana << std::endl;
}

int main() {

	std::vector<OSS::ZooAnimal*> zoo;	// Object slicing
	zoo.reserve(10);
	
	OSS::Tiger t("Tiggy", 6, 38, 2, 3);
	OSS::Elephant e("Dumbo", 9, 40, 5, 3);
	OSS::Monkey m("Kong", 5, 37, 1, 3);
	OSS::GriffonVulture gv("Vully", 3, 39, 1, 2);
	OSS::Owl o("Owie", 6, 26, 1, 3);
	OSS::Crocodile c("Rocky", 6, 33, 4, 2);
	OSS::Turtle tr("Shelly", 5, 25, 1, 3);


	zoo.push_back(&t);
	zoo.push_back(&e);
	zoo.push_back(&m);
	zoo.push_back(&gv);
	zoo.push_back(&o);
	zoo.push_back(&c);
	zoo.push_back(&tr);

	print(zoo);
}