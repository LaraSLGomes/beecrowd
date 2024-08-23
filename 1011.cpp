#include <iostream>
  #include <iomanip>
    using namespace std;

int main() {
 
 double raio, pi;
 pi = 3.14159;
 cin >> raio;
 double volume = (4.0/3) * pi * raio * raio * raio;
 cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
 
    return 0;
}