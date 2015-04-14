#ifndef KOLOKVIJ_H
#define KOLOKVIJ_H
#include <iostream>
#include <string>

/*********************************KOLOKVIJ***********************/
class cKolokvij {
private:
	unsigned int bodovi[5]; // bodovi za 5 zadataka kolokvija
public:
	void unos_bodova();
	void print();
};


/*********************************STUDENT***********************/
class cStudent {
private:
	std::string ime;
	std::string prezime;
	unsigned int mb;
	bool p[10];
	bool apk[10];
	cKolokvij kol[10];

public:
	void set_basic(std::string, std::string, unsigned int);
	void set_pr();
	void set_kol();
	void set_apk();

	void get_all();
};


/*********************************PRACENJE***********************/
class cPracenjeOOPLab {
	cStudent s_tmp;

public:
	void get_student(cStudent);
	void set_student(cStudent);
};
#endif