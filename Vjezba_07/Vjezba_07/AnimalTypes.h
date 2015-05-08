#include "ZooAnimal.h"

namespace OSS {

	class Mammal : public ZooAnimal {
	protected:
		std::string razmnozavanje;
		int gestPeriod;
		int kolHrane;
	public:
		Mammal(std::string ime, int gp, int kol, int brObroka);
	};
	
	class Bird : public ZooAnimal {
	protected:
		std::string razmnozavanje;
		int inkubacija;
		int temperatura;
		int kolHrane;
	public:
		Bird(std::string ime, int vi, int temp, int brObroka);
		friend std::ostream& operator<<(std::ostream& os, const Bird& animal);
	};

	class Reptile : public ZooAnimal {
	protected:
		std::string razmnozavanje;
		int inkubacija;
		int tempOkoline;
		int kolHrane;
	public:
		Reptile(std::string ime, int ink, int tempOkoline, int brObroka);
	};
}