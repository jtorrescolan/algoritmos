#include <stdio.h>
 
int factorial(int num){int i,x=num;
for(i=1;i<x;i++)num*=i;
if (num==0)num=1;
return num;
}
 
int valor(int uno, int dos){
if(uno<2)return 1;
else{
return (factorial(uno)/(factorial(dos)*factorial(uno-dos)));}
}
 
int main (){int filas,i,y;
printf("cuantas hileras quiere ver ");
scanf("%d", &filas);
 
for(i=0;i<filas;i++){
for(y=0;y<=filas-i;y++)printf(" ");
for(y=0;y<=i;y++)printf("%d ",valor(i,y));printf("\n");
}
getch();
return (0);
}