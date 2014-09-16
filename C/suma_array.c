#include <stdio.h>

int suma_array(int numeros[], int pos, int n){
	if(pos==n-1)
		return numeros[pos];
	else
		return numeros[pos]+suma_array(numeros,pos+1,n);
}

int suma_array_mayor_ultimo(int numeros[], int pos, int n){
	if(pos==n-1)
		return 0;
	else if(numeros[pos]>numeros[n-1])
		return numeros[pos]+suma_array(numeros,pos+1,n);
	else
		return 0;
}

int main(int argc, char* argv[])
{
	int n;
	int i;
	printf("Ingrese la cantidad: ");
	scanf("%d",&n);
	int numeros[n];
	for(i=0;i<n;i++){
		printf("Ingrese el valor del indice %d: ", (i+1));
		scanf("%d",&numeros[i]);
	}
	printf("La suma del los numeros es: %d",suma_array(numeros,0,n)); 
	return 0;
}