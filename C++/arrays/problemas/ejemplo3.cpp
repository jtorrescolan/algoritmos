#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(int argc, const char*argv[])
{
	int contador=0;
	int suma=0;
	string valor;
	/*ofstream file;
	file.open("prueba.txt");

	file<<"Primera linea de texto 1"<<endl;
	file<<"Segunda linea de texto 2"<<endl;
	file<<"Tercera linea de texto 3"<<endl;

	file.close();*/

	ifstream file("prueba.txt");
	string linea;

	while(!file.eof()){
		valor="";
		getline(file, linea);
		cout<<linea<<endl;
		for(int i=0;i<linea.length();i++){
			if(strchr("0123456789",linea[i]))
				valor=valor+linea[i];
		}
		suma=suma+atoi(valor.c_str());
	}
	cout<<"La suma es: "<<suma<<endl;

	file.close();
	return 0;
}