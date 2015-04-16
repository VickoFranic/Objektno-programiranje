#ifndef KOLOKVIJ_H
#define KOLOKVIJ_H
#include <iostream>
#include <string>

/*********************************KOLOKVIJ***********************/
class cKolokvij {
private:
	 float bodovi[5]; // bodovi za 5 zadataka kolokvija
public:
	void unos_bodova();
	void print_bodove();
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

	void get_pr();
	void get_apk();
	void get_all();
};


/*********************************PRACENJE***********************/
class cPracenjeOOPLab {
private:
	int st_num;
	cStudent *studenti[100];
public:
	void set_new();
	void add_new(std::string I, std::string P);
	void print_student_data(int mb);
	cStudent* get_student(int mb);
};
#endif