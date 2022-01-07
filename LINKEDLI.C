#include<stdio.h>
#include<conio.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node
{
  int into;
  struct node*next;
};
  struct node*start=NULL;
  int main()
{
  int choice;
  while(1)
{
printf("\n menu");
printf("\n 1.create");
printf("\n 2.display");
printf("\n 3.insert at beginning");
printf("\n 4.insert at end");
printf("\n 5.insert at specific position");
printf("\n 6.delete from beginning");
printf("\n 7.delete from end");
printf("\n 8.delete at specific position");
printf("\n 9.exit");
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
  case 1:create();
       break;
  case 2:dislpay();
       break;
  case 3:insert_begin();
       break;
  case 4:insert_end();
       break;
  case 5:insert_pos();
       break;
  case 6:delete_begin();
       break;
  case 7:delete_end();
       break;
  case 8:delete_pos();
       break;
  case 9:exit(0);
       break;
  default:printf("\n wrong choice");
       break;
  }
  }
  return 0;
  }
  void create()
  {
  struct node*temp,*ptr;
  temp=(struct node*)malloc(size of(struct node));
  if(temp==NULL)
  {
  printf("\n out of memory space:");
  exit(0);
  }
  printf("enter the data value for the node:");
  scanf("%d",&temp->into);
  temp->next=NULL;
  if(start==NULL)
  {
  start=temp;
  }
  else
  {
  ptr=start;
  while(ptr->next!=NULL)
  {
  ptr=ptr->next;
  }
  ptr->next=temp;
  }
}
  void display()
  {
  struct node*ptr;
  if(start==NULL)
  {
  printf("\n list is empty");
  return;
  }
else
  {
  ptr=start;
  printf("\n the list of elements are");
  while(ptr!=NULL)
  {
  printf("%d",ptr->into);
  ptr=ptr->next;
  }
}
  void insert_begin()
  {
  struct node*temp;
  temp=(struct node*)malloc(size of(struct node));
  if(temp=NULL)
  {
  printf("\n enter the data value for the node:");
  scanf("%d",&temp->into);
  temp->next=NULL;
  if(start==NULL)
  {
  start=temp;
  }
else
  {
  temp->next=start;
  start=temp;
  }
}
  void insert_end()
  {
  struct node*temp,*ptr;
  temp=(struct node*)malloc(size of(struct node));
  if(temp==NULL)
  {
  printf("\n out of memory space");
  return;
  printf("\n enter the data value for the node:");
  scanf("%d",&temp->into);
  temp->next=NULL;
  if(start==NULL)
  {
  start=temp;
  }
else
  {
  ptr=start;
  while(ptr->next!=NULL)
  {
  ptr=ptr->next;
  }
  ptr->next=temp;
  }
}
  void insert_pos()
  {
  struct node*ptr,*temp;
  int i,pos;
  temp=(struct node)malloc(size of(struct node));
  if(temp==NULL)
  {
  printf("\n enter the data value of the node:");
  scanf("%d",&temp->into);
  temp->next=NULL;
  if(pos==0)
  {
  temp->next=start;
  start=temp;
  }
else
  {
  for(i=0;ptr=start;i<pos-1;i++)
  {
  ptr=ptr->next;
  if(ptr==NULL)
  {
  printf("\n position not found:");
  return;
  }
}
  temp->next=ptr->next;
  ptr->next=temp;
  }
}
  void delete_begin()
  {
  struct node*ptr;
  if(ptr==NULL)
  {
  printf("\n list is empty");
  return;
  }
else
  {
  ptr=start;
  start=start->next;
  printf("\n the deleted element is %d",ptr->into);
  free(ptr);
  }
}
  void delete_end()
  {
  struct node*temp,*ptr;
  if(start==NULL)
  {
  printf("list is empty");
  exit(0);
  }
else if(start->next==NULL)
  {
  ptr=start;
  start=NULL;
  printf("\n the deleted element is:"%d,ptr->into);
  free(ptr)
  }
else
  {
  ptr=start;
  while(ptr->next!=NULL)
  {
  temp=ptr;
  ptr=ptr->next;
  }
  temp->next=NULL;
  printf("\n the deleted element is:%d",ptr->into);
  free(ptr);
  }
}
  void delete_pos()
  {
  int i,pos;
  struct node*temp,*ptr;
  if(start==NULL)
  {
  printf("\n the list is empty");
  exit(0);
  }
else
  {
  printf("\n enter the position of the node to be deleted:");
  scanf("%d",&pos);
  if(pos==0)
  {
  ptr=start;
  start=start->next;
  printf("the deleted element is %d",ptr->into));
  return;
  }
}
  temp->next=ptr->next;
  printf("\n the deleted element is %d",ptr->into);
  free(ptr);
  }
  }
  }




