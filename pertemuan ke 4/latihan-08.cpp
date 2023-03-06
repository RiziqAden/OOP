#include <iostream>
using namespace std;

void tampil(int n[3][2]){
    cout << "^^Tampilkan Array^^" << endl;
    for(int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            cout <<"angka["<<i<<"]["<<j<<"] :"<< n[i][j]<<endl;
        }
    }
}
int main(){
    int array[3][2]= {
        {1,2},
        {3,4},
        {5,6}
    };
    tampil(array);
}