#include<stdio.h>
void main()
{/*to read n number and display in rev order*/
int a[4],n,i;
printf("enter a number");
scanf("%d",&n);
for (i=0;i<4;i++)
scanf("%d",&a[i]);
for (i=3;i>0;i--)
printf("%d\n",a[i]);
}

