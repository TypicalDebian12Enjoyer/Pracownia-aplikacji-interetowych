#ifndef PIERWIASTKI_H
#define PIERWIASTKI_H
#include <iostream>
#include <cmath>

class Trojmianek{
private:
	int prec; //Precyzja liczb. Tak jak w zadaniu jest napisane aby przyjąć formę z 2 miejscami po przecinku. Będzie ilość inicjalizowana w konstruktorze
	double a, b, c, delta, x1, x2;
public:
	Trojmianek();
	void czytaj_dane();
	void przetworz_dane();
	void wyswietl_wynik();
	~Trojmianek();
};


#endif //PIERWIASTKI_H
