#include<stdio.h>
void main()
{
char ch;
FILE *fp;
fp=fopen("a.text","w");
printf("enter charachters");
while((ch=getchar())!='%')
putc(ch,fp);
fclose(fp);
}

