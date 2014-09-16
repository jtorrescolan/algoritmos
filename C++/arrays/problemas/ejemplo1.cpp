#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	string lineas[] = {"Hola mundo mundial#","Hola casa de pinocho?","Hola vencidad del chavo"};
	string rptaLineas[3];

	for(int i=0;i<3;i++){
		if(strchr(lineas[i].c_str(),'#')){
			cout<<"Ingrese fecha(d/m/a): ";
			getline(cin,rptaLineas[i]);
			cout<<endl;
		}
		else if(strchr(lineas[i].c_str(),'?')){
			cout<<"Ingrese nombre: ";
			getline(cin,rptaLineas[i]);
			cout<<endl;
		}
		else{
			rptaLineas[i]=lineas[i];
		}
	}
	for(int j=0;j<3;j++)
		cout<<rptaLineas[j]<<endl;
	return 0;
}