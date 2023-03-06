#include <iostream>
using namespace std;

int main(){
    double angka[] = {12,18,20,22,24,26};

    double jumlah = 0;
    double hitung = 0;
    double ratarata = 0;

    cout << "Angka : ";

    for (const double &a : angka){
        cout << a << " ";
        jumlah += a;
        ++hitung;
    }

    cout << "\nJumlah = "<<jumlah << endl;
    cout << "hitumg = " << hitung << endl;
    ratarata = jumlah /hitung;
    cout << " Rata-Rata = "<< ratarata << endl;
}