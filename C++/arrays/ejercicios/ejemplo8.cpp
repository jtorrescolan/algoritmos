#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int tabla[4][5] = {4,7,-5,4,9,0,3,-2,6,-2,1,2,4,1,1,6,1,0,3,-4};
	int suma=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			if(i!=j)
				suma+=tabla[i][j];
		}
	}
	cout<<suma;
}