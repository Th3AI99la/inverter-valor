/*Fa�a um programa para ler dois valores inteiros, uma para a vari�vel A e outro para a vari�vel B, e para
efetuar a troca dos valores de forma que a vari�vel A passe a possuir o valor da vari�vel B e vari�vel B passe
a possuir o valor da vari�vel A. OBS: N�o utilize uma vari�vel auxiliar.*/

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

// sa�da de dados

printf ("O valor de A sera %d, O Valor de B %d:", a,b);


}
