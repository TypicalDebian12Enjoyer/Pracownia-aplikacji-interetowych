#ifndef TROJMIANEK_H
#define TROJMIANEK_H
#include <iostream>
#include <cmath> //Potrzebny do pierwiastkowania i potęgowania i zaokrąglania bo nie chciało mi się tworzyć zaokrąglania samemu po moich doświadczeniach z zaokrąglaniem funkcji matematycznych

class Trojmianek{
private:
	//int prec; //Precyzja liczb. Tak jak w zadaniu jest napisane aby przyjąć formę z 2 miejscami po przecinku. Będzie ilość inicjalizowana w konstruktorze. W ostatecznym rozrachunku to było bezużyteczne
	double a, b, c, delta, x1, x2;
public:
	Trojmianek();
	void czytaj_dane();
	void przetworz_dane();
	void wyswietl_wynik();
	~Trojmianek();
};


#endif //TROJMIANEK_H
