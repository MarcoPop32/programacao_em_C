#include <stdio.h>
int main() {

int matriz[3][3] = {
{1, 2, 3},
{2, 3, 4},
{3, 4, 5}
};
printf("\t\t\t\tImpacto\n");
printf("Urgencia\n");


for(int urgencia = 0; urgencia < 3; urgencia++) {
    printf("\t\t\t");
for(int impacto = 0; impacto < 3; impacto++) {
printf("%d\t\t", matriz[urgencia][impacto]);
}

printf("\n");
}
return 0;
}