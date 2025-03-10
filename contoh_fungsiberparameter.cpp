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

double hitungluas2(double a, double t){
    return 0,5 * a * t
}
void procedurOutput(){
    cout << "luas segitiga = " << hitungluas() << endl;
}

void procedurOutput2(){
    cout << "luas segitiga = " << hitungluas2(alas, tinggi) << endl;
}

int main(){
    procedurInput();
    procedurOutput();
    procedurOutput2();
}