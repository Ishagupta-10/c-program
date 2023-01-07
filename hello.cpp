#include<stdio.h>
int main()
{
int a,b,c,d,e,percentage;
printf("enter marks in a=");
scanf("%d",&a);
printf("enter marks in b=");
scanf("%d",&b);
printf("enter marks in c=");
scanf("%d",&c);
printf("enter marks in d=");
scanf("%d",&d);
printf("enter marks in e=");
scanf("%d",&e);
percentage=(a+b+c+d+e)/5;
printf("the percentage is %d",percentage);
return 0;
}
