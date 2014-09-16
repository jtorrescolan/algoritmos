#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int i,j,k;
	int primero[21];
	int segundo[21];
	int tercero[7][8];
	for(i=0;i<3;i++)
		for(j=0;j<12;j++)
			tercero[i][j]=i+j+1;
	for(i=0;i<3;i++){
		j=2;
		while(j<12){
			cout<<i<<" "<<j<<" "<<tercero[i][j]<<endl;
			j+=3;
		}
	}
	return 0;
}