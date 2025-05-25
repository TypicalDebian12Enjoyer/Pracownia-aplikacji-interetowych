#include "pole.h"

Prostokacik::Prostokacik(){
	a = new double;
	b = new double;
	P = new double;
}

void Prostokacik::czytaj_dane(){
	std::cout << "Program oblicza pole prostokąta" << std::endl;
	std::cout << "Podaj bok a." << std::endl;
	std::cin >> *a;
	std::cout << "Podaj bok b." << std::endl;
	std::cin >> *b;
}

void Prostokacik::przetworz_dane(){
	*P = *a * *b;
}

void Prostokacik::wyswietl_wynik(){
	std::cout << "Pole prostokąta o boku a = " << *a << " i boku b = " << *b << " wynosi " << *P << std::endl;
}

Prostokacik::~Prostokacik(){
	delete a;
	delete b;
	delete P;

	a = nullptr;
	b = nullptr;
	P = nullptr;
}
