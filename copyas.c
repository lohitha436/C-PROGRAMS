#include<stdio.h>
#include<string.h>
void main()
{
char str[100],str1[100];
int i=0,j=0;
printf("enter a string");
gets(str);
while(str[i]!='\0')
{
str1[j]=str[i];
i++,j++;
}
str1[j]='\0';
printf("%s",str1);
}
