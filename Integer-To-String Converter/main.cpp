#include <iostream>
#include <string>
//#include <conio.h>
//#include <stdlib.h>
//#include <cctype>
//#include <algorithm>

using namespace std;



string konwersja(int liczba)
{
	if ((liczba < -9999) || (liczba > 9999))
		return "Podana liczba wykracza poza dozwolony zakres";

	string tablica[4][9] = { "Tysiac", "Dwa tysiace", "Trzy tysiace", "Cztery tysiace", "Piec tysiecy", "Szesc tysiecy", "Siedem tysiecy", "Osiem tysiecy", "Dziewiec tysiecy",
		" sto ", " dwiescie ", " trzysta ", " czterysta ", " piecset "," szescset ", " siedemset ", " osiemset ", " dziewiecset ",
		" dziesiec ", " dwadziescia ", " trzydziesci ", " czterdziesci ", " piecdziesiat ", "szescdziesiat ", " siedemdziesiat ", " osiemdziesiat ", " dziewiecdziesiat ",
		" jeden ", " dwa ", " trzy ", " cztery ", " piec ", " szesc ", " siedem ", " osiem ", " dziewiec " };



	string string_zwracany;

	if (liczba < 0)
	{
		string_zwracany += '-';
		liczba *= -1;
	}

	int pomocnicza = liczba;
	int cz_calkowita = 0;
	int reszta = liczba % 1000;
	int dzielnik = 1000;
	int rzad_tablicy = 0;

	while (dzielnik)
	{
		cz_calkowita = pomocnicza / dzielnik;

		if (cz_calkowita > 0)
		{
			string_zwracany += tablica[rzad_tablicy][cz_calkowita - 1];
		}

		reszta = pomocnicza % dzielnik;
		pomocnicza = reszta;
		dzielnik /= 10;
		rzad_tablicy++;
	}

	return string_zwracany;
}


int main()
{

	cout << konwersja(1247);


}



