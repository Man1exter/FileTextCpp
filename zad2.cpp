#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


using namespace std;


struct Student{
    char imie[50];
    char nazwisko[50];
    int nrAlbumu;
    int wiek;
    float srOcen;
};



int main(){



Student dane;


cout << "Podaj imie:" << endl;
cin >> dane.imie;
cout << "Podaj nazwisko:" << endl;
cin >> dane.nazwisko;
cout << "Podaj nrAlbumu:" << endl;
cin >> dane.nrAlbumu;
cout << "Podaj wiek:" << endl;
cin >> dane.wiek;
cout << "Podaj srednia ocen:" << endl;
cin >> dane.srOcen;


cout << "Student " << dane.imie  <<" "<< dane.nazwisko << " o numerze albumu: " << dane.nrAlbumu << " ma lat " << dane.wiek << " ma srednia ocen rowna: " << dane.srOcen << endl;



ofstream ofs("dane.bin", ios::binary);

Student* student = new Student;

student->imie;
student->nazwisko;
student->nrAlbumu;
student->wiek;
student->srOcen;

ofs.write((char*)(student), sizeof(Student));
ofs.close();

 delete student;



ifstream ifs("dane.bin", ios::binary);

char* temp = new char[sizeof(Student)];
ifs.read(temp, sizeof(Student));

Student* student2 = (Student*)(temp);

cout << "Student " << dane.imie  <<" "<< dane.nazwisko << " o numerze albumu: " << dane.nrAlbumu << " oraz ma lat " << dane.wiek << " ma srednia ocen rowna: " << dane.srOcen <<"  --------Potwierdzenie do zapisu i odczytu!-------" << endl;

delete student;




    return 0;
}


