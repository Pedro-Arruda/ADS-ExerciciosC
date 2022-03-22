#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cout << "Digite o primeiro valor: " << endl;
    cin >> n1;
    cout << "Digite o segundo valor: " << endl;
    cin >> n2;

    if (n1 > n2) {
        cout << "O maior valor eh " << n1;

    }if (n2 > n1) {
        cout << "O maior valor eh " << n2;
    }
}
