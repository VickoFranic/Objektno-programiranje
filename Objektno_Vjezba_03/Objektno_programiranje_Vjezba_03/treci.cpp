#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v);

void stuffing_bit(vector<int>& v) {
	int cnt = 0;
	size_t iter_cnt = 0;
	vector<int>::iterator iter = v.begin();

	while (true) {
		if (iter_cnt == (v.size()))
 			break;
		else if ((*iter == 1)) {
			while ((*iter == 1) && (iter_cnt != v.size())) {
				cnt++;
				iter++;
				iter_cnt++;
				if (*iter == 0) {
					iter_cnt++;
					cnt = 0;
					break;
				}
				else if (cnt == 5) {
					v.insert((iter), 0);
					iter = v.begin() + iter_cnt;
				}
			}
		}
		else {
			iter++;
			iter_cnt++;
		}
	}
}

int main() {
	
	vector<int> v = { 0,0,1,1,1,0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,1 };
	int tmp;

	print(v);
	/*
	while (true) {
		cin >> tmp;

		if (!((tmp == 0) || (tmp == 1)))
			break;
		else
			v.push_back(tmp);
	}
	*/
 	stuffing_bit(v);
	print(v);

	return 0;
}