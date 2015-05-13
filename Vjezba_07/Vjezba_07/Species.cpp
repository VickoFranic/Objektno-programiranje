#include "Species.h"

namespace OSS {

	/********************** SISAVCI **********************/
	Tiger::Tiger(std::string ime, int period, int temp, int kol, int brObroka) : Mammal(ime, period, kol, brObroka) {
		this->temperatura = temp;	// temperatura je zadana kao clan klase
	}
	
	void Tiger::print(std::ostream& out) const {
		ZooAnimal::print(out);
		out << "Nacin razmnozavanja: " << this->razmnozavanje << std::endl;
		out << "Gestacijski period: " << this->gestPeriod << std::endl;
		out << "Temperatura tijela: " << this->temperatura << std::endl;
	}


	Monkey::Monkey(std::string ime, int period, int temp, int kol, int brObroka) : Mammal(ime, period, kol, brObroka) {
		this->temperatura = temp;
	}

	void Monkey::print(std::ostream& out) const {
		ZooAnimal::print(out);
		out << "Nacin razmnozavanja: " << this->razmnozavanje << std::endl;
		out << "Gestacijski period: " << this->gestPeriod << std::endl;
		out << "Temperatura tijela: " << this->temperatura << std::endl;
	}



	Elephant::Elephant(std::string ime, int period, int temp, int kol, int brObroka) : Mammal(ime, period, kol, brObroka) {
		this->temperatura = temp;
	}

	void Elephant::print(std::ostream& out) const {
		ZooAnimal::print(out);
		out << "Nacin razmnozavanja: " << this->razmnozavanje << std::endl;
		out << "Gestacijski period: " << this->gestPeriod << std::endl;
		out << "Temperatura tijela: " << this->temperatura << std::endl;
	}

	GriffonVulture::GriffonVulture(std::string ime, int vi, int temp, int kol, int brObroka) : Bird(ime, vi, temp, kol, brObroka) {};	// nasljeduje konstruktor

	Owl::Owl(std::string ime, int vi, int temp, int kol, int brObroka) : Bird(ime, vi, temp, kol, brObroka) {};

	Crocodile::Crocodile(std::string ime, int ink, int tempOkoline, int kol, int brObroka) : Reptile(ime, ink, tempOkoline, kol, brObroka) {};

	Turtle::Turtle(std::string ime, int ink, int tempOkoline, int kol, int brObroka) : Reptile(ime, ink, tempOkoline, kol, brObroka) {};
}