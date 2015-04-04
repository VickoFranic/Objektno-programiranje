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
string pig_latin(string rec) {
	string tmp, sub;
	size_t pos_begin = 0;
	size_t pos_end = rec.find(' ', pos_begin + 1);
	int cnt = 0;
	int index = 0;


	if (test_letter(rec.at(pos_begin)))
		tmp.append(rec.substr(pos_begin, (pos_end - pos_begin)) + "hay ");
	else if (!test_letter(rec.at(pos_begin))) {
		sub = rec.substr((pos_begin), (pos_end - pos_begin));
	while (!test_letter(sub.at(cnt)))
		cnt++;
	tmp.append(sub.substr(cnt, (sub.length() - cnt)));
	tmp.append(sub.substr(0, cnt) + "ay ");
	cnt = 0;
}

	while (index != rec.npos) {



		pos_begin = rec.find(' ', index);
		pos_end = rec.find(' ', pos_begin + 1);
		index = pos_end;

		if (test_letter(rec.at(pos_begin + 1)))
			tmp.append(rec.substr(pos_begin, (pos_end - pos_begin)) + "hay ");
		
		else if (!test_letter(rec.at(pos_begin + 1))) {
			sub = rec.substr((pos_begin + 1), (pos_end - pos_begin) - 1);
			while (!test_letter(sub.at(cnt)))
				cnt++;
			tmp.append(sub.substr(cnt, (sub.length() - cnt)));
			tmp.append(sub.substr(0, cnt) + "ay ");
			cnt = 0;
			}
		}
	
	return tmp;
}

int main() {

	vector<string> v;
	string recenica;
	int n = 0;

	cout << "Unesite 'kraj' za izlaz" << endl;
	while (getline(cin, recenica)) {
	if (recenica == "kraj") {
	break;
	}
	v.push_back(recenica);
	n++;
	}

	// PRINT VECTOR
	vector<string>::iterator it = v.begin();
	int cnt = 0;

	while (it != v.end()) {
	cnt++;
	++it;
	}

	int r = rand() % cnt;
	
	
	recenica = pig_latin(v.at(r));

	cout << endl << "Random prevedena recenica: " << recenica << endl;
	return 0;
}