#include <iostream>

using namespace std;

main()
{
    int salario, salario_corrigido;
    cout<< "Digite o salario do funcionario: ";
    cin>>salario;
    salario_corrigido = salario * 1.25;
    cout<< "O salario do funcionario corrigido equivale a " << salario_corrigido;
}
