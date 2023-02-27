#include <iostream>

using namespace std;

int angka;

int& uji();
int main(){
    uji() = 6;

    cout<<angka;
}

int& uji(){
    return angka;
}