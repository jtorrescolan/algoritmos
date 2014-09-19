#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, const char*argv[]){

	string linea;
	string keys="#&@";

	ifstream salida("prueba4.txt",ios::in);
	ofstream entrada("tmp.txt",ios::out);

	while(!salida.eof()){
		getline(salida, linea);
		if(strpbrk(linea.c_str(),keys.c_str())){
			cout<<"Te encontre"<<endl;
		}
		else
			entrada<<linea<<endl;
	}
	entrada.close();
	salida.close();

	remove("prueba4.txt");
	rename("tmp.txt","prueba4.txt");
	return 0;
}