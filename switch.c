#include <stdio.h>

int main() {
    int opcoes;
    int numero, pares =  0;
    int cont=1;
    
 while(opcoes != -1){
    printf("Menu de Seleção: \n");
    printf("1 - For\n");
    printf("2 - While\n");
    printf("3 - Do-While\n");
    printf("Escolha uma das opções acima: ");
    scanf("%d", &opcoes);
    
    switch(opcoes){
        case 1:
         for(cont; cont <=10 ; cont++){
   printf("Digite um número: ");
   scanf("%d", &numero);
   if (numero % 2 == 0){
       pares++;
   }
   }

 printf("A quantidade de números pares são: %d\n", pares);
 pares = 0;
 cont = 1;
 break;
 
 case 2:
  while(cont <= 10){
        printf("Digite um número: ");
        scanf("%d", &numero);
        getchar();
        if(numero % 2 == 0){
            pares++;
        }
         cont++;
    }
    printf("A quantidade de números pares são: %d\n", pares);
     pares = 0;
 cont = 1;
    break;
    
    case 3:
    do{
    cont++;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero % 2 == 0){
        pares++;
    }
}while(cont <= 10);
printf("A quantida de números pares são: %d\n", pares);
 pares = 0;
 cont = 1;
break;

default:
printf("Ops! Opção inválida.\n");
    }
 }

    return 0;
}