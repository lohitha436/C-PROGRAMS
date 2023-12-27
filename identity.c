#include<stdio.h>
void main()
{
/*identity*/
int r,c,n,a[3][3],i,j;
printf("enter no of rows and cols:");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{ 
for(j=0;j<c;j++)
{
if(a[i]==a[j])
{
printf("1");
}
else
{
printf("0");
}
}
printf("\n");
}
}
