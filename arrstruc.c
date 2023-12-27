#include<stdio.h>
void main()
{ struct book
{
int pages;
float price;
char author[20];
};
struct book b1[10];
int i,n;
printf("enter no. of books");
scanf("%d",&n);
for (int i=0;i<n;i++)
{
printf("enter no.of pages");
scanf("%d",&b1[i].pages);
printf("enter the price");
scanf("%f",&b1[i].price);
printf("enter name");
scanf("%s",&b1[i].author);
}
printf("enter the book details as follows");
for(i=0;i<n;i++)
{
printf("%d\n",b1[i].pages);
printf("%f\n",b1[i].price);
printf("%s\n",b1[i].author);
}
}
