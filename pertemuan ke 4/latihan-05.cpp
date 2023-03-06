#include <iostream>
using namespace std;

int main(){
    int angka[2][3];

    cout << "Masukkan 6 angka : " << endl;

    for(int i = 0; i <2;i++ ){
        for(int j =0; j<3; j++){
            cin >> angka[i][j];
            }
    } 
    cout << "Angka yang diinputkan : " << endl;

    for (int i = 0; i<2;i++){
        for(int j =0; j<3; j++){
            cout <<"angka["<<i<<"]["<<j<<"] :"<< angka[i][j]<<endl;
    } 
}
}