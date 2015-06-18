#ifndef HEADERS_H
#define HEADERS_H

#include <iostream>

/*********************** IZNIMKE ******************/
class BaseException {
public:
	virtual void showError() = 0;	// cista virtualna funkcija
};

class NotNumber : public BaseException {
public:
	void showError();
};

class NotOperator : public BaseException {
public:
	void showError();
};

class ZeroDivide : public BaseException {
public:
	void showError();
};

/*************** FUNKCIJE *******************/
int get_num();
char get_operator();
int result(int, int, char o);

#endif