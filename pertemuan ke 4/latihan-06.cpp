#include <iostream>
using namespace std;


int main(){
    int array[2][3][2] = {
        {
            {1,2},
            {3,4},
            {5,6}
        },
        {
            {7,8},
            {9,10},
            {11,12}
        }
    };

    for (int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<2; k++){
            cout <<"array["<<i<<"]["<<j<<"]["<<k<<"] : "<< array[i][j][k]<<endl;

            }
        }
    }
}