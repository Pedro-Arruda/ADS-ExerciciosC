#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3 , media, conceito;
    cout << "Digite a primeira nota: " << endl;
    cin >> n1;
    cout << "Digite a segunda nota: " << endl;
    cin >> n2;
    cout << "Digite a terceira nota: " << endl;
    cin >> n3;

    media = (n1 + n2 + n3) / 3;

    if ( media >= 8) {
        cout << "Sua media eh " << media << " e seu conceito eh A";

    }
    if (media >= 5 && media < 8) {
        cout << "Sua media eh " << media << " e seu conceito eh B";

    }
    if ( media < 5) {
        cout << "Sua media eh " << media << " e seu conceito eh C";

    }

}
