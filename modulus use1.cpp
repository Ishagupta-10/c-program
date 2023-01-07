#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter a=");
scanf("%d",&a);
a=a-100;
b=a/2000;
a=a%2000;
c=a/500;
a=a%500;
d=a/100;
d=d+1;
printf("notes of two thousand=%d\nnotes of five hundred=%d\nnotes of hundred=%d",b,c,d);
return 0;
}
