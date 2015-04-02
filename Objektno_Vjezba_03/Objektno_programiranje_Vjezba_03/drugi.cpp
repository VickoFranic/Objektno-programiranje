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

int main() {

	vector<int> sum;
	vector<int> v = { 2, 4, 10, 2, 4, 1, 2, 1};

	vector<int>::iterator b = v.begin();
	vector<int>::iterator e = v.end() - 1;
	
	print(v);
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

	cout << endl << "SUME: ";
	print(sum);

	int max_el = *max_element(sum.begin(), (sum.end() - 1));
	int min_el = *min_element(sum.begin(), (sum.end() - 1));
	
	cout << "MAX: " << max_el << endl;
	cout << "MIN: " << min_el << endl;

	return 0;
}