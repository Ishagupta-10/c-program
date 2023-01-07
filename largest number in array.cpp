#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int m=0,sm=0;
	for(int i=0;i<n;i++)
	if(a[i]>m)
	m=a[i];
	printf("largest=%d",m);
	for(int i=0;i<n;i++)
	if(a[i]>sm && a[i]<m ||sm==m)
	sm=a[i];
	printf("second largest=%d",sm);
	return 0;
}
