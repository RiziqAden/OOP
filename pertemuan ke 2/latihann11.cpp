#include <iostream>

using namespace std;

int main(){
    int angka;
    int jumlah = 0 ; 

    while (true){
        cout << "masukan angka : ";
        cin >> angka;

        if (angka < 0 ){
            break;
        } 
        
        jumlah += angka;
    }
    cout << "Jumlah adalah "<< jumlah << endl;
}
