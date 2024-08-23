#include <iostream>
  #include <iomanip>
    using namespace std;
 
int main() {
 
   double km, litros;
   cin >> km >> litros;
   double consumomedio = km/litros;
   cout << fixed << setprecision(3) << consumomedio << " km/l" << endl;
 
    return 0;
}