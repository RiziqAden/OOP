#include <iostream>
#include <string>

using namespace std;

void tampil(char);
void tampil(string);

int main()
{
    string str1;
    char str[100];

    cout << "Masukkan sebuah kalimat : ";
    getline(cin, str1);

    cout << "Masukkan kalimat lain : ";
    cin.get(str, 100, '\n');

    tampil(str1);
    tampil(str);

}

void tampil(char s[])
{
    cout << "Kamu masukkan : " << s << endl;
}
void tampil(string s)
{
    cout << "Kamu masukkan : "<<s<<endl;
}