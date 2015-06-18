#ifndef HEADERS_H
#define HEADERS_H

#include <iostream>
#include <string>

/*********************** IZNIMKE ******************/
class BaseException {
private:
	std::string msg;
public:
	BaseException(std::string);
	void showError();
};

/*************** FUNKCIJE *******************/
int get_num();
char get_operator();
int result(int, int, char o);

#endif
