#include<stdio.h>
struct node
{
int data;
struct node* link;
};
void main()
{
struct node* ob1,ob2;
ob1.link=&ob2;
ob1.data=10;
ob1.link=NULL;
ob2.data=20;
ob2.link=NULL;
printf("%d",ob1.data);
printf("%d",ob2.data);
}
