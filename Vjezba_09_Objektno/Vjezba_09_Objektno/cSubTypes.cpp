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
		this->passNum = p;
		this->bikes = new bike[b];
		this->cars = new car[c];
	}

	unsigned int ferry::passengers() {
		return this->passNum;
	}
}