#include <iostream>

class Prostokacik{
private:
	double  *a, *b, *P;
public:
	Prostokacik();
	void czytaj_dane();
	void przetworz_dane();
	void wyswietl_wynik();
	~Prostokacik();
};
