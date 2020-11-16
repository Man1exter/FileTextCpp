#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main(){

string imie,nazwisko;

fstream plik;

cout<< "Podaj swoje imie: " << endl;
cin >> imie;
cout << "Podaj swoje nazwisko: " << endl;
cin >> nazwisko;

plik.open( "dane.txt", ios::out | ios::app );

plik << imie << endl;
plik << nazwisko << endl;


cout << "Dane zostaly zapisane!" << endl;
plik.close();

    return 0;
}