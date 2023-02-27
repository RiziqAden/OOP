#include <iostream>

using namespace std;

int faktor(int);

int main(){
    int n , hasil;
    cout << "masukan bilangan positif : ";
    cin >> n;

    hasil = faktor(n);
    cout << "faktor dari " << n << " = "<< hasil;
}

int faktor(int n ){
    if (n>1){
        return n*faktor(n-1);
    } else {
        return 1;
    }
}