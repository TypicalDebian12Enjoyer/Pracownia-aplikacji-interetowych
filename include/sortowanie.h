#ifndef SORTOWANECZKO_H
#define SORTOWANECZKO_H
#include <cstdlib>
#include <iostream>

class Sortowaneczko{
private:
	static constexpr int n = 6;
	int tablicunia[n];
	int pokazowka[n];
public:
	Sortowaneczko();
	void czytaj_dane();
	void przetworz_dane();
	void wyswietl_dane();
	~Sortowaneczko();
};

#endif //SORTOWANECZKO_H
