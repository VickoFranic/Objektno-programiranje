#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H
#include <string>

typedef struct MassData {
	int size; // popunjenost podataka o masi i godini vaganja
	int masa;
	int godVaganja;
} MassData;

class ZooAnimal {

private:
	std::string vrsta;
	std::string ime;
	int godRod;
	int brojKaveza;
	int brojObroka;
	int zivotniVijek;
	MassData* Mass; // struktura s podacima o masi i godini vaganja

public:
	ZooAnimal(std::string v, std::string i, int gr, int bk, int bo, int zv); // alocirat memoriju za masu u konstruktoru
	~ZooAnimal();
	ZooAnimal(const ZooAnimal& z);

	void promjenaObroka();
	void dodajMasu(int m, int gv);
	void provjeriMasu() const;
	void ispisPodataka() const;
};
#endif