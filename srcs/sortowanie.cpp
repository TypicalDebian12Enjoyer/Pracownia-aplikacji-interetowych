#include "sortowanie.h"

Sortowaneczko::Sortowaneczko(){}

void Sortowaneczko::czytaj_dane(){
	for(int i = 0; i < n; i++){
		tablicunia[i] = -1000 + rand() % 2001;
		pokazowka[i] = tablicunia[i];
	}
}

void Sortowaneczko::przetworz_dane(){
	for(int i = 0; i < n; i++){
		
		bool podmieniony = false;

		for(int j = 0; j < n; j++){
			if(tablicunia[j] > tablicunia[j + 1]) {
				int tymczas = tablicunia[j];
				tablicunia[j] = tablicunia[j + 1];
				tablicunia[j + 1] = tymczas;
				podmieniony = true;
            		}
		}

		if(!podmieniony){
			break;
		}
	}
}

void Sortowaneczko::wyswietl_dane(){
	std::cout << "Liczby nieposortowane:\n";
	for(int i = 0; i < n; i++){
		std::cout << pokazowka[i] << " ";
	}

	std::cout << "\n\nLiczby posortowane:\n";
	for(int j = 0; j < n; j++){
		std::cout << tablicunia[j] << " ";
	}
}

Sortowaneczko::~Sortowaneczko(){}
