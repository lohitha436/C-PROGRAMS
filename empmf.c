#include<stdio.h>

void main()
{
float sal;
int id;
char name[30];
char response,y,n;
FILE *fp=fopen("a.dat","w");
do
{
printf("enter id");
scanf("%d",&id);
printf("enter name");
scanf("%s",&name);
printf("enter salary");
scanf("%f",&sal);
fprintf(fp,"%d",id);
fprintf(fp,"%s",name);
fprintf(fp,"%f",sal);
printf("do you want to continue:y|n");
scanf("%c",&response);
/*fflush(stdin);*/
}

while(response==y);
rewind(fp);
printf("\n \tid\tname\tsalary\t",id,name,sal);
while(scanf(fp,"%d",&id)!='%')
{
fscanf(fp,"%d",&id);
fscanf(fp,"%s",&name);
fscanf(fp,"%f",&sal);
printf("\n \td\ts\tf\t",id,name,sal);
fclose(fp);
}
}
