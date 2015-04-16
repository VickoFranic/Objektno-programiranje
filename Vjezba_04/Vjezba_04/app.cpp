#include "headers.h"

void main() {
	
	cPracenjeOOPLab vjezbe;
	vjezbe.set_new();

	vjezbe.add_new("Vicko", "Franic");
	
	vjezbe.get_student(1)->set_kol();
	vjezbe.get_student(1)->set_pr();
	vjezbe.get_student(1)->set_apk();

	vjezbe.print_student_data(1);
}