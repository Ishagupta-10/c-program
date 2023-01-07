#include<stdio.h>
#include<math.h>>
int main()
{
	int n,t,sum=0,c=0;
	scanf("%d",&n);
    t=n;
    while(n)
	{
    	n=n/10;
    	c++;
	}
	n=t;
	while(n)
	{
		int r=n%10;
		int b = pow(r,c);
		sum=sum+b;
		n=n/10;
	}
	if(t==sum)
	printf("%d is armstrong",t);
	else
	printf("not armstrong");
return 0;
}
