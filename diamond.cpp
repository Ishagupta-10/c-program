#include<stdio.h>
int main()
{
    int n,sp,d=1;
    scanf("%d",&n);
    sp=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
        printf("  ");
        for(int k=1;k<=d;k++)
        printf("* ");
        sp--;
        d=d+2;
        printf("\n");
    
    }
    sp=1;
    d=d-4;
    for(int i=1;i<=n-1;i++){
    for(int j=1;j<=sp;j++)
    printf("  ");
    for(int k=1;k<=d;k++)
    printf("* ");
    sp++;
    d=d-2;
    printf("\n");
    }
    return 0;
}
