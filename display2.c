#include<stdio.h>
void main()
{/*displaying mxn elements using 2d*/
int a[10][10],i,j,r,c;
printf("enter no of rows and coloums");
scanf("%d%d",&r,&c);
printf("entered elemts are");
for (i=0;i<r;i++)
for (j=0;j<c;j++)
scanf("%d",&a[i][j]);
for (i=0;i<r;i++)
for (j=0;j<c;j++)
printf("%d",a[i][j]);
}
