
#include <stdio.h>

int main() {
int cont, numeros[5];

//Atribuir valores ao nosso vetor numeros
for (cont = 0; cont < 5; cont++) {
    printf("Digite um número: \n", cont+1);
scanf("%d", &numeros[cont]);
}
//Printar os valores armazenados no vetor e suas respectivas posições
printf("Os números digitados foram:\n");
for(cont = 0; cont < 5; cont++){
printf("Posição %d: %d\n", cont,numeros[cont]);
}


return 0;
}
