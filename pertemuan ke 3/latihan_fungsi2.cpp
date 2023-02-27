#include <iostream>

using namespace std;

void tampilanAngka(int a1, float a2){
    cout << "Angka bilangan bulat adalah " << a1 << endl;
    cout << "Angka bilangan desimal adalah " << a2;
}

int main(){
    int a1 = 6;
    double a2 = 9.7;

    tampilanAngka(a1,a2);
}