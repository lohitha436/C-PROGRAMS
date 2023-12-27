#include<stdio.h>
void main()
{/* addtion using 2d array*/
int i,j,a[3][3],b[3][3],c[3][3];
printf("enter mat1");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("enter mat2");
for (i=0;i<3;i++)
for (j=0;j<3;j++)
scanf("%d",&b[i][j]);
for (i=0;i<3;i++)
for (j=0;j<3;j++)
c[i][j]=a[i][j]+b[i][j];
printf("sum of mat\n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{printf("\t%d\t",c[i][j]);
}
printf("\n");
}
}
