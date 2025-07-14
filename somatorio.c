#include <stdio.h>

int main() {
  int numero;
  int soma = 0;
  
  do{
  printf("Digite um número: ");
  scanf("%d", &numero);
  if(numero >= 0){
  soma += numero; 
  }
}while(numero >= 0);

printf("A soma dos números é: %d", soma);

    return 0;
}