#include <iostream>

using namespace std;

int main(){
    int angka;
    cout << endl;
    
    cout << "masukkan bilangan bulat = ";
    cin >> angka;

    if (angka >= 0 ){
        cout << "bilangan bulat positif yang masukkan adalah "<< angka << endl;
    }
    else if (angka < 0) {
        cout << "bilangan bulat negatif yang masukkan adalah "<< angka << endl;
    }
    else {
        cout << "kamu memasukkan angka 0. " << endl;
    }
}