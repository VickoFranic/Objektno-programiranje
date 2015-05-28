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
		~ferry();
		unsigned int passengers();
	};

	class catamaran : public Watercraft {
	private:
		unsigned int passNum;
	public:
		catamaran(unsigned int n);
		unsigned int passengers();
	};

	class seaplane : public Watercraft, public Aircraft {
	private:
		unsigned int passNum;
	public:
		seaplane(unsigned int n);
		unsigned int passengers();
		std::string type();
	};
}