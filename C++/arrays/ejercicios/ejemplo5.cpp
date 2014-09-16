#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{	
	int i,j,k;
	int primero[21];
	int segundo[21];
	int tercero[7][8];

	for(j=0;j<7;)
		cin>>primero[j++];
	i=0;
	j=1;
	while((j<6) && (primero[j-1]<primero[j])){
		i++,j++;
	}
	for(k=-1;k<j+2;)
		cout<<primero[++k]<<",";

	return 0;
}