#include<stdio.h>
void main()
{
/*print alternate elemtsin array*/
int i,a[4];
printf("elements are");
for (i=0;i<4;i++)
{scanf("%d",&a[i]);
}
printf("alternate elemts are \n");
for (i=0;i<4;i+=2)
printf("%d\n",a[i]);
}
