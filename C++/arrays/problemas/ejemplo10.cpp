#include <iostream>

using namespace std;

int main(int argc, const char*argv[]){
	int tablaElecciones[5][4] = {194, 48, 206, 45, 180, 20, 320, 16, 221, 90, 140, 20, 432, 50, 821, 14, 820, 61, 946, 18};
	int sumaTotal=0, sumaA=0, sumaB=0, sumaC=0, sumaD=0;
	double porcentajeA=0, porcentajeB=0, porcentajeC=0, porcentajeD=0;
	cout<<"Distrito"<<"\t"<<"Candidato"<<"\t"<<"Candidato"<<"\t"<<"Candidato"<<"\t"<<"Candidato"<<endl;
	cout<<"\t\t"<<"A"<<"\t\t"<<"B"<<"\t\t"<<"C"<<"\t\t"<<"D"<<endl;
	
	for(int i=0;i<5;i++){
		cout<<(i+1);
		for(int j=0;j<4;j++){
			cout<<"\t\t"<<tablaElecciones[i][j];
			sumaTotal=sumaTotal+tablaElecciones[i][j];
		}
		cout<<endl;
	}
	cout<<endl;

	for(int a=0;a<5;a++)
		sumaA=sumaA+tablaElecciones[a][0];
	for(int b=0;b<5;b++)
		sumaB=sumaB+tablaElecciones[b][1];
	for(int c=0;c<5;c++)
		sumaC=sumaC+tablaElecciones[c][2];
	for(int d=0;d<5;d++)
		sumaD=sumaD+tablaElecciones[d][3];

	porcentajeA=((double)sumaA/(double)sumaTotal)*100;
	porcentajeB=((double)sumaB/(double)sumaTotal)*100;
	porcentajeC=((double)sumaC/(double)sumaTotal)*100;
	porcentajeD=((double)sumaD/(double)sumaTotal)*100;

	cout<<"Total votos candidato A: "<<sumaA<<endl<<"Porcentaje: "<<porcentajeA<<endl;
	cout<<"Total votos candidato B: "<<sumaB<<endl<<"Porcentaje: "<<porcentajeB<<endl;
	cout<<"Total votos candidato C: "<<sumaC<<endl<<"Porcentaje: "<<porcentajeC<<endl;
	cout<<"Total votos candidato D: "<<sumaD<<endl<<"Porcentaje: "<<porcentajeD<<endl;

	if(porcentajeA>50)
		cout<<"Ganador candidato A"<<endl;
	else if(porcentajeB>50)
		cout<<"Ganador candidato B"<<endl;
	else if(porcentajeC>50)
		cout<<"Ganador candidato C"<<endl;
	else if(porcentajeD>50)
		cout<<"Ganador candidato D"<<endl;
	else{
		char letra;
		if(porcentajeA>porcentajeB && porcentajeA>porcentajeC && porcentajeA>porcentajeD){
			cout<<"Primer candidato a segunda vuelta: Candidato A"<<endl;
			letra='A';
		}
		else if(porcentajeB>porcentajeC && porcentajeB>porcentajeD){
			cout<<"Primer candidato a segunda vuelta: Candidato B"<<endl;
			letra='B';
		}
		else if(porcentajeC>porcentajeD){
			cout<<"Primer candidato a segunda vuelta: Candidato C"<<endl;
			letra='C';
		}
		else{
			cout<<"Primer candidato a segunda vuelta: Candidato D"<<endl;
			letra='D';
		}

		if(letra=='A'){
			if(porcentajeB>porcentajeC && porcentajeB>porcentajeD)
				cout<<"Segundo candidato a segunda vuelta: Candidato B"<<endl;
			else if(porcentajeC>porcentajeD)
				cout<<"Segundo candidato a segunda vuelta: Candidato C"<<endl;
			else
				cout<<"Segundo candidato a segunda vuelta: Candidato D"<<endl;
		}
		else if(letra=='B'){
			if(porcentajeA>porcentajeC && porcentajeA>porcentajeD)
				cout<<"Segundo candidato a segunda vuelta: Candidato A"<<endl;
			else if(porcentajeC>porcentajeD)
				cout<<"Segundo candidato a segunda vuelta: Candidato C"<<endl;
			else
				cout<<"Segundo candidato a segunda vuelta: Candidato D"<<endl;
		}
		else if(letra=='C'){
			if(porcentajeA>porcentajeB && porcentajeA>porcentajeD)
				cout<<"Segundo candidato a segunda vuelta: Candidato A"<<endl;
			else if(porcentajeB>porcentajeD)
				cout<<"Segundo candidato a segunda vuelta: Candidato B"<<endl;
			else
				cout<<"Segundo candidato a segunda vuelta: Candidato D"<<endl;
		}
		else{
			if(porcentajeA>porcentajeB && porcentajeA>porcentajeC)
				cout<<"Segundo candidato a segunda vuelta: Candidato A"<<endl;
			else if(porcentajeB>porcentajeC)
				cout<<"Segundo candidato a segunda vuelta: Candidato B"<<endl;
			else
				cout<<"Segundo candidato a segunda vuelta: Candidato C"<<endl;
		}
	}

	return 0;
}