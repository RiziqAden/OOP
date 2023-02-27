#include <iostream>

using namespace std;

//
float nilai(float angka){
    if(angka < 0.0 )
    angka = -angka;
    return angka;
}

int nilai(int angka){
    if (angka < 0)
    angka = -angka;
    return angka;
}
int main(){
    cout << "nilai dari -6 = " << nilai(-6) << endl;
    cout << "nilai dari 6.7 = " << nilai(6.7f) << endl;
}