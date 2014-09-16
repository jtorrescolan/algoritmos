#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int i,j,k;
	int primero[21];
	int segundo[21];
	int tercero[7][8];

	for(i=0;i<12;i++)
		cin>>primero[i];
	for(j=0;j<6;j++)
		segundo[j]=primero[2*j]+j;
	for(k=3;k<=7;k++)
		cout<<primero[k+1]<<" "<<segundo[k-1]<<endl;
	return 0;
}