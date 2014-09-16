#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	/*char cadena[]="Hola mundo";
	int i;
	for(i=9;i>=0;i--){
		printf("%c",cadena[i]);
	}
	return 0;*/

	char* cadena;
	cadena=malloc(sizeof(char)*128);
	printf("Ingrese cadena:");
	fgets(cadena, 128, stdin);
	printf("%s\n",cadena);
	free(cadena);
	return 0;
}