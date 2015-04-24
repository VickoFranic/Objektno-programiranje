#include "ZooAnimal.h"
#include <iostream>
#include <ctime>


ZooAnimal::ZooAnimal(std::string v, std::string i, int gr, int bk, int bo, int zv) {
	this->vrsta = v;
	this->ime = i;
	this->godRod = gr;
	this->brojKaveza = bk;
	this->brojObroka = bo;
	this->zivotniVijek = zv;

	this->Mass = new MassData[this->zivotniVijek * 2]; // alokacija memorije za podatke o masi, zv*2
	this->Mass->size = 0; // kod kreiranja objekta, nema ni jedan podatak o masi i godini vaganja u njemu
}

ZooAnimal::~ZooAnimal() {
	delete[] this->Mass; // brisemo ono sto smo dinamicki alocirali
}

ZooAnimal::ZooAnimal(const ZooAnimal& z) {
	this->vrsta = z.vrsta;
	this->ime = z.ime;
	this->godRod = z.godRod;
	this->brojKaveza = z.brojKaveza;
	this->brojObroka = z.brojObroka;
	this->zivotniVijek = z.zivotniVijek;

	this->Mass = new MassData[this->zivotniVijek * 2]; // alociramo memoriju

	if (z.Mass->size == 0)
		return;
	else
		memcpy(this->Mass, z.Mass, z.Mass->size*(sizeof(z.Mass)));
}

void ZooAnimal::promjenaObroka() {
	int tmp;
	std::cout << "Unesite 1 za poveæanje broja obroka, -1 za smanjenje broja obroka: " << std::endl;
	std::cin >> tmp;

	if (tmp == 1)
		this->brojObroka++;
	else if (tmp == -1)
		this->brojObroka--;
	else
		this->promjenaObroka();
}

void ZooAnimal::dodajMasu(int m, int gv) {
	int cnt = 0;
	time_t t = time(NULL);
	tm* timePointer = localtime(&t);

	int YEAR = timePointer->tm_year + 1900; // tekuca godina

	while (cnt < this->zivotniVijek * 2) {
		if ((this->Mass[cnt].godVaganja == gv) && (this->Mass[cnt].godVaganja != YEAR)) // godina se vec nalazi u podacima i godina nije tekuca
			std::cout << "Podaci veæ postoje !" << std::endl;

		else if ((this->Mass[cnt].godVaganja == YEAR) && (gv == YEAR)) // godina tekuca, dodaj samo masu
			this->Mass[cnt].masa = m;

		else if ((this->Mass[cnt].godVaganja != gv) && (cnt == (this->zivotniVijek * 2) - 1)) { // godina se ne nalazi u podacima
			this->Mass[this->Mass->size].godVaganja = gv;
			this->Mass[this->Mass->size].masa = m;
			this->Mass->size++;
		}
		cnt++;
	}
}

void ZooAnimal::provjeriMasu() const {
	int cnt = 0;
	int mCurr = 0, mPast = 0, diff;

	time_t t = time(NULL);
	tm* timePointer = localtime(&t);
	int YEAR = timePointer->tm_year + 1900;

	while (cnt < this->zivotniVijek * 2) {
		if (this->Mass[cnt].godVaganja == YEAR)
			mCurr = this->Mass[cnt].masa;

		if (this->Mass[cnt].godVaganja == YEAR - 1)
			mPast = this->Mass[cnt].masa;

		cnt++;
	}
	diff = abs(mCurr - mPast);

	if ((mCurr == 0) || (mPast == 0))
		std::cout << "Nedostaju podaci !" << std::endl;
	else {
		if ((mCurr > mPast) && (mCurr*0.1 < diff))
			std::cout << "Zivotinja se udebljala vise od 10% u odnosu na proslu godinu" << std::endl;

		if ((mCurr < mPast) && (mPast*0.1 < diff))
			std::cout << "Zivotinja je smrsavila vise od 10% u odnosu na proslu godinu" << std::endl;
	}
}

void ZooAnimal::ispisPodataka() const {
	std::cout << "Vrsta: " << this->vrsta << std::endl;
	std::cout << "Ime: " << this->ime << std::endl;
	std::cout << "Godina rodjenja: " << this->godRod << std::endl;
	std::cout << "Broj kaveza: " << this->brojKaveza << std::endl;
	std::cout << "Broj obroka: " << this->brojObroka << std::endl;
	std::cout << "Zivotni vijek: " << this->zivotniVijek << std::endl;

	int i = 0;
	while (i < this->Mass->size) {
		std::cout << "Godina vaganja: " << Mass[i].godVaganja << "	Masa: " << Mass[i].masa << std::endl;
		i++;
	}
}