#include "cCounter.h"
#include <iostream>

int main(void) {
	using namespace OSS;
	
	Counter c;

	Vehicle* v[] = { new bike, new car, new catamaran(30), new ferry(10, 5, 3), new seaplane(15) };

	size_t sz = sizeof v / sizeof v[0];

	
	for (unsigned i = 0; i < sz; ++i)
		c.add(v[i]);

	std::cout << "ukupno " << c.total() << " putnika" << std::endl;
	for (unsigned i = 0; i < sz; ++i)
		delete v[i];
}