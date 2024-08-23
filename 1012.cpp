#include <iostream>
#include <iomanip>
using namespace std;

double areaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

double areaCirculo(double raio) {
    const double pi = 3.14159;
    return pi * raio * raio;
}

double areaTrapezio(double base1, double base2, double altura) {
    return ((base1 + base2) * altura) / 2.0;
}

double areaQuadrado(double lado) {
    return lado * lado;
}

double areaRetangulo(double comprimento, double largura) {
    return comprimento * largura;
}

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    cout << "TRIANGULO: " << fixed << setprecision(3) << areaTriangulo(A, C) << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << areaCirculo(C) << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << areaTrapezio(A, B, C) << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << areaQuadrado(B) << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << areaRetangulo(A, B) << endl;

    return 0;
}