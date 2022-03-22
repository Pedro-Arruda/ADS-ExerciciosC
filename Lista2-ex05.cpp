#include <iostream>

using namespace std;

int main()
{
    float salario, salario_ajustado;
    cout << "Digite o salario do jogador: " << endl;
    cin >> salario;

    if (salario < 1000) {
        salario_ajustado = salario * 1.2;
    }
    if (salario > 1000 && salario < 5000) {
        salario_ajustado = salario * 1.1;
    }
    if (salario > 5000) {
        salario_ajustado = salario * 1.0;
    }

    cout << "O salario ajustado equivale a " << salario_ajustado;
}
