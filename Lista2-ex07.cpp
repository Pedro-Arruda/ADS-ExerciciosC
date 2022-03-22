#include <iostream>

using namespace std;

int main()
{
    float diarias, consumo, total_diaria, subtotal, taxa, total_geral;
    char nome [20], apartamento[10];
    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << "Digite o tipo de apartamento: " << endl;
    cin >> apartamento;
    cout << "Digite o numero de diarias: " << endl;
    cin >> diarias;
    cout << "Digite o valor do consumo interno: " << endl;
    cin >> consumo;

    if (apartamento == "a" || apartamento == "A"){
        total_diaria = diarias * 150;
    }

    if (apartamento == "b" || apartamento == "B"){
        total_diaria = diarias * 100;
    }

    if (apartamento == "c" || apartamento == "C"){
        total_diaria = diarias * 75;
    }

    if (apartamento == "d" || apartamento == "D"){
        total_diaria = diarias * 50;
    }

    subtotal = total_diaria + consumo;

    taxa = subtotal * 0.1;

    total_geral = subtotal + taxa;

    cout << diarias << "/t" << total_diaria;

}
