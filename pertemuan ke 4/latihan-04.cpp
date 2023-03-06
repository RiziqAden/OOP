#include <iostream>
using namespace std;

int main(){
    int array[3][2] = {{1,-10},
                        {5,9},
                        {7,6}};

    for (int i = 0; i<3; i++){
        for (int j = 0 ; j <2; j++){
            cout << "Array[ "<<i<<" ] [ " << j << " ] = "<<array[i][j] << endl;
        }
    }
    cout <<"\n" ;
    for (int i = 0; i<3; i++){
        for (int j = 0 ; j <2; j++){
    cout << array[i][j] << " ";
    }
    }
}