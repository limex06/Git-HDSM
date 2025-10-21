/* Faça um programa que leia quatro palavras pelo teclado, e armazene cada
palavra em uma string. Depois, concatene todas as strings lidas numa única
string. Por fim apresente esta como resultado ao final do programa. */

#include <stdio.h>
#include <string.h>

int main()
{
    char una[400], dos[100], tres[100], cuatro[100];

    printf("Digite 4 palavras: \n");
    scanf("%s %s %s %s", &una, &dos, &tres, &cuatro);

    strcat(strcat(strcat(una,dos),tres),cuatro);

    printf("A combinação de todas as palavras é:\n %s", una);
    return 0;
}