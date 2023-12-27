#include<stdio.h>
void main()
{
int id;
char name[30];
float sal;
FILE *fp;
fp=fopen("file1.dat","r");
fscanf(fp,"%d",&id);
fscanf(fp,"%s",name);
fscanf(fp,"%f",&sal);
printf("%d",id);
printf("%s",name);
printf("%f",sal);
fclose(fp);
}
