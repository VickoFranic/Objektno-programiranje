#include "AnimalTypes.h"

namespace OSS {

	Mammal::Mammal(std::string ime, int gp, int kol, int brObroka) : ZooAnimal(ime, "Sisavac", brObroka) {
		this->razmnozavanje = "Radanje";
		this->gestPeriod = gp;
		this->kolHrane = kol;
	}

	int Mammal::Food() const {
		return (this->kolHrane * ZooAnimal::Food());
	}


	/********************** PTICE **********************/
	Bird::Bird(std::string ime, int vi, int temp, int kol, int brObroka) : ZooAnimal(ime, "Ptica", brObroka) {
		this->razmnozavanje = "Polaganje jaja";
		this->inkubacija = vi;
		this->tempTijela = temp;
		this->kolHrane = kol;
	}

	void Bird::print(std::ostream& out) const {
		ZooAnimal::print(out);
		out << "Nacin razmnozavanja: " << this->razmnozavanje << std::endl;
		out << "Vrijeme inkubacije: " << this->inkubacija << std::endl;
		out << "Temperatura tijela: " << this->tempTijela << std::endl;
	}

	int Bird::Food() const {
		return (this->kolHrane * ZooAnimal::Food());
	}

	/********************** GMAZOVI **********************/
	Reptile::Reptile(std::string ime, int ink, int tempOkoline, int kol, int brObroka) : ZooAnimal(ime, "Gmaz", brObroka) {
		this->razmnozavanje = "Polaganje jaja";
		this->inkubacija = ink;
		this->tempOkoline = tempOkoline;
		this->kolHrane = kol;
	}

	void Reptile::print(std::ostream& out) const {
		ZooAnimal::print(out);
		out << "Nacin razmnozavanja: " << this->razmnozavanje << std::endl;
		out << "Vrijeme inkubacije: " << this->inkubacija << std::endl;
		out << "Temperatura tijela: " << this->tempOkoline << std::endl;
	}

	int Reptile::Food() const {
		return (this->kolHrane * ZooAnimal::Food());
	}
}