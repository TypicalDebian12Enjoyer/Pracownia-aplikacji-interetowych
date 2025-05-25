#include "tablica.h"

Macierzyk::Macierzyk() : macierzyk() {}

void Macierzyk::czytaj_dane(){
	srand(time(NULL));

	for(int i = 0; i < 10; i++){
		macierzyk[i][i] = 1 + rand() % 9;
	}

}

void Macierzyk::przetworz_dane(){
	int suma = 0;
	for(int x = 0; x < 10; x++){
		for(int y = 0; y < 10; y++){
			suma += macierzyk[x][y];
		}
	}

	std::cout << "Suma elementów na przekątnej wynosi " << suma << ".\n";
}

void Macierzyk::wyswietl_wynik(){
	for(int x = 0; x < 10; x++){
		for(int y = 0; y < 10; y++){
			std::cout << macierzyk[x][y] << "  ";
		}
		std::cout << "\n";
	}
}

Macierzyk::~Macierzyk(){}
