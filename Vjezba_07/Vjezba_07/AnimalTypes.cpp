#include "AnimalTypes.h"

namespace OSS {

	Mammal::Mammal(std::string ime, int gp, int kol, int brObroka) : ZooAnimal(ime, "Sisavac", brObroka) {
		this->razmnozavanje = "Radanje";
		this->gestPeriod = gp;
		this->kolHrane = kol;
	}

	Bird::Bird(std::string ime, int vi, int temp, int brObroka) : ZooAnimal(ime, "Ptica", brObroka) {
		this->razmnozavanje = "Polaganje jaja";
		this->inkubacija = vi;
		this->temperatura = temp;
	}

	std::ostream& operator<<(std::ostream& os, const Bird& animal) {
		os << "Ime zivotinje: " << animal.getIme() << std::endl;
		os << "Vrsta zivotinje: " << animal.getVrsta() << std::endl;
		os << "Nacin razmnozavanja: " << animal.razmnozavanje << std::endl;
		os << "Vrijeme inkubacije: " << animal.inkubacija << std::endl;
		os << "Temperatura tijela: " << animal.temperatura << std::endl;

		return os;
	}

	Reptile::Reptile(std::string ime, int ink, int tempOkoline, int brObroka) : ZooAnimal(ime, "Sisavac", brObroka) {
		this->razmnozavanje = "Polaganje jaja";
		this->inkubacija = ink;
		this->tempOkoline = tempOkoline;
	}
}