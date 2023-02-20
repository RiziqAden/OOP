#include <iostream>

using namespace std;

int main()
{
    char operasi;
    float angka1, angka2;
    cout << "\nMasukan Operator yang akan di jalankan (+, -, *, /) :";
    cin >> operasi;
    cout << "Masukan 2 angka : " << endl;
    cin >> angka1 >> angka2;

    switch (operasi)
    {
    case '+':
        cout << angka1 << " + " << angka2 << " = " << angka1 + angka2;
        break;
    case '-':
        cout << angka1 << " - " << angka2 << " = " << angka1 - angka2;
        break;
    case '*':
        cout << angka1 << " * " << angka2 << " = " << angka1 * angka2;
        break;
    case '/':
        cout << angka1 << " / " << angka2 << "=" << angka1 / angka2;
        break;
    default:
        cout << "Operasi yang di inputkan salah";
        break;
    }
}