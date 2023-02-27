#include <iostream>

using namespace std;

void hai(string nama, int umur){
    cout << "Selamat datang di perkenalan fungsi c++ " << nama << endl;
    cout << "kamu berumur " << umur << "tahun " << endl;
}

int main(){
    string nama;
    int umur;

    cout << " masukkan nama kamu : " << endl;
    cin >> nama;
    cout << " masukkan umur kamu : " << endl;
    cin >> umur;

    hai(nama, umur);
}