//Alunos: Marcos Paulo e Gustavo


#include <stdio.h>

int main() {
   int categoria, produto; //Linha e Coluna respectivamente
   int matriz[4][3]; //Matriz 4x3
   int opcoes;
   int atualizar;
   int soma_dos_produtos[4] = {0};
   
   //Valores que serão alocados para cada linha e coluna 
  printf("Informe a quantidade de produto para cada categoria: \n");
   for(categoria = 0; categoria < 4; categoria++){
       for(produto = 0; produto < 3; produto++){
          printf("Categoria %d e Produto %d: ", categoria, produto);
           scanf("%d", &matriz[categoria][produto]);
       }
   }
   while(opcoes != 5){
   printf("\nMenu de Opções:\n");
   printf("1 - Exibir os estoques\n");
   printf("2 - Atualizar o estoque\n");
   printf("3 - Verificar estoque\n");
   printf("4 - Quantidade de produtos para cada categoria\n");
   printf("5 - Sair\n");
   
   scanf("%d", &opcoes);
   
   
   
   switch(opcoes){
       //Exibição da Matriz e os valores que foram alocados
       case 1:
       printf("\t\t\t\tProdutos\n");
       printf("Categorias\n");
       for(categoria = 0; categoria < 4; categoria++){
           printf("\t\t\t");
           for(produto = 0; produto <3; produto++){
               printf("%d\t\t", matriz[categoria][produto]);
           }
           printf("\n");
     
       }
       break;
       
       //Troca de um determinado valor da matriz
       case 2:
       printf("Informe a categoria (0 a 3): ");
       scanf("%d", &categoria);
       printf("Informe o produto (0 a 2): ");
       scanf("%d", &produto);
       printf("Informe o valor que quer estocar para a categoria %d e produto %d: ", categoria, produto);
       scanf("%d", &atualizar);
       matriz[categoria][produto] = atualizar;
       printf("Estoque atualizado: \n\n");
       printf("\t\t\t\tProdutos\n");
       printf("Categorias\n");
       for(categoria = 0; categoria < 4; categoria++){
           printf("\t\t\t");
           for(produto = 0; produto < 3; produto++){
               printf("%d\t\t", matriz[categoria][produto]);
           }
           printf("\n");
       }
       break;
       
       //Verificar se existe algum valor dentro da matriz igual a zero
       case 3:
       
       int zeros = 0; //Toda vez que voltar a essa função iguala minha variável a zero para não deixar armazenado e repetir as mensagens.
       for(categoria = 0; categoria < 4; categoria++){
           for(produto = 0; produto < 3; produto++){
               if (matriz[categoria][produto] == 0){ //Após o loop e verificar cada valor armazenado da matriz, se tiver algum zero ele irá imprimir a posição na qual está alocado.
                   printf("O produto %d da categoria %d está sem estoque, reponha o estoque e verifique o sistema.\n", produto, categoria);
                   zeros = 1; //Caso esteja recebendo um zero, irá atribuir o valor de 1 para a variável que ira printar a mensagem acima.
               }
               }
               }
               if(!zeros){ //Se não tiver nenhum zero na matriz, a variável não recebe nenhum valor e irá imprimir o print abaixo 
                   printf("Estoque em dia.\n");
           }
       
       
       
       break;
       
       //Fazer da quantidade dos produtos de cada categoria
       case 4:
       for(categoria = 0; categoria < 4; categoria++){
           for(produto = 0; produto < 3; produto++){
               soma_dos_produtos[categoria] += matriz[categoria][produto];
           }
       }
       for(categoria = 0; categoria < 4; categoria++){
           printf("Quantidade de produtos na categoria %d: %d\n", categoria, soma_dos_produtos[categoria]);
           
       }
       // Encerrar o programa
       case 5:
       printf("\n");
       break;
       
       //Caso o valor digitado na opção for diferente de 0 a 5 
       default:
       printf("Valor inválido, tente novamente.");
  
   }
   }
   
   
   
   
    return 0;
   }
