#include <iostream>
using namespace std;

int main(){
    int angka[5] = {10, 11,12 ,13 ,14};
    cout << "1. menampilkan array angka menggunakan variabel kosnstanta: ";

    for (const int &a:angka){
        cout << a << " ";
    }

    cout << "\n2. Menampilkan array angka pakai cara biasa: ";

    for(int i = 0; i<5; i++){
        cout << angka[i] << " ";
    }
}