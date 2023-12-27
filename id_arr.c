#include<stdio.h>
void main()
{
int a[100],n,i;/*displaying using 1d array*/
printf("enter no.of elements");
scanf("%d",&n);
printf("the elements are");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("entered elements are");
for (i=0; i<n;i++)
printf("%d",a[i]);
}


