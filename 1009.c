#include <stdio.h>
 
int main() {
 
   char nome[31];
   double salario, vendas;
   scanf("%s", &nome);
   scanf("%lf", &salario);
   scanf("%lf", &vendas);
   
   double total = salario + 0.15 * vendas;
   
   printf("TOTAL = R$ %.2f\n", total);
   
    return 0;
}