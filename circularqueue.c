#include <stdio.h>
#include <stdlib.h>
void insertion();
void deletion();
void display();
int A[10],F=1,R=-1,item,size=4;

void insertion()
{
printf("enter the item to be inserted:");
scanf("%d",&item);
if(F==(R+1)%size)
{
	printf("circular queue is full");
}
else if(F==-1)
{
	F=0;
	R=0;
	A[R]=item;
}
else
{
	R=(R+1)%size;
	A[R]=item;
}

}

void deletion()
{
if(F==-1)
	printf("queue is empty - deletion not possible");
else if(F==R)
{
	printf("item to be deleted is %d",A[F]);
	F=R=-1;
}
else
	F=(F+1)%size;

}

void display()
{
int i;
if(R<F)
{
for(i=F;i<size-1;i++)
	printf("%d",A[i]);
if(F!=0)
{
for(i=0;i<=R;i++)
	printf("%d",A[i]);
}

}
else
{
for(i=F;i<=R;i++)
	printf("%d",A[i]);
}

}

void main()
{

int opt;
do
{
printf("enter your option\n1.insert\n2.deletion\n3.display\n4.exit\n");
scanf("%d",&opt);
switch(opt)
{
case 1:
	insertion();
	break;
case 2:
	deletion();
	break;
case 3:
	display();
	break;
case 4:
	exit(0);
	break;
default:
	printf("\nWrong Choice\n");
}
}while(opt!=0);

} 



	



