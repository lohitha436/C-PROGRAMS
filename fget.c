#include<stdio.h>
void main()
{char ch;
FILE *fp;
fp=fopen("a.text","r");
printf("file contents are");
while((ch=getc(fp))!=EOF)
putchar(ch);
fclose(fp);
}
