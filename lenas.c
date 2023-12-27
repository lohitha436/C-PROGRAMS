#include<stdio.h>
void main()
{
char str[20];
int i=0;
printf("enter a string");
scanf("%s",str);
while (str[i]!='\0')
i++;
printf("length=%d",i);
}
