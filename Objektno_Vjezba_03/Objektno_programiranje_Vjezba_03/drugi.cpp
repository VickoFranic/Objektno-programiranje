#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v) {

	vector<int>::iterator i = v.begin();
	vector<int>::iterator j = v.end();

	while (i != j) {
		cout << *i << " ";
		i++;
	}
	cout << "\n";
}

vector<int> sum(vector<int> v, int& max, int& min) {
	vector<int> sum;

	vector<int>::iterator b = v.begin();
	vector<int>::iterator e = v.end() - 1;

	while (b != e) {
		sum.push_back(*b + *e);
		b++;
		e--;
		if (b == e) {
			sum.push_back(*b);
		}
		if ((b + 1) == e) {
			sum.push_back(*b + *e);
			break;
		}
	}

	max = *max_element(sum.begin(), (sum.end() - 1));
	min = *min_element(sum.begin(), (sum.end() - 1));
	return sum;
}

int main2() {

	int max_el, min_el;
	vector<int> v = { 2, 4, 10, 2, 4, 1, 2, 1}, rez;
	print(v);
	
	rez = sum(v, max_el, min_el);

	cout << endl << "SUME: ";
	print(rez);
	
	cout << "MAX: " << max_el << endl;
	cout << "MIN: " << min_el << endl;

	return 0;
}