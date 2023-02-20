#include <iostream>

using namespace std;

int main(){
    cout<< endl;
    int angka;
    cout << "masukkan bilangan bulat = ";
    cin >> angka;
    // outer IF
    if (angka != 0 ){
        // inner if 
        if (angka > 0 ){
        cout << "bilangan bulat positif yang masukkan adalah "<< angka << endl;
        }
        // inner else
        else{
        cout << "bilangan bulat nrgatif yang masukkan adalah "<< angka << endl;
        }
    }
    // outer IFF
    else {
        cout << "kamu memasukkan angka 0 dan bukan positif dan negatif. " << endl;
    }
}