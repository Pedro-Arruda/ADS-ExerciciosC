#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3;
    cout << "Digite o primeiro valor: " << endl;
    cin >> n1;

    cout << "Digite o segundo valor: " << endl;
    cin >> n2;

    cout << "Digite o terceiro valor: " << endl;
    cin >> n3;

    if (n1 > n2 && n1 > n3) {
        if (n2 > n3) {
            cout << "A ordem dos valores eh " << n3 << " " << n2 << " " << n1;
        }
        else if (n3 > n2) {
            cout << "A ordem dos valores eh " << n2 << " " << n3 << " " << n1;
        }
    }

    if (n2 > n1 && n2 > n3) {
        if (n1 > n3) {
            cout << "A ordem dos valores eh " << n3 << " " << n1 << " " << n2;
        }
        else if (n3 > n1) {
            cout << "A ordem dos valores eh " << n1 << " " << n3 << " " << n2;
        }
    }

    if (n3 > n1 && n3 > n2) {
        if (n1 > n2) {
            cout << "A ordem dos valores eh " << n2 << " " << n1 << " " << n3;
        }
        else if (n2 > n1) {
            cout << "A ordem dos valores eh " << n1 << " " << n2 << " " << n3;
        }
    }
}