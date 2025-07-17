
#include <stdio.h>
#include <string.h>

int main() {
    int quantidade; //Quantidade que será inputada no array nome de acordo com o usuário.
    
    
    printf("Quantos nomes você quer cadastrar? \n");
    scanf("%d", &quantidade);
    getchar();
    char nomes[quantidade][100];
      if(quantidade > 0){ //Caso o usuário digite uma letra ou um valor menor que 0
    
    
    
    for(int contador = 0; contador < quantidade; contador++){
        printf("Cadastre o nome:\n", contador+1);
        fgets(nomes[contador], 100, stdin);
        
        nomes[quantidade][strcspn(nomes[quantidade], "\n")] = '\0';
    }
    printf("Nomes digitados: \n");
    for(int contador = 0; contador < quantidade; contador++){
        printf("%s\n", nomes[contador]);
    }
    }else{
        printf("Ops! ocorreu um erro. Tente novamente.");
    }

    return 0;
}