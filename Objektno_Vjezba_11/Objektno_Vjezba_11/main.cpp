#include "headers.h"
#include <vector>
#include <algorithm>
#include <cmath>

// neparan broj
bool Odd(int n) {
	return ((n % 2) == 1);
}

// veæi od 100
bool check(int n) {
	return n > 100;
}

// potencija broja 2
bool pot(int n) {
	for (double i = 0; i < n; i++) {
		if (std::pow(2, i) == n)
			return true;
		if (std::pow(2, i) > n)
			return false;
	}
}

// od manjeg prema vecem
bool minMax(int x, int y) {
	return x < y;
}

// od veceg prema manjem
bool MaxMin(int x, int y) {
	return x > y;
}

int main() {

	int x, y, res;
	char o;

	std::vector<int> v;
	std::vector<int>::iterator it;
	int cnt;

	try {
		while (v.size() < 5) {
			x = get_num();
			y = get_num();
			o = get_operator();
			res = result(x, y, o);

			v.push_back(res);
		}
/*
	v.push_back(12);
	v.push_back(103);
	v.push_back(4);
	v.push_back(64);
	v.push_back(78);
	v.push_back(99);
*/

	/************ Min_element ***********/
	it = std::min_element(v.begin(), v.end());
	std::cout << "Min. element: " << *it << std::endl;

	/************ Find_if ***********/
	it = std::find_if(v.begin(), v.end(), Odd);
	if (it == v.end())
		std::cout << "Ne postoji neparni element u vektoru" << std::endl;
	else
	std::cout << "Prvi neparni element: " << *it << std::endl;

	/*********** Count_if ************/
	cnt = std::count_if(v.begin(), v.end(), Odd);
	std::cout << "Broj neparnih elemenata: " << cnt << std::endl;

	/**************************Remove_if **********************/
	v.erase(std::remove_if(v.begin(), v.end(), check), v.end());	// erase/remove idiom
	for (int i = 0; i < v.size(); i++)
		std::cout << v.at(i) << " ";
	std::cout << std::endl;

	/**************** Replace_if *************/
	std::replace_if(v.begin(), v.end(), pot, 2);
	for (int i = 0; i < v.size(); i++)
		std::cout << v.at(i) << " ";
	std::cout << std::endl;

	std::sort(v.begin(), v.end(), minMax);
	for (int i = 0; i < v.size(); i++)
		std::cout << v.at(i) << " ";
	std::cout << std::endl;

	std::sort(v.begin(), v.end(), MaxMin);
	for (int i = 0; i < v.size(); i++)
		std::cout << v.at(i) << " ";
	std::cout << std::endl;
}

	catch(NotNumber& err) {
		err.showError();
	}
	catch(NotOperator& err) {
		err.showError();
	}
	catch (ZeroDivide& err) {
		err.showError();
	}
	catch (...) {
		std::cout << "Nepoznata iznimka" << std::endl;
	}
}
