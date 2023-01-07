//decimal number to binary number//
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a;
	while(a>=0){
		b=a%2;
		a=a/2;
		if(b==0){
		printf("0");}
		else{
		printf("1");}
		printf("%d",b);
	}
	return 0;

}

