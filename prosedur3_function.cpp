#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput() {
   cout << "masukkan Nilai alas : ";
   cin >> alas;

   cout << "masukkan Nilai tinggi : ";
   cin >> tinggi;
}

void procedurHitungluas(){
   luas = 1/2 * alas * tinggi;
}

void procedurOutput(){
    cout << "luas segitiga = " << luas << endl;
}

int main(){

    procedurInput();
    procedurHitungluas();
    procedurOutput();
}