#include <iostream>
#include "templates.h"
#include <vector>
#include <algorithm>

int main()
{
	pair<char*, char*> p1, p2, p3;

	std::vector<pair<char*, char*> > v;
//	std::cin >> p1 >> p2 >> p3;

//	p1.swap();

	pair<int, float> test(24, 42.23);

	test.swap();
	
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

//	std::sort(v.begin(), v.end());

	std::vector<pair<char*, char*> >::iterator it;
	for (it = v.begin(); it != v.end(); ++it)
		std::cout << *it << std::endl;
}