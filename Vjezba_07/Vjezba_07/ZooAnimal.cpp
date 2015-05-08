#include "ZooAnimal.h"
#include <iostream>
#include <ctime>
#include <vector>


namespace OSS {

int ZooAnimal::counter = 0;

	void get_counter() {
		std::cout << std::endl << "Broj objekata: " << ZooAnimal::counter << std::endl;
	}

	void ZooAnimal::counter_change(int v) {
		if (v == 1)
			ZooAnimal::counter++;
		else if (v == -1)
			ZooAnimal::counter--;
	}

	ZooAnimal::ZooAnimal(std::string ime, std::string vrsta, int brObr) {
		this->ime = ime;
		this->vrsta = vrsta;
		this->brojObroka = brObr;
	}

	ZooAnimal::ZooAnimal(std::string v, std::string i, int gr, int bk, int bo, int zv) {
		std::cout << "Konstruktor pozvan" << std::endl;

		this->vrsta = v;
		this->ime = i;
		this->godRod = gr;
		this->brojKaveza = bk;
		this->brojObroka = bo;
		this->zivotniVijek = zv;

		this->Mass = new MassData[this->zivotniVijek * 2]; // alokacija memorije za podatke o masi, zv*2
		this->size = 0; // kod kreiranja objekta, nema ni jedan podatak o masi i godini vaganja u njemu
	}

	ZooAnimal::~ZooAnimal() {
		// std::cout << "Destruktor pozvan" << std::endl;
		// this->counter_change(-1);	// smanjujemo counter za jedan prilikom skidanja iz vektora, tj. kad se poziva destruktor
		// delete[] this->Mass; // brisemo ono sto smo dinamicki alocirali
	}

	ZooAnimal::ZooAnimal(const ZooAnimal& zivotinja) {
		this->vrsta = zivotinja.vrsta;
		this->ime = zivotinja.ime;
		this->brojObroka = zivotinja.brojObroka;
	}

	/*
	ZooAnimal::ZooAnimal(const ZooAnimal& z) {
	std::cout << std::endl << "Copy konstruktor pozvan";

	this->counter_change(1);	// uvecavamo counter za jedan prilikom dodavanja u vektor, tj. kad se poziva copy konstruktor

	this->vrsta = z.vrsta;
	this->ime = z.ime;
	this->godRod = z.godRod;
	this->brojKaveza = z.brojKaveza;
	this->brojObroka = z.brojObroka;
	this->zivotniVijek = z.zivotniVijek;
	this->size = z.size;

	this->Mass = new MassData[this->zivotniVijek * 2]; // alociramo memoriju
	// std::cout << "Alocirano memorije za podatke o masi: " << (this->zivotniVijek*2)*sizeof(MassData) << std::endl;

	if (z.size != 0) {
	memcpy(this->Mass, z.Mass, z.size*(sizeof(MassData))); // deep copy podataka o masi u this iz z
	//	std::cout << "Kopirano bajtova podataka o masi: " << z.size*(sizeof(MassData)) << std::endl;
	}
	}
	*/

	void ZooAnimal::promjenaObroka(int tmp) {
		if (tmp == 1)
			this->brojObroka++;
		if (tmp == -1)
			this->brojObroka--;
	}

	void ZooAnimal::dodajMasu(int m, int gv) {
		int cnt = 0;
		time_t t = time(NULL);
		tm* timePointer = localtime(&t);

		int YEAR = timePointer->tm_year + 1900; // tekuca godina

		while (cnt < this->zivotniVijek * 2) {

			if (this->size == 0) {
				this->Mass[this->size].godVaganja = gv;
				this->Mass[this->size].masa = m;
				this->size++;
				break;
			}

			if ((this->Mass[cnt].godVaganja == gv) && (this->Mass[cnt].godVaganja != YEAR)) // godina se vec nalazi u podacima i godina nije tekuca
				std::cout << "Podaci veæ postoje !" << std::endl;

			else if ((this->Mass[cnt].godVaganja == YEAR) && (gv == YEAR)) // godina tekuca, dodaj samo masu
				this->Mass[cnt].masa = m;

			else if ((this->Mass[cnt].godVaganja != gv) && (cnt == (this->zivotniVijek * 2) - 1)) { // godina se ne nalazi u podacima
				this->Mass[this->size].godVaganja = gv;
				this->Mass[this->size].masa = m;
				this->size++;
			}
			cnt++;
		}
	}

	void ZooAnimal::provjeriMasu() {
		std::cout << std::endl;

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
			if ((mCurr > mPast) && (mCurr*0.1 < diff)) {
				std::cout << "Zivotinja se udebljala vise od 10% u odnosu na proslu godinu, smanjujem obroke" << std::endl;
				this->promjenaObroka(-1);
			}

			if ((mCurr < mPast) && (mPast*0.1 < diff)) {
				std::cout << "Zivotinja je smrsavila vise od 10% u odnosu na proslu godinu, povecavam obroke" << std::endl;
				this->promjenaObroka(1);
			}
		}
	}

	void ZooAnimal::ispisPodataka() const {
		std::cout << std::endl << "Vrsta: " << this->vrsta << std::endl;
		std::cout << "Ime: " << this->ime << std::endl;
		std::cout << "Godina rodjenja: " << this->godRod << std::endl;
		std::cout << "Broj kaveza: " << this->brojKaveza << std::endl;
		std::cout << "Broj obroka: " << this->brojObroka << std::endl;
		std::cout << "Zivotni vijek: " << this->zivotniVijek << std::endl;

		int i = 0;
		while (i < this->size) {
			std::cout << "Godina vaganja: " << this->Mass[i].godVaganja << "	Masa: " << this->Mass[i].masa << std::endl;
			i++;
		}
	}

	std::string ZooAnimal::getIme() const {
		return this->ime;
	}

	std::string ZooAnimal::getVrsta() const {
		return this->vrsta;
	}
}