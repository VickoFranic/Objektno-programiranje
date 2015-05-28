#ifndef CVEHICLE_H
#define CVEHICLE_H
#include <string>

/*
Definirajte interface (apstraktnu klasu) vehicle sa metodama type koja vraca string
koji predstavlja vrstu prijevoznog sredstva ”land”, ”water” ili ”air” i passengers
koja vraca broj putnika (unsigned).
*/
namespace OSS {
	class Vehicle {
	public:
		// cisto virtualne funkcije
		virtual std::string type() = 0;
		virtual unsigned int passengers() = 0;
		virtual ~Vehicle() = 0;
	};
}
#endif