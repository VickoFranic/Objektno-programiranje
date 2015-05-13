#include "AnimalTypes.h"

namespace OSS {

	/********************** SISAVCI **********************/
	class Tiger : public Mammal {
	private:
		int temperatura;
	public:
		Tiger(std::string ime, int period, int temp, int kolHrane, int brObroka);
		virtual void print(std::ostream& out) const;
	};

	class Monkey : public Mammal {
	private:
		int temperatura;
	public:
		Monkey(std::string ime, int period, int temp, int kolHrane, int brObroka);
		virtual void print(std::ostream& out) const;
	};

	class Elephant : public Mammal {
	private:
		int temperatura;
	public:
		Elephant(std::string ime, int period, int temp, int kolHrane, int brObroka);
		virtual void print(std::ostream& out) const;
	};

	/********************** PTICE **********************/
	class GriffonVulture : public Bird {
	public:
		GriffonVulture(std::string ime, int vi, int temp, int kol, int brObroka);
	};

	class Owl : public Bird {
	public:
		Owl(std::string ime, int vi, int temp, int kol, int brObroka);
	};

	/********************** GMAZOVI **********************/
	class Crocodile : public Reptile {
	public:
		Crocodile(std::string ime, int ink, int tempOkoline, int kol, int brObroka);
	};

	class Turtle : public Reptile {
	public:
		Turtle(std::string ime, int ink, int tempOkoline, int kol, int brObroka);
	};
}