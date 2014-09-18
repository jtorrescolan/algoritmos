#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

double media(int x[], int n);
double varianza(int x[], int n, double media);
double desvacion_estandar(int x[], int n, double media);

int main(int argc, const char*argv[]){
	
	srand(time(NULL));
	
	int n, suma;
	n=rand()%5+1;
	int *x = new int[n];

	for(int i=0;i<n;i++)
		x[i]=rand()%10+1;

	double _media = media(x, n);
	double _varianza = varianza(x, n, _media);
	double dv = desvacion_estandar(x, n, _media);

	cout<<"Lista de numeros: "<<endl;
	for(int j=0;j<n;j++)
		cout<<x[j]<<"\t";
	cout<<endl;
	cout<<"La media es: "<<_media<<endl;
	cout<<"La varianza es: "<<_varianza<<endl;
	cout<<"La desviacion estandar es: "<<dv<<endl;

	return 0;
}

double media(int x[], int n){
	double suma=0;
	for(int k=0;k<n;k++)
		suma=suma+x[k];

	return suma/n;
}

double varianza(int x[], int n, double media){
	double varianza=0;
	for(int l=0;l<n;l++)
		varianza=varianza+pow((media-x[l]),2);

	return varianza/n;
}

double desvacion_estandar(int x[], int n, double media){
	double varianza=0;
	for(int m=0;m<n;m++)
		varianza=varianza+pow((media-x[m]),2);

	return sqrt(varianza/n);
}