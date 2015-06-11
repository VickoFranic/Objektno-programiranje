#ifndef TEMPLATES_H
#define TEMPLATES_H

template <class T1, class T2>
class pair
{
	T1 first;
	T2 second;
public:
	pair() : first(T1()), second(T2()){}	// konstruktor bez pridjeljivanja vrijednosti, samo tipovi
	pair(const T1& t1, const T2& t2) : first(t1), second(t2){}	// konstruktor sa zadanim vrijednostima i tipom
	pair(const pair<T1, T2>& other) : first(other.first), second(other.second){}	// copy konstruktor

	bool operator==(const pair<T1, T2>& other) const	// operator ==
	{
		return first == other.first && second == other.second;
	}

	void operator=(const pair<T1, T2>& other) {
		this->first = other.first;
		this->second = other.second;
	}

	friend std::istream& operator>>(std::istream& input, pair<T1, T2>& p) {
		input >> p.first >> p.second;
		return input;
	}

	friend std::ostream& operator<<(std::ostream& out, const pair<T1, T2>& p) {
		out << p.first << " - " << p.second << std::endl;
		return out;
	}

	void swap() {
		T1 temp = this->first;
		this->first = this->second;
		this->second = temp;
	}
};

template <> 
class pair<char*, char*> {
	char* pF;
	char* pS;
public:
	friend std::istream& operator>>(std::istream& input, pair<char*, char*>& p) {
		p.pF = new char[256];
		p.pS = new char[256];

		input >> p.pF >> p.pS;
		return input;
	}

	friend std::ostream& operator<<(std::ostream& out, pair<char*, char*>& p) {
		out << p.pF << " - " << p.pS << std::endl;
		return out;
	}

	void swap() {
		char* temp = this->pF;
		this->pF = this->pS;
		this->pS = temp;
	}
};

// napisati swap member funkciju, operatore =, <<, >>, +, -

#endif