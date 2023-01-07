#include<stdio.h>
int main()
{
	int sum=0,f,n,t;
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		int r=n%10;
		f=1;
		for(int i=1;i<=r;i++)
		f=f*i;
		sum=sum+f;
		n=n/10;
	}
	if(sum==t)
	printf("strong no.");
	else
	printf("not");
	
return 0;
}
