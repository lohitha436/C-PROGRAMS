#include<stdio.h>
void main()
{
int id;
char name[30];
float sal;
FILE *fp;
fp=fopen("file1.dat","w");
printf("enter id");
scanf("%d",&id);
printf("enter name");
scanf("%s",name);
printf("enter your salary");
scanf("%f",&sal);
fprintf(fp,"%d",id);
fprintf(fp,"%s",name);
fprintf(fp,"%f",sal);
fclose(fp);
}
