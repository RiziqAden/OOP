#include <iostream>

using namespace std;

//fungsi prototype
int tambah(int,int);

int main(){
    int jumlah;

    jumlah = tambah(90,90);
    cout << "penambahan angka 90 + 90 = "<< jumlah << endl;

}

int tambah(int x, int y){
    return(x+y);
}