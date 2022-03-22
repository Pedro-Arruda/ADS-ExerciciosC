#include <iostream>

using namespace std;

int main()
{
    float altura, peso, imc;
    cout << "Digite a altura: " << endl;
    cin >> altura;
    cout << "Digite o peso: " << endl;
    cin >> peso;

    imc = peso / (altura* altura);

    cout << "Seu imc eh " << imc << endl;

    if (imc < 26) {
        cout << "Seu grau de obesidade eh normal ";
    }

    if (imc > 26 && imc < 30) {
        cout << "Seu grau de obesidade eh obeso ";
    }

    if (imc > 30) {
        cout << "Seu grau de obesidade eh obeso morbido ";
    }
}
