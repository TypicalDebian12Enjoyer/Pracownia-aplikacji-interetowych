#include "funkcyjki.h"
#include "pole.h"
#include "pierwiastki.h"
#include "tablica.h"
#include "sortowanie.h"

void wybor(){
	char wybor = '0';

	std::cout << "[1] Pole prostokąta\n";
	std::cout << "[2] Pierwiastki trójmianu\n";
	std::cout << "[3] Macierz\n";
	std::cout << "[4] Sortowanie\n";
	std::cout << "[W] Wyjście z programu\n";
	std::cout << "Co wybierasz?\n";
	std::cin >> wybor;
	std::cout << "\n";

	//Tutaj lista obiektów potrzebna do switcha bo okazuje się że nie można w caseach w switchu inicjować ani nowych obiektów ani zmiennych :) Kocham switcha :)
	Prostokacik Krajewski;
	Trojmianek Bartus;
	Macierzyk Janas;
	Sortowaneczko Szymus;

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
			break;
		case '3':
			Janas.czytaj_dane();
			Janas.przetworz_dane();
			Janas.wyswietl_wynik();

			wybor_po_zadaniu();
			break;
		case '4':
			Szymus.czytaj_dane();
			Szymus.przetworz_dane();
			Szymus.wyswietl_dane();

			wybor_po_zadaniu();	
			break;	
		case 'W':
			return;
		default:
			break;
	}
}

void wybor_po_zadaniu(){
	char wyborek = '0';
	std::cout << std::endl << "[1] Powrót do menu głównego\n";
	std::cout << "[W] Wyjście z programu\n";
	std::cout << "Co wybierasz?\n";
	std::cin >> wyborek;

	if(wyborek == '1'){
		wybor();
	}
	else{
		return;
	}
}
