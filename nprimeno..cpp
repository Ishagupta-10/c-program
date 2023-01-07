//WACP to print all n digit prin=me no's using functions//
#include<stdio.h>
#include<math.h>
void nprimeno(int x,int y)
{   int c=0;
    for(int j=x;j<y;j++){
	for(int i=1;i<=j;i++){
	if(j%i==0)
	c++;}
	if(c==2)
	printf("%d",j);}
}
int main()
{
int n,x,y;
scanf("%d",&n);
x=pow(10,n-1);
y=pow(10,n);
nprimeno(x,y);
return 0;}
