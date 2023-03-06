#include <iostream>
using namespace std;

int main(){
    int angka[5];
    cout << "Masukan 5 angka : " << endl;

    for (int i = 0; i<5;i++){
        cin >> angka[i];
    }
    cout << "angka yang diinputkan : " << endl;

    for(int a=0;a<5;a++){
        cout << angka[a]<<" ";
    }
}