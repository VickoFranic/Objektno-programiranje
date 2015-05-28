#include "cCounter.h"
#include <iostream>

namespace OSS {
	
	Counter::Counter() {
		this->cnt = 0;
	}

	void Counter::add(Vehicle* v) {
		this->cnt += v->passengers();
		std::cout << v->type() << ", putnika: " << v->passengers() << std::endl;
	}

	unsigned int Counter::total() {
		return this->cnt;
	}
}