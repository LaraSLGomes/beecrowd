#include <iostream>
  #include <iomanip>
    using namespace std;
 
int main() {
 
 int codigo_peca1, num_peca1;
    double valor_unitario_peca1;

    int codigo_peca2, num_peca2;
    double valor_unitario_peca2;

    cin >> codigo_peca1 >> num_peca1 >> valor_unitario_peca1;
    cin >> codigo_peca2 >> num_peca2 >> valor_unitario_peca2;

    double total_peca1 = num_peca1 * valor_unitario_peca1;
    double total_peca2 = num_peca2 * valor_unitario_peca2;

    double total_a_pagar = total_peca1 + total_peca2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total_a_pagar << endl;
    
    return 0;
}