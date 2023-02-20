#include <iostream>

using namespace std;

int main()
{
    bool hasil; 
    
    hasil = (2 != 7)&&(2<7);
    cout << " (2 != 7) && (2<7) adalah " << hasil <<endl;
    
    hasil = (2 == 7)&&(2<7);
    cout << " (2 == 7) && (2<7) adalah " << hasil <<endl;
    
    hasil = (2 != 7)&&(2>7);
    cout << " (2 != 7) && (2>7) adalah " << hasil <<endl;
    
    hasil = (2 != 7)||(2<7);
    cout << " (2 != 7) || (2<7) adalah " << hasil <<endl;
    
    hasil = (2 == 7)||(2<7);
    cout << " (2 == 7) || (2<7) adalah " << hasil <<endl;
    
    hasil = (2 != 7)||(2>7);
    cout << " (2 != 7) || (2>7) adalah " << hasil <<endl;
    
    hasil = ! (2==7);
    cout<< " !(2==7) adalah "<< hasil << endl;
    
    hasil = ! (7==7);
    cout<< " !(7==7) adalah "<< hasil << endl;
    
}