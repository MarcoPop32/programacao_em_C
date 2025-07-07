#include <stdio.h>

int main(){
char nome[50];
int idade;
float altura;
printf("Digite seu nome: ");
  scanf("%s",nome);
  
 
  printf("Digite sua idade: ");
  scanf("%d",&idade);
  
  printf("Digite sua altura: ");
  scanf("%f",&altura);
  
  printf("Seu nome é: %s\n Sua idade é: %d\n Sua altura é: %f\n", nome, idade, altura);
return 0;
  
}
