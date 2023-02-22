#include<stdio.h>

#include<stdlib.h>

struct node

{

 int data;

 struct node *right;

 struct node *left;

};

void insert();
void search();
void delete();
void inorder(struct node*);

void preorder(struct node*);

void postorder(struct node*); 


struct node *root=NULL;

struct node *ptr=NULL;

struct node *new=NULL;

struct node *ptr1=NULL;

void main()

{

 int opt;

 do

  {

   printf("\nEnter your choice:\n1.insertion\n 2.inorder\n 3.preorder\n 4.postorder\n 5.Search\n 6.delete\n ");

   scanf("%d",&opt);

   switch (opt)

   {

    case 1:insert();

           break;

    case 2:inorder(root);

           break;

    case 3:preorder(root);

           break;

    case 4:postorder(root);

           break;

   case 5:search();

           break;
   
   case 6:delete();

           break;

    default:printf("invalid choose");

   }

  }

 
  while(opt!=7);

 }


void insert()

{
 int x;
  
  new=(struct node *)malloc(sizeof(struct node));
  
  if(new==NULL)
     {
  
      printf("insufficient memory");
  
     }
  else
    {

     printf("enter the data to be inserted ");

     scanf("%d",&x);

     new->data=x;

     new->right=NULL;

     new->left=NULL;
    
    

  if(root==NULL)

  {

   root=new;

  }

  else

   {

    ptr=root;

    while(ptr!=NULL)

    { 

     if(x==ptr->data)
      
     {
      
      printf("item present in the tree \n ");
      
      break;
     
     }
   
    else if(x>ptr->data)
    
     {
    
     ptr1=ptr;
    
     ptr=ptr->right;
    
     }
  
   else
   
    {
    
    ptr1=ptr;
    
    ptr=ptr->left;
  
    }
    
    }

    
  if(ptr==NULL)
   
   {
    if(x>ptr1->data)
 
     {
    
       ptr1->right=new;

     }

   else
 
     {

       ptr1->left=new;

     }
  }
}
}
}

void inorder(struct node*ptr)

 {
  
   if(ptr!=NULL)
     
      {
  
       inorder(ptr->left);
       
       printf("%d \n",ptr->data);

       inorder(ptr->right);
      
      }
 }  
       
void preorder(struct node*ptr)

 {
  
   if(ptr!=NULL)
     
      {
  
       printf("%d \n",ptr->data);

       preorder(ptr->left);
       
       preorder(ptr->right);
      
      }
 }  

void postorder(struct node*ptr)

 {
  
   if(ptr!=NULL)
     
      {
  
       
       postorder(ptr->left);
       
       postorder(ptr->right);

       printf("%d \n",ptr->data);
      
      }
 } 

void search()

{
int x;

ptr=root;

printf("enter the data to search");

scanf("%d",&x);

while(ptr!=NULL)

 {
    
   if(ptr->data==x)
    
    { 
  
     printf("data present");
    
     break;
    
    }
  else if(x>ptr->data)
   
   {
    ptr=ptr->right;
   }

 else
   {
    
     ptr=ptr->left;
   
   }

}

if(ptr==NULL)

{

printf("data not present");

}

}

void delete()
{
int n;

struct node*parent=NULL;

printf("\n enter the element to be deleted");

scanf("%d",&n);

if(root==NULL)

{

  printf("\n tree is empty");

}
else
{
ptr=root;

parent=ptr;

while(ptr!=NULL)

{

if(ptr->data==n)

{

break;

}

if(n>ptr->data)

{

ptr=ptr->right;

}

else

{

ptr=ptr->left;

}

}
if(ptr==NULL)
 {
  printf("element not found");
 }
else
{

if(ptr->left==NULL &&  ptr->right==NULL)

{

if(parent==NULL)

{

root=NULL;
printf("\n element deleted is %d",n);

}

else if(parent->right==ptr)

{

parent->right=NULL;

}

else

{

parent->left=NULL;

}

printf("\n element deleted is %d",n);
}

else if(ptr->left!=NULL && ptr->right==NULL)

{

struct node*p;

p=ptr->right;

while(p->left==NULL)

{

p=p->left;

}

ptr->data=p->data;

printf("\n element deleted is %d",n);

free(p);

}

else

{

if(parent->right==ptr)

{

if(ptr->left==NULL)

{

parent->right=ptr->right;

printf("\n element deleted is %d",n);

}
else

{

parent->right=ptr->left;

printf("\n element deleted is %d",n);

}

}
else

{

if(ptr->left==NULL)

{

parent->left=ptr->right;

printf("\n element deleted is %d",n);

}

else

{

parent->left=ptr->left;

printf("\n element deleted is %d",n);

}

}
}
}

}
}
