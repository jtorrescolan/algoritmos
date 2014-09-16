#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int tabla[3][5] = {4,7,1,3,5,2,0,6,9,7,3,1,2,6,4};
	cout<<"Array original"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<<tabla[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Array invertido"<<endl;
	for(int k=0;k<5;k++){
		for(int l=0;l<3;l++){
			cout<<tabla[l][k]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}