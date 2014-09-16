#include <stdio.h>

int sumar(int , int );

main()
{
	int n1, n2, suma;
	n1=3;n2=3;
	suma=sumar(n1,n2);
	printf("La suma es: %d\n", suma);
}

int sumar(n1,n2){
	return n1+n2;
}