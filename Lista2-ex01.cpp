#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    float diarias, consumo, total_diaria, subtotal, taxa, total_geral, valor_diaria;
    char nome [20], apartamento[1];

    cout << "Digite seu nome: " << endl;
    cin >> nome;

    cout << "Digite o tipo de apartamento: " << endl;
    cin >> apartamento;

    cout << "Digite o numero de diarias: " << endl;
    cin >> diarias;

    cout << "Digite o valor do consumo interno: " << endl;
    cin >> consumo;

    if (strcmp(apartamento, "a" ) == 0){
        valor_diaria = 150;
        total_diaria = (diarias * valor_diaria);
    }

    if (strcmp(apartamento, "b") == 0) {
        valor_diaria = 100;
        total_diaria = diarias * valor_diaria;
    }

    if (strcmp(apartamento, "c") == 0){
        valor_diaria = 75;
        total_diaria = diarias * valor_diaria;
    }

    if (strcmp(apartamento, "d") == 0){
        valor_diaria = 50;
        total_diaria = diarias * valor_diaria;
    }

    subtotal = total_diaria + consumo;

    taxa = subtotal * 0.1;

    total_geral = subtotal + taxa;

    cout << "Nome: " << nome <<endl;
    cout << "Apartamento: " << apartamento <<endl;
    cout << "Numero de diarias: " << diarias <<endl;
    cout << "Valor da Diaria: " << valor_diaria <<endl;
    cout << "Valor total das diarias: " << total_diaria <<endl;
    cout << "Valor do consumo interno: " << consumo <<endl;
    cout << "Subtotal: " << subtotal <<endl;
    cout << "Taxa: " << taxa <<endl;
    cout << "Total geral: " << total_geral <<endl;

}
