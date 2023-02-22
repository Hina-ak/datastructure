#include<stdio.h>
#include<stdlib.h>
void display();
void push();
void pop();
struct node
{
struct node *next;
int data;
};
struct node *top=NULL;
void push()
{
int n;
printf("enter the number of nodes");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
int x;
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
if(new==NULL)
printf("insufficient memory");
else
{
printf("\n enter the data to insert \n");
scanf("%d",&x);
new->data=x;
new->next=top;
top=new;
}
}
}
void pop()
{
if(top==NULL)
{
printf("stack underflow");
}
else
{
printf("The item is to be popped is %d",top->data);
top=top->next;
}
}
void display()
{
struct node *ptr;
ptr=top;
printf("\n The linked list is:");
while(ptr!=NULL)
{
printf("\n %d",ptr->data);
ptr=ptr->next;
}
}
void main()
{
int c,opt;
do
{
printf("enter your option \n 1.push \n 2.pop \n 3.display \n 4.exit \n");
scanf("%d",&opt);
switch(opt)
{
case 1:push();
       display();
       break;
case 2:pop();
       display();
       break;
case 3:display();
       break;
case 4:exit(0);
default:printf("\n invalid entry");
}
printf("\n do you want to continue (1/2):");
scanf("%d",&c);
}
while(c==1);
}
