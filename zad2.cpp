#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

struct Osoba{

    string imie;
    string nazwisko;
    int nrAlbumu;
    float srOcen;
    int wiek;
};

int main(){

fstream plik;

plik.open( "studenci.bin", ios::out | ios::binary);

Osoba uczniowie[5];

if(plik.is_open()){


for(int i = 0; i < 5; i++){
    cout << "podaj imie i nazwisko " << i+1 << " ucznia: " ;
    cin >> uczniowie[i].imie;
    cin >> uczniowie[i].nazwisko;
}

cout << endl;

for(int i = 0; i < 5; i++){
    cout << "podaj numer albumu " << uczniowie[i].imie <<" "<< uczniowie[i].nazwisko <<" ";
    cin >> uczniowie[i].nrAlbumu;
}

cout << endl;

for(int i = 0; i < 5; i++){
    cout << "podaj wiek " << uczniowie[i].imie <<" "<< uczniowie[i].nazwisko <<" ";
    cin >> uczniowie[i].wiek;
}

cout << endl;

for(int i = 0; i < 5; i++){
    cout << "podaj srednia ocen: " << uczniowie[i].imie <<" "<< uczniowie[i].nazwisko <<" ";
    cin >> uczniowie[i].srOcen;
}

cout << endl;

for(int i = 0; i < 5; i++){
plik << uczniowie[i].imie <<" "<< uczniowie[i].nazwisko <<" "<< uczniowie[i].wiek <<" "<< uczniowie[i].nrAlbumu <<" "<< uczniowie[i].srOcen << endl;
} 

plik.write((const char *) &uczniowie, sizeof uczniowie);

plik.close();

} else {
    cout << "jakis blad" << endl;
}


plik.open( "studenci.bin", ios::in | ios::binary );


if(plik.is_open()){
	plik.read((char *) &uczniowie , sizeof uczniowie);

    plik.close();
} else {
    cout << "jakis blad" << endl;
}

    return 0;
}


