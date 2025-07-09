#include <stdio.h>
#include <stdbool.h>

int main() {
bool maiordeIdade;
int idade;

while (idade != -1){
printf("Digite sua idade: ");
scanf("%d", &idade);

maiordeIdade = idade >= 18;

if (maiordeIdade){
    printf("Acesso liberado, você é maior de idade\n");
} else{
    printf("Acesso negado, menor de idade\n");

}
}
    return 0;
}