#include "AnimalTypes.h"

namespace OSS {

	class Tiger : public Mammal {
		int temperatura;
	public:
		Tiger(std::string ime, int period, int temp, int kolHrane, int brObroka);
		friend std::ostream& operator<<(std::ostream& os, const Tiger& animal);
	};

	class Monkey : Mammal {
		int temperatura;
	};

	class Elephant : Mammal {
		int temperatura;
	};

	class GriffonVulture : public Bird {
	public:
		GriffonVulture(std::string ime, int vi, int temp, int brObroka) : Bird(ime, vi, temp, brObroka) {};
	};

	class Owl : Bird {
	};

	class Crocodile : Reptile {
	};

	class Turtle : Reptile {
	};
}