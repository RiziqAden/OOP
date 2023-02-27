#include <iostream>

using namespace std;

int a =15;
void uji();

int main(){
    ++a;

    //hasil
    cout << a << endl;
    uji();

}

void uji(){
    ++a;

    cout << a;
}