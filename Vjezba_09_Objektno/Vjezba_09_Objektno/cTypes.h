#include "cVehicle.h"

namespace OSS {
	class LandVehicle : public Vehicle {
	public:
		std::string type();
	};

	class Watercraft : public Vehicle {
	public:
		std::string type();
	};

	class Aircraft : public Vehicle {
	public:
		std::string type();
	};
}