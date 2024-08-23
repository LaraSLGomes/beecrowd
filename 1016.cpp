#include <iostream>
  #include <iomanip>
    using namespace std;
 
int main() {
 
  double velocidadeRelativa = 90.0 - 60.0; 

    double distancia;
    cin >> distancia;

    double tempoHoras = distancia / velocidadeRelativa;

    double tempoMinutos = tempoHoras * 60.0;

    cout << tempoMinutos << " minutos" << endl;
 
    return 0;
}