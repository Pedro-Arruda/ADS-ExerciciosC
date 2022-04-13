#include <iostream>

using namespace std;


main()
{
    float n1, n2, n3, peso1, peso2, peso3, somaPesos, Media;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite o peso da nota: ";
    cin >> peso1;

    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite o peso da nota: ";
    cin >> peso2;

    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << "Digite o peso da nota: ";
    cin >> peso3;

    n1 *= peso1;
    n2 *= peso2;
    n3 *= peso3;
    somaPesos = peso1 + peso2 + peso3;
    
    Media = (n1 + n2  + n3) / somaPesos;

    cout << "A media dos numeros eh " << Media;
}

