/*#include<stdio.h>
void evenodd(int a)
{
	if(a%2==0)
	printf("%d is even",a);
	else
	printf("%d is odd",a);
	
}
int main()
{
	int n; 
	scanf("%d",&n);
	evenodd(n);
	evenodd(219);
	return 0;
}*/
//wacp to print all even no. between given range of sing functions//
#include<stdio.h>
void evenrange(int a,int b)
{
	for(int i=a;i<b;i++)
	if(i%2==0)
	printf("%d",i);
	
}
int main()
{
int a,b;
scanf("%d%d",&a,&b);
evenrange(a,b);
return 0;
}
