#include "pole.h"

Poleczko::Poleczko(){
	a = nullptr;
	b = nullptr;
	P = nullptr;
}

void Poleczko::czytaj_dane(){
	std::cout << "Podaj bok a." << std::endl;
	std::cin >> *a;
	std::cout << "Podaj bok b." << std::endl;
	std::cin >> *b;
}

void Poleczko::przetworz_dane(){
	*P = *a * *b;
}

void Poleczko::wyswietl_wynik(){
	std::cout << "Pole prostokąta o boku a = " << *a << " i boku b = " << *b << " wynosi " << *P;
}

Poleczko::~Poleczko(){
	delete a;
	delete b;
	delete P;

	a = nullptr;
	b = nullptr;
	P = nullptr;
}
