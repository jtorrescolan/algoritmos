#include <iostream>

using namespace std;

void cambiar_repetido(int numeros[], int tamanio);

int main(int argc, char const *argv[])
{

	int numeros[5]={8,4,1,8,8};
	cambiar_repetido(numeros,5);
	return 0;
}
void cambiar_repetido(int numeros[], int tamanio){
	int contador=0;
	int valor=0;
	int numerosTmp[tamanio];
	for(int z=0;z<tamanio;z++){
		numerosTmp[z]=numeros[z];
	}
	for(int i=0;i<tamanio-1;i++){
		for(int j=i+1;j<tamanio;j++){
			if(numerosTmp[i]==numerosTmp[j]){
				numeros[i]=-5;
				numeros[j]=-5;
			}
		}
	}
	for(int k=0;k<tamanio;k++){
		if(numeros[k]==-5)
			contador++;
		cout<<numeros[k]<<"\t";
	}
	cout<<endl;
	cout<<"Numeros cambiados: "<<contador;
}