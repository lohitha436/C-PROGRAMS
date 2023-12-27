#include<stdio.h>
#include<string.h>
void main()
{
char str[100],subs[50];
char *found;
printf("enter main string");
scanf("%s",&str);
printf("enter sub string");
scanf("%s",&subs);
found=strstr(str,subs);
if(found==found)
printf("substring is found in %s position",found);
else
printf("-1");
}
