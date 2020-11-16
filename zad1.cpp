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





plik.open("dane.txt", ios::in);

if(plik.good() == false)
{
    cout << "Podany plik nie istnieje!" << endl;
    exit(0);
}

string linia;
int nrLinii = 1;


while(!plik.eof())
{
getline( plik, linia );


    switch(nrLinii)
    {
        case 1: imie = linia; break;
        case 2: nazwisko = linia; break;
    }
    nrLinii++;
}



plik.close();

cout << imie << endl;
cout << nazwisko << endl;


    return 0;
}