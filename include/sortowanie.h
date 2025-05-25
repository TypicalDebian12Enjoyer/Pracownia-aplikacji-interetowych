#ifndef SORTOWANECZKO_H
#define SORTOWANECZKO_H
#include <cstdlib>
#include <iostream>

class Sortowaneczko{
private:
	static constexpr int n = 6; //Dowiedziałem się dzięki temu projektowi że istnieje coś takiego jak constexpr i w skrócie różni się tym że const mówi kompilatorowi że nie można zmieniać tej zmiennej prrzez co może ją zoptymalizować i nie pozwolić użytkownikowi/programiście jej zmienić a constexpr deklaruje zmienną jako podatną do użytku w logicę stałych liczb przez co moze być użyty np poniżej
	int tablicunia[n];
	int pokazowka[n]; //Kopia nieposortowanej tablicy wyżej użytej do wyświetlenia w wyswietl_dane()
public:
	Sortowaneczko();
	void czytaj_dane();
	void przetworz_dane();
	void wyswietl_dane();
	~Sortowaneczko();
};

#endif //SORTOWANECZKO_H
