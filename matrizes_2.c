#include <stdio.h>

int main() {
    int i,j;
    int matriz[2][2]; //Matriz 2x2
    int soma=0;
    int multi=1;
    int opcoes;
    int novoValor;
    
//Para repetir os comandos    
while(opcoes != -1){    
   printf("\nEscolha uma das opções abaixo:\n");
   printf("1- Criar uma matriz\n");
   printf("2 - Atualizar os valores das matrizes\n");
   printf("3 - Soma das matrizes\n");
   printf("4 - Multiplicação dos valores da matriz\n");
   scanf("%d\n", &opcoes);
   getchar();
   
   switch(opcoes){
 
 //Criação de Matriz
 case 1:
 for(i = 0; i< 2; i++){
        for(j = 0; j < 2; j++){
        printf("Digite os valores para as matrizes: \n");
            scanf("%d", &matriz[i][j]);
            getchar();
        }
    }
      break;
        case 2:
    printf("Informe o número da linha (0 a 1): \n");
    scanf("%d", &i);
    printf("Informe o número da coluna (0 a 1): \n");
    scanf("%d", &j);
    printf("Informe o novo valor para a posição [%d][%d]:", i, j);
    scanf("%d", &novoValor);
    matriz[i][j] = novoValor;
    printf("\nMatriz atualizada:\n");
for(int i = 0; i < 2; i++) {
for(int j = 0; j < 2; j++) {
printf("%d ", matriz[i][j]);
}
}
break;
    
   //Printar o valor da soma feita na criação da matriz
   case 3:
    for(i = 0; i< 2; i++){
        for(j= 0 ; j < 2; j++){
            soma = soma+matriz[i][j];
        }
    }
    printf("A soma dos valores da matriz é: %d\n", soma);
    soma = 0;
    
    break;
    
    //Printar o valor da multiplicação da matriz
  case 4:
      for(i = 0; i< 2; i++){
        for(j = 0 ; j < 2; j++){
            multi = multi * matriz[i][j];
        }
      }
 printf("A multiplicação dos valores da matriz é: %d\n", multi);
 multi = 1;
 break;
    

default:
printf("Ops valor inválido, tente novamente.");
   }
}
    
    

    return 0;
}