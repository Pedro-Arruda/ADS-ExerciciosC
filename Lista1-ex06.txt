#include <iostream>

using namespace std;

int main()
{
    char nome_1[20], nome_2[20], nome_3[20];
    float nota_1, nota_2, nota_3;

    cout << "Digite o nome do primeiro aluno: " <<endl;
    cin >> nome_1;
    cout << "Digite a nota do primeiro aluno: " <<endl;
    cin >> nota_1;

    cout << "Digite o nome do segundo aluno: " <<endl;
    cin >> nome_2;
    cout << "Digite a nota do segundo aluno: " <<endl;
    cin >> nota_2;

    cout << "Digite o nome do terceiro aluno: " <<endl;
    cin >> nome_3;
    cout << "Digite a nota do terceiro aluno: " <<endl;
    cin >> nota_3;

    cout << nome_1 << "\t" << nota_1 <<endl;
    cout << nome_2 << "\t" << nota_2 <<endl;
    cout << nome_3 << "\t" << nota_3 <<endl;
}
