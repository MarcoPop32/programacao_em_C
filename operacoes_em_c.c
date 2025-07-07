// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float num1;
    float num2;
    
    printf("Digite um número: ");
    scanf("%f", &num1);
    
    printf("Digite um segundo número: ");
    scanf("%f", &num2);
    
    
    //Soma
    float soma = num1+num2;
    printf("A soma é: %2.f\n", soma);
    
    //Subtração
    float sub = num1-num2;
    printf("A subtração é: %2.f\n", sub);
    
    //Multiplicação
    float multi = num1*num2;
    printf("A multiplicação é: %2.f\n", multi);
    
    //Divisão
    float div = num1 / num2;
    printf("A divisão é: %f\n", div);
 
  return 0;
}