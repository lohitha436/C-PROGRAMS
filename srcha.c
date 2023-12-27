#include<stdio.h>
void main()
{
int a[4]={1,2,3,4},i,temp,srch;
printf("enter elmnt to srch");
scanf("%d",&srch);
for (i=0;i<4;i++)
{
 if (a[4]==srch)
	temp=1;
}
if (temp==1)
{printf("found");
}
else 
{printf("not found");
}
}
