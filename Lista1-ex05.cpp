#include <iostream>

using namespace std;

main()
{
    int b, h, a;

    cout << "Digite a base do triangulo: ";
    cin >> b;
    cout << "Digite a altura do triangulo: ";
    cin >> h;

    a = b * h / 2;

    cout << "A area do triangulo corresponde a " << a;
}
