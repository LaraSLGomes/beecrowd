#include <iostream>
#include <iomanip>>

using namespace std;

int main() {
 
 string nome;
 double salario, vendas;
 
 cin >> nome >> salario >> vendas;
 double total = salario + vendas * 0.15;
 cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;
 
    return 0;
}