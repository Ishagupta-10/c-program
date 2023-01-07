//wap to print diagonal matrix//
/*#include<stdio.h>
int main()
{
	int r,c;
	scanf("%d",&r);
	scanf("%d",&c);
	int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
	if(i==j)
	printf("%d",a[i][j]);
	else
	printf(" ");}
	printf("\n");
}
return 0;
}
*/
//wap to check whather it is a identity matrix//
#include<stdio.h>
int main()
{
	int r,c;
	scanf("%d",&r);
	scanf("%d",&c);
	int a[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	if(i==j&&a[i][j]==0)
	if((i>j||j>i)&&a[i][j]==0)
	printf("identity matrix");
 return 0;
}
