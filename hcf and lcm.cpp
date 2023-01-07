#include<stdio.h>
int main()
{
    int a,b,rem;
    int n=b;
    int m=a;
    scanf("%d%d",&a,&b);
    while(a%b!=0){
    rem=a%b;
    a=b;
    b=rem;
	}
    printf("hcf is %d\n",b);
    b=n;
    a=m;
    printf("%d",m*n/b);
    return 0;
}

