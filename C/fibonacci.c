#include <stdio.h>

int fibonacci(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

int main(int argc, char* argv[]){
	int n;
	printf("Ingresar numero: ");
	scanf("%d",&n);
	printf("La serie para %d es: %d",n,fibonacci(n));
}