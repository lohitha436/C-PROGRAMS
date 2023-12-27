#include<stdio.h>
#include<string.h>
void main()
{
char str[100],str1[100];
int i=0,j=0;
printf("enter frst strng");
gets(str);
printf("enter second strng");
gets(str1);
while(str[i]!='\0')
i++;
while(str[j]!='\0')
str[i++]=str1[j++];
str[i]='\0';
printf("%s",str);
}


