





#include<stdio.h>
int main()
{
	int a,b;
	float i=0,sum=0;//10,15
	scanf("%d\n%d",&a,&b);
	while(a<b)
	{
		if(a%2!=0)
	{
			sum=sum+a;
		i++;}
	a++;
	}
	sum=sum/i;
	printf("%d",sum);
	return 0;
}                                                                                                                                
