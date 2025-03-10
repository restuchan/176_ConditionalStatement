#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput() {
   cout << "masukkan Nilai alas : ";
   cin >> alas;

   cout << "masukkan Nilai tinggi : ";
   cin >> tinggi;
}

double hitungluas2(double a, double t){
    return 0,5 * a * t
}

string ukuransegitiga(double l){
    //jika luas > 60
    if (l > 60)
    return "besar";
}
    else{
       return "kecil";
    }
void procedurOutput2(){
    cout << "luas segitiga = " << ukuransegitiga(hitungluas2 (alas, tinggi)) << endl;
}

int main(){
    procedurInput();
    procedurOutput2();
}