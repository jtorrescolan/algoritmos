#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, const char*argv[]){
	
	string numero_1="65";
	string numero_2="95";
	string resultado_1="";
	string resultado_2="";
	string resultado_f="";
	int resp=0;
	int llevar=0;
	int ultima=0;
	double suma=0;
	suma=(double)numero_1.length()-(double)numero_2.length();

	if(suma>0){
		for(int i=0;i<suma;i++)
			numero_2="0"+numero_2;
	}
	else if(suma<0){
		for(int j=0;j<abs(suma);j++)
			numero_1="0"+numero_1;
	}

	for(int i=numero_1.length()-1;i>=0;i--){
		resultado_1=numero_1[i];
		resultado_2=numero_2[i];
		resp=atoi(resultado_1.c_str())+atoi(resultado_2.c_str());
		resp=resp+llevar;
		if(resp>=10 && i!=0){
			resp=resp-10;
			llevar=1;
		}
		else if(resp>=10 && i==0){
			resp=resp-10;
			ultima=1;
		}
		else
			llevar=0;
		
		resultado_f=resultado_f+to_string(resp);
		cout<<resp;
		
		if(ultima!=0){
			resultado_f=resultado_f+to_string(ultima);
			cout<<ultima;
		}
	}

	cout<<endl;
	cout<<resultado_f;

	return 0;
}