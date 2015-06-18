#include "headers.h"
#include <functional>
#include <fstream>
#include <ctime>

void NotNumber::showError() {
	std::cout << "Uneseni parametar nije cijeli broj !" << std::endl;
}

void NotOperator::showError() {
	std::cout << "Uneseni parametar nije podrzan operator !" << std::endl;
}

void ZeroDivide::showError() {
	std::cout << "Dijeljenje sa nulom !" << std::endl;
}

int get_num() {
	int n;
	std::cin >> n;

	if (std::cin.fail()) {
		time_t tmp = time(0);
		std::ofstream ofs("errors.log", std::ios_base::out | std::ios_base::app);
		ofs << ctime(&tmp) << "Uneseni parametar nije cijeli broj !" << std::endl;
		throw NotNumber();
	}
	return n;
}

char get_operator() {
	char o;
	std::cin >> o;

	if ((o == '+') || (o == '-') || (o == '*') || (o == '/'))
		return o;

	time_t tmp = time(0);
	std::ofstream ofs("errors.log", std::ios_base::out | std::ios_base::app);
	ofs << ctime(&tmp) << "Uneseni parametar nije podrzan operator !" << std::endl;
	throw NotOperator();
}

int result(int x, int y, char o) {
	if ((y == 0) && (o == '/')) {
		time_t tmp = time(0);
		std::ofstream ofs("errors.log", std::ios_base::out | std::ios_base::app);
		ofs << ctime(&tmp) << "Dijeljenje s nulom !" << std::endl;
		throw ZeroDivide();
	}

	if (o == '+') {
		std::cout << "Rezultat: " << x + y << std::endl;
		return x + y;
	}
	if (o == '-') {
		std::cout << "Rezultat: " << x - y << std::endl;
		return x - y;
	}
	if (o == '*') {
		std::cout << "Rezultat: " << x * y << std::endl;
		return x * y;
	}
	if (o == '/') {
		std::cout << "Rezultat: " << x / y << std::endl;
		return x / y;
	}
}