#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput() {
   cout << "masukkan Nilai alas : ";
   cin >> alas;

   cout << "masukkan Nilai tinggi : ";
   cin >> tinggi;
}

double hitungluas(){
    return 0,5 * alas * tinggi;
}

void procedurOutput(){
    cout << "luas segitiga = " << hitungluas() << endl;
}

int main(){

    procedurInput();
    procedurOutput();
}