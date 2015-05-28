#include "cTypes.h"

namespace OSS {
	class bike : public LandVehicle {
	private:
		unsigned int passNum;
	public:
		bike();
		unsigned int passengers();
	};

	class car : public LandVehicle {
	private:
		unsigned int passNum;
	public:
		car();
		unsigned int passengers();
	};

	class ferry : public Watercraft {
	private:
		unsigned int passNum;
		bike* bikes;
		car* cars;
	public:
		ferry(unsigned int p, int b, int c);
		unsigned int passengers();
	};
}