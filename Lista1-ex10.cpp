#include <iostream>

using namespace std;

int main()
{
    int quant_pc1, quant_pc2, quant_pc3;
    cout << "Computador1" << "\t" << "R$2000,00" <<endl;
    cout <<  "Computador2" << "\t" << "R$3000,00" <<endl;
    cout <<  "Computador3" << "\t" << "R$2700,00" <<endl;

    cout << "Quantidades de computadores1: ";
    cin >> quant_pc1;
    cout << "Quantidades de computadores2: ";

    cin >> quant_pc2;
    cout << "Quantidades de computadores3: ";

    cin >> quant_pc3;

    cout << "Computador1" << "\t" << "R$2000,00" << "\t" << quant_pc1 << "\t" << "R$"<<quant_pc1 * 2000 <<endl;
    cout << "Computador2" << "\t" << "R$3000,00" << "\t" << quant_pc2 << "\t" << "R$"<<quant_pc2 * 3000 <<endl;
    cout << "Computador3" << "\t" << "R$2700,00" << "\t" << quant_pc3 << "\t" << "R$" << quant_pc3 * 2700 <<endl;

}