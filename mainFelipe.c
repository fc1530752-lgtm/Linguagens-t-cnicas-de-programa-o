#include <stdio.h>
#include <stdlib.h>

/* crie um programa que leia um numero, entre 0 e 9 e caso ele seja positivo,
 verifique se ele é um numero primo, caso seja, imprima seu dobro, caso não seja primo,
 verifique se é par ou impar. se for par mostre o resultado da soma com 2. se for impar
 mostre seu proximo e seu anterior. caso seja negativo mostre seu inverso.
 Caso não esteja, entre 0 e 9 mostre_out_of_range. */

int main(int argc, char *argv[]) {
	int n;
	printf("entre com o numero: ");
	scanf("%d", &n);
	// equivalente (n>= 1 && n<=9)
	if(n<10 && n>=0)
		     
		if(n==1 || n==2 || n==3 || n==5 || n==7)
			printf ("o dobro de %d = %d", n, (n*2));
		else if(n%2 == 0)
			printf("%d+2 = %d", n, n+2);
		else
			printf("||%d|%d|", n-1, n, n+2);
		
	else printf ("_out_of_range"); 
	
	return 0;
}
