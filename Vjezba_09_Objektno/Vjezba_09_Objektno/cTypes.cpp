#include "cTypes.h"

namespace OSS {
	std::string LandVehicle::type() {
		return "Land";
	}

	std::string Watercraft::type() {
		return "Water";
	}

	std::string Aircraft::type() {
		return "Air";
	}
}