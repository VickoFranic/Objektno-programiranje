#include "Species.h"

namespace OSS {

	Tiger::Tiger(std::string ime, int period, int temp, int kolHrane, int brObroka) : Mammal(ime, period, kolHrane, brObroka) {
		this->temperatura = temp;
	}
	
	// Preoptereceni operator <<
	std::ostream& operator<<(std::ostream& os, const Tiger& animal) {
		os << "Ime zivotinje: " << animal.getIme() << std::endl;
		os << "Vrsta zivotinje: " << animal.getVrsta() << std::endl;
		os << "Nacin razmnozavanja: " << animal.razmnozavanje << std::endl;
		os << "Gestacijski period: " << animal.gestPeriod << std::endl;
		os << "Temperatura tijela: " << animal.temperatura << std::endl;

		return os;
	}
}