#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void czytaj(string &imie, string &nazwisko){

cout<< "Podaj swoje imie: ";
cin >> imie;
cout << "Podaj swoje nazwisko: ";
cin >> nazwisko;

}

void zapisz(string imie, string nazwisko){

fstream plik;

plik.open( "dane.txt", ios::out | ios::app );

plik << imie <<" "<<  nazwisko << endl;


cout << "Dane zostaly zapisane!" << endl;
plik.close();

}

void odczyt(string imie, string nazwisko){
	fstream plik;

	plik.open( "dane.txt", ios::in );


if(plik.is_open())
	{
		char wiersz[10000];

		while(plik.getline(wiersz,10000)) 
		{
			cout<< wiersz << endl;
			
		}
	}
}

int main(){

string imie,nazwisko;

fstream plik;

czytaj(imie,nazwisko);
zapisz(imie,nazwisko);
odczyt(imie,nazwisko);

    return 0;
}