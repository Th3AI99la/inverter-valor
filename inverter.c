/*Faça um programa para ler dois valores inteiros, uma para a variável A e outro para a variável B, e para
efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável B e variável B passe
a possuir o valor da variável A. OBS: Não utilize uma variável auxiliar.*/

#include <stdio.h>
#include <stdlib.h>

int main () {	

//variaveis
int a, b;

a=0;
b=0;

//entrada de dados

printf ("O valor de A: ");
scanf  ("%d", &a);

printf ("O valor de B: ");
scanf  ("%d", &b);

// processamento de dados

b=a-b;
a=a-b;
b=a+b;

// saída de dados

printf ("O valor de A sera %d, O Valor de B %d:", a,b);


}
