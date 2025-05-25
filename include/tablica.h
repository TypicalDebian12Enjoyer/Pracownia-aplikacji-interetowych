#ifndef MACIERZYK_H
#define MACIERZYK_H
#include <iostream>
#include <cstdlib>
#include <ctime>

class Macierzyk{ //Macierz z ang. matrix
private:
	int macierzyk[10][10];
public:
	Macierzyk();
	void czytaj_dane();
	void przetworz_dane();
	void wyswietl_wynik();
	~Macierzyk();
};

#endif //MACIERZYK_H
