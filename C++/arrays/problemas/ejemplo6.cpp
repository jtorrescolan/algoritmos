#include <iostream>

using namespace std;

int main(int argc, const char*argv[]){
	
	int n=0;
	
	cout<<"Ingrese n(n impar entre 3 y 11): ";
	cin>>n;
	
	int **cuadrado=new int*[n];
	
	for(int l=0;l<n;l++)
		cuadrado[l]=new int[n];
	for(int z=0;z<n;z++)
		for(int x=0;x<n;x++)
			cuadrado[z][x]=0;

	int f=0;
	int c=(n-1)/2;
	
	cuadrado[f][c]=1;

	for(int i=1;i<n*n;i++){
		if(f==0 && c==(n-1)){
			f=f+(n-1);
			c=c-(n-1);
			if(cuadrado[f][c]==0){
				cuadrado[f][c]=i+1;
			}
			else{
				f=f-(n-1)+1;
				c=c+(n-1);
				cuadrado[f][c]=i+1;
			}
		}
		else if(f==0){
			f=f+(n-1);
			c=c+1;
			if(cuadrado[f][c]==0){
				cuadrado[f][c]=i+1;
			}
			else{
				f=(f-(n-1))+1;
				c=c-1;
				cuadrado[f][c]=i+1;
			}
		}
		else if(c==(n-1)){
			f=f-1;
			c=c-(n-1);
			if(cuadrado[f][c]==0){
				cuadrado[f][c]=i+1;
			}
			else{
				f=f+2;
				c=c+(n-1);
				cuadrado[f][c]=i+1;
			}
		}
		else{
			f=f-1;
			c=c+1;
			if(cuadrado[f][c]==0){
				cuadrado[f][c]=i+1;
			}
			else{
				f=f+2;
				c=c-1;
				cuadrado[f][c]=i+1;
			}
		}
	}

	for(int j=0;j<n;j++){
		for(int k=0;k<n;k++){
			cout<<cuadrado[j][k]<<"\t";
		}
		cout<<endl;
	}

	return 0;
}