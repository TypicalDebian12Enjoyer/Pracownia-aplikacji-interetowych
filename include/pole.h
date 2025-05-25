#ifndef PROSTOKACIK_H
#define PROSTOKACIK_H
#include <iostream>
#include <iomanip> //Użyłem tego do setprecision bo wydaje mi się że oto chodziło w "Dla tych trzech zmiennych należy przyjąć format wyświetlania ich na ekranie z dwoma miejscami po kropce."

class Prostokacik{
private:
	double  *a, *b, *P; //Użyłem wskaźników dla dodatkowej zabawy
public:
	Prostokacik();
	void czytaj_dane();
	void przetworz_dane();
	void wyswietl_wynik();
	~Prostokacik();
};

#endif //PROSTOKACIK_H
