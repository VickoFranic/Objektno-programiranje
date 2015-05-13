#include "ZooAnimal.h"

namespace OSS {

	class Mammal : public ZooAnimal {
	protected:
		std::string razmnozavanje;
		int gestPeriod;
		int kolHrane;
	public:
		Mammal(std::string ime, int gp, int kol, int brObroka);
		virtual int Food() const;
	};
	
	class Bird : public ZooAnimal {
	protected:
		std::string razmnozavanje;
		int inkubacija;
		int tempTijela;
		int kolHrane;
	public:
		Bird(std::string ime, int vi, int temp, int kol, int brObroka);
		virtual void print(std::ostream& out) const;
		virtual int Food() const;
	};

	class Reptile : public ZooAnimal {
	protected:
		std::string razmnozavanje;
		int inkubacija;
		int tempOkoline;
		int kolHrane;
	public:
		Reptile(std::string ime, int ink, int tempOkoline, int kol, int brObroka);
		virtual void print(std::ostream& out) const;
		virtual int Food() const;
	};
}