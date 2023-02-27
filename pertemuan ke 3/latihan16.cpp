#include <iostream>

using namespace std;

double tambah(double angka1, double angka2){
    double hasil = angka1 + angka2;
    return hasil;
}

int main(){
    double angka1;
    double angka2;

    cout << "masukkan angka 1 : "<< endl;
    cin >> angka1;
    cout << "masukkan angka 2 : "<< endl;
    cin >> angka2;
    
    double hasil = tambah(angka1, angka2);
    cout << "hasil perhitungan : " << hasil << endl;
}