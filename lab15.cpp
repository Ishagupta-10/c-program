/*#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{for(int j=1;j<=i;j++)
	{
	printf("*");
}
printf("\n");
}

	return 0;
}
*/
/*#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
{for(int j=a;j>=i;j--)
{
printf("*");}
printf("\n");
}
return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a-i;j++)
		{
			printf(" ");}
			for(int k=1;k<=i;k++){
			printf("# ");
		}
		printf("\n");
	}
	for(int i=a;i>=1;i--)
	{
		for(int j=1;j<=a-i+1;j++){
			printf(" ");
		}
		for(int k=1;k<=i-1;k++)
			printf("# ");
			
		printf("\n");
	}
return 0;
}*/
#include<stdio.h>
int main()
{int a;
scanf("%d",&a);
while(a>1)
printf("#");
return 0;
}
