#include<stdio.h>
void main()
{
/*read elemts and find max min*/
int i,n,max,min,a[4];
printf("enter no of numbers");
scanf("%d",&n);
printf("enter numbers are");
for (i=0;i<4;i++)
scanf("%d",&a[i]);
for (i=0;i<4;i++)
{
if (a[i]<max)
	max=a[i];
if (a[i]>min)
	min=a[i];
}
printf("%d\n%d",min,max);
}
