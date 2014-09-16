#include <iostream>

using namespace std;

int changeRow(int i, int j, int tabla[3][3]);

int main(int argc, char const *argv[])
{
	int tabla[3][3]={5,7,8,3,10,6,9,12,4};
	for(int x=0;x<3;x++){
		for(int z=0;z<3;z++){
			cout<<tabla[x][z]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	changeRow(1,2,tabla);
	for(int x=0;x<3;x++){
		for(int z=0;z<3;z++){
			cout<<tabla[x][z]<<"\t";
		}
		cout<<endl;
	}
}

int changeRow(int i, int j, int tabla[3][3]){
	int tblTmp[3][3];
	for(int l=0;l<3;l++){
		tblTmp[i][l]=tabla[i][l];
		tabla[i][l]=tabla[j][l];
		tabla[j][l]=tblTmp[i][l];
	}
}