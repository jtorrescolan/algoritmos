#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char*argv[]){

	srand(time(NULL));
	int tabla[10][15];
	int sumaV=0, mayor=0, f=0, c=0, sumaM=0, vendedorMes=0;

	for(int i=0;i<10;i++)
		for(int j=0;j<15;j++)
			tabla[i][j]=rand()%50+1;

	cout<<"Vendedor/Modelo"<<endl;

	for(int z=0;z<15;z++)
		cout<<"\t"<<(z+1);
	cout<<"\t"<<"Total";
	cout<<endl;

	for(int a=0;a<10;a++){
		cout<<(a+1);
		sumaV=0;
		for(int b=0;b<15;b++){
			cout<<"\t"<<tabla[a][b];
			sumaV=sumaV+tabla[a][b];
		}
		cout<<"\t"<<sumaV;
		if(sumaV>mayor){
			mayor=sumaV;
			vendedorMes=(a+1);
		}
		cout<<endl;
	}
	cout<<"Total";
	while(c<15){
		for(f=0;f<10;f++)
			sumaM=sumaM+tabla[f][c];
		cout<<"\t"<<sumaM;
		c++;
		sumaM=0;
	}
	cout<<endl<<endl;
	cout<<"El Vendedor "<<vendedorMes<<" es el vendedor del mes.";
}