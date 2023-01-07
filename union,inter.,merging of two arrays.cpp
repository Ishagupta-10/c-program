#include<stdio.h>
int main()
{
	int n1,n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	int a[n1],b[n2];
    for(int i=0;i<n1;i++)
	scanf("%d",&a[n1]);
    for(int i=0;i<n2;i++)
	scanf("%d",&b[n2]);
	int n=n1+n2;
	int c[n];
	for(int i=0;i<n;i++)
	{
	if(i<n1)
	c[i]=a[i];
	if(i>=n1 &&i<n2)
	c[i]=b[i-n1];}
    printf("merged array is");
	for(int i=0;i<n;i++)
	printf("%d",c[i]);
	for(int i=0;i<n;i++)
	if(a[i]==b[i])
	b[i]=b[i+1];
	printf("union of two array is");
	for(int i=0;i<n;i++)
	printf("%d",c[i]);

	return 0;
}
