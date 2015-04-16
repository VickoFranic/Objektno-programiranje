#include "headers.h"

void cPracenjeOOPLab::set_new() {
	this->st_num = 1;
	std::cout << "KREIRANA NOVA LISTA STUDENATA" << std::endl;
}

void cPracenjeOOPLab::add_new(std::string I, std::string P) {
	int mb = this->st_num;

	this->studenti[mb] = new cStudent;
	this->studenti[mb]->set_basic(I, P, mb);
	std::cout << "Dodan novi student pod maticnim brojem: " << mb << std::endl;

	this->st_num++;
}

void cPracenjeOOPLab::print_student_data(int mb) {
	this->studenti[mb]->get_all();
}

cStudent* cPracenjeOOPLab::get_student(int mb) {
	return this->studenti[mb];
}