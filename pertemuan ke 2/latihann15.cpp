#include <iostream>

using namespace std;

int main(){
    float angka, rata_rata, jumlah = 0.0;
    int i, n;

    cout << "maksimal angka yang akan di masukkan = ";
    cin >> n;
    for (i = 1; i <= n ; i++){
        cout << "masukkan n " << i << ": ";
        cin >> angka;
        
        if (angka < 0.0 ){
            goto lompatan;
        }
        jumlah  +=  angka;
    }
    lompatan:
    rata_rata = jumlah / (i-1);
    cout << "\nRata-rata = " << rata_rata;
}