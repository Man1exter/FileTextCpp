#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;



int main(){

string imie,nazwisko;

fstream plik;

cout<< "Podaj swoje imie: ";
cin >> imie;
cout << "Podaj swoje nazwisko: ";
cin >> nazwisko;

plik.open( "dane.txt", ios::out | ios::app );

plik << imie << endl;
plik << nazwisko << endl;


cout << "Dane zostaly zapisane!" << endl;
plik.close();





// odczyt z pliku i pokazanie w konsoli: ... 


plik.open( "dane.txt", ios::in );


if(plik.is_open())
	{
		char wiersz[10000];
		while(plik.getline(wiersz,10000)) 
		{
			cout<< wiersz <<endl; 
			
		}
	}



    return 0;
}