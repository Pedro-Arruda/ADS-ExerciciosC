#include <iostream>

using namespace std;

int main()
{
    int codigo, preco, quantidade;
    float total;

    cout << "Digite o codigo do consumidor: " << endl;
    cin >> codigo;
    cout << "Digite o preco do kwh: " << endl;
    cin >> preco;
    cout << "Digite a quantidade de kwh consumido: " << endl;
    cin >> quantidade;

    total = preco * quantidade;

    if (total < 11.20) {
        total = 11.20;
    }

    cout << "O codigo do consumidor eh " << codigo << " e o total a pagar eh " << total;
}
