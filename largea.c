#include<stdio.h>
void main()
{
int n ,i,l,a[4];
printf("elements are");
for (i=0;i<4;i++)
scanf("%d",&a[i]);
l=a[0];
for (i=1;i<4;i++)
{
if (l<a[i])
l=a[i];
}
printf("largest number%d",l);
}
