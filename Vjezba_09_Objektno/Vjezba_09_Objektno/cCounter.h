#include "cSubTypes.h"

/*
• Napisite klasu counter koja prima prijevozno sredstvo, prilikom dodavanja ispisuje
informaciju o tipu prijevoznog sredstva i racuna ukupan broj putnika
*/
namespace OSS {

	class Counter {
	private:
		int cnt;
	public:
		Counter();
		void add(Vehicle* v);
		unsigned int total();
	};
}