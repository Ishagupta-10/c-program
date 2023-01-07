#include<stdio.h>
int main()
{
	int a,b=-1,c=1,sum=0;
	scanf("%d",&a);
	while(sum<a)
	{
	sum=b+c;
	if(sum<=a)
	printf("%d, ",sum);
	b=c;
	c=sum;
}
return 0;
	
}
