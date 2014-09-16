#include <stdio.h>

int factorial(int n){
	if(n==0){
		return 1;
	}
	return n*factorial(n-1);
}

main(){
	int n;
	printf("Ingrese un numero:");
	scanf("%d",&n);
	int resultado=factorial(n);
	printf("Resultado: %d\n", resultado);
}