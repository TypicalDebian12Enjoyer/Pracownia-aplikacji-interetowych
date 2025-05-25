#include "funkcyjki.h"
#include "pole.h"
#include "pierwiastki.h"

void wybor(){
	char wybor = '0';

	std::cout << "[1] Pole prostokąta" << std::endl;
	std::cout << "[2] Pierwiastki trójmianu\n";
	//Miejsce na następne funckje
	std::cout << "[W] Wyjście z programu" << std::endl;
	std::cout << "Co wybierasz?" << std::endl;
	std::cin >> wybor;
	std::cout << std::endl;

	//Tutaj lista obiektów potrzebna do switcha bo okazuje się że nie można w caseach w switchu inicjować ani nowych obiektów ani zmiennych :) Kocham switcha
	Prostokacik Krajewski;
	Trojmianek Bartus;

	switch(wybor){
		case '1':
			Krajewski.czytaj_dane();
			Krajewski.przetworz_dane();
			Krajewski.wyswietl_wynik();
			
			wybor_po_zadaniu();
			break;
		case '2':
			Bartus.czytaj_dane();
			Bartus.przetworz_dane();
			Bartus.wyswietl_wynik();

			wybor_po_zadaniu();
		case 'W':
			return;
		default:
			std::cout << "Z****e";
			break;
	}
}

void wybor_po_zadaniu(){
	char wyborek = '0';
	std::cout << std::endl << "[1] Powrót do menu głównego" << std::endl;
	std::cout << "[W] Wyjście z programu" << std::endl;
	std::cout << "Co wybierasz?" << std::endl;
	std::cin >> wyborek;

	if(wyborek == '1'){
		wybor();
	}
	else{
		return;
	}
}
