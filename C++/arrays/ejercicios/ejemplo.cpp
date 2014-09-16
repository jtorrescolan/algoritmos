#include <iostream>

using namespace std;

int main()
{
	int i;
	int primero[21];

	for(i=1;i<=6;i++)
		cin >> primero[i];
	for(i=3;i>0;i--)
		cout << primero[2*i] << " ";	
	return 0;
}