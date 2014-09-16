#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int factorial(int numero);

int main(int argc, char const *argv[])
{
	int n,contador;
	int tamanio=0;
	cout<<"Ingrese n: ";
	cin>>n;
	for(int i=0;i<=n;i++)
		tamanio=tamanio+i;
	int pascal[tamanio];
	if(n==1){
		pascal[0]=1;
	}
	else if(n>1){
		contador=0;
		pascal[0]=1;
		for(int j=0;j<(n-1);j++){
			for(int k=0;k<=(j+1);k++){
				contador=contador+1;
				pascal[contador]=factorial(j+1)/(factorial((j+1)-k)*factorial(k));
			}
		}
	}
	else{
		cout<<"n tiene que ser mayor que 0";
	}
	int suma=0;
	contador=0;
	for(int m=0;m<tamanio;m++){
		cout<<pascal[m];
		suma=suma+pascal[m];
		if(suma==(int)pow(2,contador)){
			contador++;
			cout<<endl;
			suma=0;
		}
	}
	cout<<"n: "<<n;
	return 0;
}

int factorial(int numero){
	int factorial=1;
	for(int l=1;l<=numero;l++)
		factorial=factorial*l;
	return factorial;
}