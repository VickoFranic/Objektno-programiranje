#include "cSubTypes.h"

namespace OSS {

	/************* LAND *********/
	bike::bike() {
		this->passNum = 1;
	}

	unsigned int bike::passengers() {
		return this->passNum;
	}

	car::car() {
		this->passNum = 5;
	}
	unsigned int car::passengers() {
		return this->passNum;
	}

	/************* WATER *********/
	ferry::ferry(unsigned int p, int b, int c) {
		this->passNum = p + b + (5 * c);
		this->bikes = new bike[b];
		this->cars = new car[c];
	}

	ferry::~ferry() {
		delete[] this->bikes;
		delete[] this->cars;
	}

	unsigned int ferry::passengers() {
		return this->passNum;
	}

	catamaran::catamaran(unsigned int n) {
		this->passNum = n;
	}

	unsigned int catamaran::passengers() {
		return this->passNum;
	}
	/****** WATER - AIR **********/
	seaplane::seaplane(unsigned int n) {
		this->passNum = n;
	}
	std::string seaplane::type() {
		return "Air-Water";
	}

	unsigned int seaplane::passengers() {
		return this->passNum;
	}
}