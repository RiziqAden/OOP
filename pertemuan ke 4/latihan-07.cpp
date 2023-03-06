#include <iostream>
using namespace std;

void Tampil(int a[5]){
    cout << "-- tampilkan array --"<<endl;

    for(int i=0; i<5; i++){
        cout << "Angka " << i + 1 << " : "<< a[i] << endl;
    }
}

int main(){
    int angka[5] = {11,12,13,14,15};

    Tampil(angka);
}