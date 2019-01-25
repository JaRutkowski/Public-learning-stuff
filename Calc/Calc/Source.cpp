#include <iostream>
#include <string>

#include "funkcje.h"


int main()
{
	while (true)
	{
		int kod_znaku = wczytajznak();
		if (kod_znaku == 113)
		{
			goto stop;
		}
		else
		{
			int first_variable = wczytaj1zmienna();
			int second_variable = wczytaj2zmienna();
			wybor(kod_znaku, first_variable, second_variable);
		}
	}
stop:
	std::cout << "podales znak \"q\"" << std::endl;

	std::cin.get();
	std::cin.get();
	

	return 0;
}


