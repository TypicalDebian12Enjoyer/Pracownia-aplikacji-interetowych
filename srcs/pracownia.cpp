#include "funkcyjki.h"

int main(){
	srand(time(NULL)); //Ziarno

	/* sprawdzenie zadania 1.
	Prostokacik Krajewski;
	Krajewski.czytaj_dane();
	Krajewski.przetworz_dane();
	Krajewski.wyswietl_wynik();
	*/

	std::cout << "Igor, Puścion, 2G\n";
	std::cout << "Technikum Elektroniczne nr 3 w Warszawie\n";
	std::cout << "Pm5\n";

	wybor(); //Wywołanie menu głównego
	return 0;
}
