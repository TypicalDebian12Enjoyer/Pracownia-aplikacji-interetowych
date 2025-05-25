#include "pierwiastki.h"

Trojmianek::Trojmianek(){}

void Trojmianek::czytaj_dane(){
	std::cout << "Program oblicza pierwiastki równania kwadratowego dla dowolnych współczynników a, b, c." << std::endl;
	std::cout << "Podaj a." << std::endl;
	std::cin >> /*std::setprecision(prec) >>*/ a;
	std::cout << "Podaj b." << std::endl;
	std::cin >> /*std::setprecision(prec) >>*/ b;
	std::cout << "Podaj c." << std::endl;
	std::cin >> /*std::setprecision(prec) >>*/ c;

	while(a == 0){
		std::cout << "Podano wzór dwumianu zamiast trójmianu. Podaj a.\n";
		std::cin >> /*std::setprecision(prec) >>*/ a;
	}
}

void Trojmianek::przetworz_dane(){
	//std::cout.precision(3);

	delta = (pow(b, 2) - (4 * a * c));

	x1 = ((-1 * b) + sqrt(delta)) / (2 * a);
	x2 = ((-1 * b) - sqrt(delta)) / (2 * a);

	if(x1 > x2){ //Ustawiam pierwiatki w kolejności rosnącej tak aby było estetycznie
		double temp = 0;
		temp = x1;
		x1 = x2;
		x2 = temp;
	}

	x1 = std::round(x1 * 100.0) / 100.0;
	x2 = std::round(x2 * 100.0) / 100.0;
}

void Trojmianek::wyswietl_wynik(){
	std::cout << "Dla podanych liczb:" << std::endl;
	std::cout << "a = " << a << ",\n";
	std::cout << "b = " << b << ",\n";
	std::cout << "c = " << c << "\n";
	

	if(delta < 0){
		std::cout << "trójmian nie posiada odpowiedzi na zbiorze liczb rzeczywistych";
	}
	else if(x1 == x2){
		std::cout << "trójmian ma pierwiastek podwójny:\n";
		std::cout << "x = " << x1 << ".\n";
	}
	else{
		std::cout << "trójmian ma dwa pierwiastki:\n";
		std::cout << "x1 = " << x1 << ".\n";
		std::cout << "x2 = " << x2 << ".\n";
	}

}

Trojmianek::~Trojmianek(){}
