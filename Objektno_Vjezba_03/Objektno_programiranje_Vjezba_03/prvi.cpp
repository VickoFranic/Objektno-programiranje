#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool test_letter(char s) {
	if (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U' ||
		s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
		return true;
	return false;
}

// PREVEDI NA PIG LATIN
void pig_latin(vector<string*> v, int poz) {
	string tmp;
	int i = 0;
	vector<string*>::iterator it = v.begin() + poz;
	char c;
	tmp = **it;

	for (i; i < (tmp.size()); i++) {
		c = tmp.at(i);
		if ((tmp.at(i) == ' ') && test_letter(tmp.at(i + 1))) { // znak je razmak i sljedeci je samoglasnik
			cout << ' ';
			i++;
			while (tmp.at(i) != ' ') {
				cout << tmp.at(i);
				i++;
				if (tmp.at(i) == ' ')
					cout << "hay ";
			}
		}
		else
			cout << tmp.at(i);
	}
	cout << endl;
}

int main1() {


	vector<string*> v;
	string recenica[256];
	int n = 0;

	cout << "Unesite 'kraj' za izlaz" << endl;
	while (getline(cin, recenica[n])) {
		if (recenica[n] == "kraj") {
			v.push_back(&recenica[n]);
			break;
		}
		v.push_back(&recenica[n]);	
		n++;
	}

	// PRINT VECTOR
	vector<string*>::iterator it = v.begin();
	int cnt = 1;
	cout << endl << "RECENICE" << endl;
	while (it != v.end()){
		cout << cnt << " " << **it << endl;
		cnt++;
		++it;
	}
	cout << endl << "Upisite redni broj recenice koju zelite prevesti: ";
	cin >> cnt;

	cnt = cnt--;
	pig_latin(v, cnt);

	return 0;
}