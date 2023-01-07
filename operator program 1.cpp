#include<stdio.h>
int main()
{	
int a=10,b=11,c=12,d=13;
a=b++;
b=a++;
c=++a;
a=++b;
d=++b;
b=b++;
a=a++;
c=a++;
printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
return 0;
}
