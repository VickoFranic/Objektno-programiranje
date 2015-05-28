#include "cVehicle.h"

namespace OSS {
	class LandVehicle : public Vehicle {
	public:
		std::string type();
	};

	class Watercraft : virtual public Vehicle {
	public:
		std::string type();
	};

	class Aircraft : virtual public Vehicle {
	public:
		std::string type();
	};
}