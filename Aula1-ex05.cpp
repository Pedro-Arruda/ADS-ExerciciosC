#include <iostream>

using namespace std;

main()
{
    float n1, n2, media;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota:  ";
    cin >> n2;

    n1 = n1 * 0.6;
    n2 = n2 * 0.4;
    media = n1 + n2;

    cout << "Sua media eh " << media;

}
