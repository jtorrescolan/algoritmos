#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int i,j,k;
	int segundo[21];

	cin>>k;
	for(i=3;i<=k;)
		cin>>segundo[i++];
	j=4;
	cout<<segundo[k]<<" "<<segundo[j+1];
	return 0;
}