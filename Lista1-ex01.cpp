#include <iostream>

using namespace std;


main()
{
    int n1, n2, n3, n4, Media;

    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Digite o terceiro numero: ";
    cin >> n3;
    cout << "Digite o quarto numero: ";
    cin >> n4;

    Media = (n1 + n2 + n3 + n4) / 4;

    cout << "A media dos numeros eh " << Media;

}

