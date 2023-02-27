#include <iostream>

using namespace std;

void tampil(char = '*', int = 3);

int main(){
    int hitung = 5;

    cout << "tanpa pernyataan = ";
    tampil();

    cout << " pernyataan pertama diganti dengan simbol # = ";
    tampil('#');

    cout << " pernyataan kedua bener = ";
    tampil('$', hitung);

}

void tampil(char a, int hitung){
    for(int i = 1; i <= hitung; i++)
    {
        cout << a;
    }
    cout << endl;
}