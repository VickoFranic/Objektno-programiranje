#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H
#include <string>

typedef struct MassData {
	int masa;
	int godVaganja;
} MassData;

class ZooAnimal {

private:
	static int counter;
	std::string vrsta;
	std::string ime;
	int godRod;
	int brojKaveza;
	int brojObroka;
	int zivotniVijek;
	MassData* Mass; // struktura s podacima o masi i godini vaganja
	int size; // popunjenost podataka o masi i godini vaganja

public:
	void counter_change(int);

	friend void get_counter();	// Friend funkcija

	ZooAnimal(std::string v, std::string i, int gr, int bk, int bo, int zv); // alocirat memoriju za masu u konstruktoru
	~ZooAnimal();
	ZooAnimal(const ZooAnimal& z);

	void promjenaObroka(int tmp);
	void dodajMasu(int m, int gv);
	void provjeriMasu();
	void ispisPodataka() const;
};
#endif