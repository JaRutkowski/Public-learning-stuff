#include <iostream>
#include <string>

#include "funkcje.h"

int wczytajznak()
{
	std::cout << "Podaj znak: " << std::endl;
	char znak;
	std::cin >> znak;
	int kod_znaku = (int)znak;
	return kod_znaku;
}

int wczytaj1zmienna()
{
	std::cout << "Podaj I zmienna: " << std::endl;
	int first_variable;
	std::cin >> first_variable;
	return first_variable;
}

int wczytaj2zmienna()
{
	std::cout << "Podaj II zmienna: " << std::endl;
	int second_variable;
	std::cin >> second_variable;
	return second_variable;
}

void wybor(int kod_znaku, int first_variable, int second_variable)
{
	switch (kod_znaku)
	{
	case 42:
	{
		std::cout << "wybrales mnozenie" << std::endl;
		int result = mnozenie(first_variable, second_variable);
		std::cout << "wynik: " << result << std::endl;
		break;
	}
	case 43:
	{
		std::cout << "wybrales dodawanie" << std::endl;
		int result=sumowanie(first_variable, second_variable);
		std::cout << "wynik: " << result << std::endl;
		break;
	}
	case 45:
	{
		std::cout << "wybrales odejmowanie" << std::endl;
		int result = odejmowanie(first_variable, second_variable);
		std::cout << "wynik: " << result << std::endl;
		break;
	}
	default:
	{
		std::cout << "sprobuj jeszcze raz, zly znak" << std::endl;
	}	
	}
	return;
}

int sumowanie(int first_variable, int second_variable)
{
	int result = first_variable + second_variable;
	return result;
}
int odejmowanie(int first_variable, int second_variable)
{
	int result = first_variable - second_variable;
	return result;
}
int mnozenie(int first_variable, int second_variable)
{
	int result = first_variable * second_variable;
	return result;
}

