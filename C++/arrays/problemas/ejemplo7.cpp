#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char*argv[]){

	srand(time(NULL));

	string almacen[]={"casa","platano","comida","gato","girasol","pizarra"};
	string palabra_e;
	int pos=rand()%5+1;
	int contador_a=9;
	int contador=0;
	char letra;
	bool sw=false;

	palabra_e=almacen[pos];
	char *palabra_r = new char[palabra_e.length()-1];

	for(int j=0;j<palabra_e.length();j++){
		palabra_r[j]='_';
	}

	system("cls");

	cout<<endl;
	cout<<"JUEGO DEL AHORCADO"<<endl;
	cout<<"=================="<<endl<<endl;

	do{
		contador=0;
		for(int k=0;k<palabra_e.length();k++){
			cout<<palabra_r[k]<<" ";
		}
		cout<<endl<<endl;
		cout<<"Turno: "<<contador_a<<endl;
		cout<<"Ingrese una letra: ";
		cin>>letra;
		for(int i=0;i<palabra_e.length();i++){
			if(palabra_e[i]==letra){
				palabra_r[i]=palabra_e[i];
			}
			else{
				contador++;
			}
		}
		if((palabra_e.length()-contador)==0)
			contador_a--;

		if(contador_a==0)
			sw=true;

		if(strcmp(palabra_r,palabra_e.c_str())>=0)
			sw=true;

		system("cls");

	}while(!sw);

	cout<<endl;

	if(sw && contador_a==0)
		cout<<"Lo sentimos se le acabaron los turnos."<<endl;
	else
		cout<<"Felicitaciones logro adivinar la palabra."<<endl;

	cout<<"La palabra era: "<<palabra_e<<endl;

	return 0;
}