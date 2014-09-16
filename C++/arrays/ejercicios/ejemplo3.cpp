#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int i,j,k;
	int primero[21];
	int segundo[21];
	int tercero[7][8];

	for(i=0;i<10;i++)
		primero[i] = i+3;
	cin>>j>>k;
	for(i=j;i<=k;)
		cout<<primero[i++];
	return 0;
}