#include <iostream>

using namespace std;

void matriz_transpuesta(int matriz[3][4], int r, int c);

int main(int argc, char const *argv[])
{
	int r,c;
	r=3;c=4;
	int matriz[3][4] = {4,3,2,1,9,6,7,8,0,5,-1,-8};
	for(int k=0;k<r;k++){
		for(int l=0;l<c;l++)
			cout<<matriz[k][l]<<"\t";
		cout<<endl;
	}
	cout<<endl;
	matriz_transpuesta(matriz,r,c);
	return 0;
}

void matriz_transpuesta(int matriz[3][4], int r, int c){
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			cout<<matriz[j][i]<<"\t";
		}
		cout<<endl;
	}
}