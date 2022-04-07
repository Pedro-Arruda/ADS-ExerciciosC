#include <iostream>

using namespace std;

main()
{
    float MP, MT, ME, MF;

    cout << "Digite sua media de provas (MP): ";
    cin >> MP;
    cout << "Digite sua media de trabalhos (MT): ";
    cin >> MT;
    cout << "Digite sua media de exercicios (ME): ";
    cin >> ME;

    MP = MP * 0.7;
    MT = MT * 0.2;
    ME = ME * 0.1;
    MF = MP + MT + ME;

    cout << "Sua media final (MF) equivale a " << MF;



}
