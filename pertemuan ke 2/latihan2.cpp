#include <iostream>

using namespace std;

int main(){
    int angka;
    cout << "masukkan bilangan bulat = ";
    cin >> angka;

    if (angka >= 0 ){
        cout << "bilangan bulat positif yang masukkan adalah "<< angka << endl;
    }
    else {
        cout << "bilangan bulat nrgatif yang masukkan adalah "<< angka << endl;
    }
}