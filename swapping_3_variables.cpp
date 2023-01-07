#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a and b");
scanf("%d%d",&a,&b);
c=b;
b=a;
a=c;
printf("a=%d\nb=%d\n",a,b);
return 0;
}
