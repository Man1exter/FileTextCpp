#include <iostream>
#include <fstream>

using namespace std;



int main(){


fstream plik;

plik.open( "dane.txt", ios::out, ios::app );


    return 0;
}