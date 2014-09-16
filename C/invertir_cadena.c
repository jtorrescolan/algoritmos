#include <stdio.h>
#include <stdlib.h>

void invertir_cadena(char* cadena){
	if(cadena[0]=='\0')
		return;
	else{
		invertir_cadena(cadena+1);
		putchar(cadena[0]);
	}
}

int main(int argc, char *argv[])
{
	char* cadena;
	cadena=malloc(sizeof(char)*128);
	printf("Ingrese cadena: ");
	fgets(cadena, 128, stdin);
	printf("La cadena invertida es: ");
	invertir_cadena(cadena);
	return 0;
}