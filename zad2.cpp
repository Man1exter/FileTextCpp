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


Osoba uczniowie[5];

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
    cin >> uczniowie[i].wiek;
}

cout << endl;



    return 0;
}


