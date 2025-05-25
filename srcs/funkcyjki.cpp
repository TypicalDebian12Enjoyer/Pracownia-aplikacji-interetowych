#include "funkcyjki.h"

void wybor(){ //Funkcja obsługująca menu główne
	char wybor = '0';

	//W połowie projektu przypomniałem sobie że coś takiego jak \n istnieje i się skapłem jakie to jest przyjemne i wszedzie zmieniłem :3 bo załkiem estetycznie i schludnie to w kodzie wygląda
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
	//Oczywiście nazwy obiektów przypadkowe

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
			std::cout << "Bye\n";
			return;
		default:
			break;

	//Tak po prawdzie to nigdzie tu nie musaiłbym breaka dodawać bo nie ma takiego przypadku żeby on musiał zadziałać ale wygląda to na dobrą praktykę
	}
}

void wybor_po_zadaniu(){ //Funkcja obsługująca podmenu główne po zakończeniu jakiegoś zadania
	char wyborek = '0'; //Inicjalizacja nowych zmiennych do dobra praktyka 🤓☝
	std::cout << std::endl << "[1] Powrót do menu głównego\n";
	std::cout << "[W] Wyjście z programu\n";
	std::cout << "Co wybierasz?\n";
	std::cin >> wyborek;

	if(wyborek == '1'){
		wybor(); //Powrót do głównego menu
	}
	else{
		std::cout << "Bye\n";
		return;
	}
}
