#include <stdio.h>

int main() {
  char nome[100];
  int idade_minima = 17;
  int desconto;
  const float VALOR_BASE = 100.0;
  
 while(idade_minima, desconto != 1){
printf("Nome completo do participante: ");
fgets(nome, 100 , stdin);

printf("Informe sua idade: ");
scanf("%d", &idade_minima);
getchar();
printf("Você é estudante? Digite 1 para SIM e 0 para NÃO: ");
scanf("%d", &desconto);

if(desconto != 0 && desconto != 1){
    printf("Ops! Ocorreu um erro, digite 1 caso for estudante e 0 caso não seja.");
}else if(idade_minima < 18 || desconto == 1){
    int resultado = VALOR_BASE / 2;
    printf("STATUS DA COMPRA:\n Nome do Participante: %s Idade: %d\n Status de Estudante: SIM\n Valor do Ingresso: %d\n", nome, idade_minima, resultado);
}else if(idade_minima >= 18 || desconto == 0){
    printf("STATUS DA COMPRA:\n Nome do Participante: %s\n Idade: %d\n Status de Estudante: NÃO\n Valor do Ingresso: %.2f\n", nome, idade_minima, VALOR_BASE);
} 
}
    return 0;
}