#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> sum;
	vector<int> v = { 1, 2, 4, 1, 2, 5, 2, 4 };

	vector<int>::iterator b = v.begin();
	vector<int>::reverse_iterator e = v.rbegin();
	
	

	/*
	while (it != v.end()) {
		cout << *it;
	it++;
}
*/

	return 0;
}