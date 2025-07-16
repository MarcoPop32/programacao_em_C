#include <stdio.h>

int main() {
    //Definição das Variáveis
    int opcoes = 1; 
    int a, b;
    float c,d;
    
    while(opcoes != 0){
        printf("\nMenu\n");
        printf("Escolha uma das operações abaixo para calcular dois números: \n");
        printf("1-Soma\n 2-Subtração\n 3-Multiplicação \n 4-Divisão\n 0- Sair\n");
        scanf("%d", &opcoes);
        switch(opcoes){
            //Bloco da Soma
            case 1:
            printf("Você escolheu soma.\n");
            printf("Digite um número: ");
            scanf("%d", &a);
            printf("Digite um segundo número: ");
            scanf("%d", &b);
            printf("O Resultado é: %d", a+b);
            
            //Setar as variáveis ao seu valor de origem (0) para quando o usuário quiser retornar ao comando.
             a = 0;
             b = 0;
            break;
            
            //Bloco da Subtração
            case 2:
    printf("Você escolheu subtrair.\n");
            printf("Digite um número: ");
            scanf("%d", &a);
            printf("Digite um segundo número: ");
            scanf("%d", &b);
            printf("O Resultado é: %d", a-b);
            
            a = 0;
            b = 0;
            break;
            
            //Bloco da Multiplicação
            case 3:
            printf("Você escolheu multiplicar.\n");
            printf("Digite um número: ");
            scanf("%d", &a);
            printf("Digite um segundo número: ");
            scanf("%d", &b);
            printf("O Resultado é: %d", a*b);
            
            a = 0;
            b = 0;
            break;
            
            //Bloco da Divisão 
            case 4:
            printf("Você escolheu dividir.\n");
            printf("Digite um número: ");
            scanf("%d", &c);
            getchar();
            printf("Digite um segundo número: ");
            scanf("%d", &d);
            getchar();
            printf("O Resultado é: %.2f", c/d);
            
            c = 0;
            d = 0;
            break;
            
            //Finalizar o programa
            case 0:
            printf("Exit\n");
            break;
            
            //Após digitar um número inválido ou letra
            default:
            printf("Ops! Digite um número válido");
        }
    }
    
    
    return 0;
}