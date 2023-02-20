#include <iostream>

using namespace std;

int main()
{
    char simbol;
    int lebar;
    int tinggi;

    cout << "Masukan  simbol yang digunakan : ";
    cin >> simbol;

    cout << "Masukan  lebar yang digunakan : ";
    cin >> lebar;

    cout << "Masukan  tinggi yang digunakan : ";
    cin >> tinggi;

    for (int i = 0; i < tinggi; i++){
        for (int j = 0; j < lebar; j++){
            cout << simbol;
        }
        cout << endl;
    }
}