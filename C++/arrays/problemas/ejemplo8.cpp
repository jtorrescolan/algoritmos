#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char*argv[]){
	
	srand(time(NULL));
	
	int f, c, mayor, menor, posfma, poscma, posfme, poscme;
	f=rand()%10+1;
	c=rand()%10+1;
	mayor=0;menor=51;posfma=0;poscma=0;posfme=0;poscme=0;

	int **matriz = new int*[f];

	for(int i=0;i<f;i++)
		matriz[i]=new int[c];

	for(int j=0;j<f;j++)
		for(int k=0;k<c;k++)
			matriz[j][k]=rand()%50+1;

	for(int l=0;l<f;l++){
		for(int m=0;m<c;m++){
			if(matriz[l][m]>mayor){
				mayor=matriz[l][m];
				posfma=l+1;
				poscma=m+1;
			}
			if(matriz[l][m]<menor){
				menor=matriz[l][m];
				posfme=l+1;
				poscme=m+1;
			}
			cout<<matriz[l][m]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Filas: "<<f<<endl;
	cout<<"Columnas: "<<c<<endl;
	cout<<"Menor elemento: "<<menor<<" ubicado en la fila "<<posfme<<" y columna "<<poscme<<endl;
	cout<<"Mayor elemento: "<<mayor<<" ubicado en la fila "<<posfma<<" y columna "<<poscma<<endl;

	for(int z=0;z<f;z++)
		delete[] matriz[z];
	delete[] matriz;
}