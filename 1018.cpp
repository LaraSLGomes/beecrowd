#include <iostream>
using namespace std;

int main() {
    int valor;
    cin >> valor;
    cout << valor << endl;

    int totalNotas;

    totalNotas = valor / 100;
    cout << totalNotas << " nota(s) de R$ 100,00" << endl;
    valor = valor % 100;

    totalNotas = valor / 50;
    cout << totalNotas << " nota(s) de R$ 50,00" << endl;
    valor = valor % 50;

    totalNotas = valor / 20;
    cout << totalNotas << " nota(s) de R$ 20,00" << endl;
    valor = valor % 20;

    totalNotas = valor / 10;
    cout << totalNotas << " nota(s) de R$ 10,00" << endl;
    valor = valor % 10;

    totalNotas = valor / 5;
    cout << totalNotas << " nota(s) de R$ 5,00" << endl;
    valor = valor % 5;

    totalNotas = valor / 2;
    cout << totalNotas << " nota(s) de R$ 2,00" << endl;
    valor = valor % 2;

    totalNotas = valor / 1;
    cout << totalNotas << " nota(s) de R$ 1,00" << endl;

    return 0;
}