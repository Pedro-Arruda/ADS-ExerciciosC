#include <iostream>

using namespace std;

main()
{
    float Tf, Tc;

    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> Tf;

    Tc = 0.555 * (Tf-32);

    cout << "A temperatura corresponde a " << Tc << " graus Celsius ";

}
