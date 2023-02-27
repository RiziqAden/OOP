#include <iostream>

using namespace std;

void uji(){

    static int angka = 0;
    ++angka;

    cout << angka << endl;
}

int main(){
    uji();
    uji();
    uji();



}