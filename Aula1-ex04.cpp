#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n1, n1_quadrado, n1_cubo, n1_raiz;
    cout << "Digite um numero: ";

    cin >> n1;

    n1_quadrado = n1 * n1;
    n1_cubo = n1_quadrado * n1;
    n1_raiz = sqrt (n1);

    cout << "O numero ao quadrado equivale a " << n1_quadrado <<endl;
    cout << "O numero ao cubo equivale a " << n1_cubo <<endl;
    cout << "A raiz do numero equivale a " << n1_raiz <<endl;




}
