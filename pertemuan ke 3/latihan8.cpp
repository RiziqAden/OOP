#include <iostream>

using namespace std;

void tampilan(int angka1, double angka2){
    cout << "angka bilangan bulat = "<< angka1;
    cout << " dan bilangan desimal = " << angka2 << endl;

}

void tampilan(double angka){
    cout<<"angka desimal = " << angka << endl;

}
void tampilan(int angka ){
    cout << "angka bilangan bulat = " << angka << endl;
}

int main(){
    cout << endl;
    int x = 2;
    double y = 2.5;

    tampilan(x);
    tampilan(y);
    tampilan(x,y);
    cout << endl;

}