#include <iostream>
#include <iomanip> 
#include <vector>
using namespace std;

int main() {
  
    double valor;
    cin >> valor;

    int centavos = valor * 100;

    vector<int> notas = {10000, 5000, 2000, 1000, 500, 200};
    vector<int> moedas = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;
    for (int e : notas) {
        int totalNotas = centavos / e;
        cout << totalNotas << " nota(s) de R$ " << fixed << setprecision(2) << (double)e / 100 << endl;
        centavos %= e;
    }

    cout << "MOEDAS:" << endl;
    for (int e : moedas) {
        int totalMoedas = centavos / e;
        cout << totalMoedas << " moeda(s) de R$ " << fixed << setprecision(2) << (double)e / 100 << endl;
        centavos %= e;
    }

    return 0;
}
