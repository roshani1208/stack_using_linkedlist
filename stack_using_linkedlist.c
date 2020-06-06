#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node *next;
};
 struct node *top=0;
  void push()
 {
    int n;
	printf("enter a number for pushing operation\n");
    scanf("%d",&n);
   struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=n;
   newnode->next=top;
   top=newnode;
 }
  void peek()
  {
	  if(top==0)
		  printf("stack is empty \n");
	  else
		  printf("top element is %d \n",top->data);
		  
  }
  void display()
  {
	  struct node *temp;
	  temp=top;
	  if(temp==0)
		  printf("stack is empty\n");
	  else
		  while(temp!=0)
		  { 
	          printf("%d ",temp->data);
			  temp=temp->next;
			  }
			  printf("\n");
		   } 
     pop()
	{
		struct node* temp=top;
		if(top==0)
			printf("stack is empty\n");
		else
		{
			printf("%d\n",temp->data);
		     top=temp->next;
			 free(temp);
		}
	}
   
  int main()
 {
  int choice;
  while(1)
  {
  printf("1.push operation\n");
  printf("2.pop operation\n");
  printf("3.peek operation\n");
  printf("4.display operation\n");
  printf("5.EXIT operation\n");
  scanf("%d",&choice);
  switch(choice)
  {
	case 1:
	    push();
		break;
	case 2:
	   pop();
	   break;
	case 3:
	   peek();
	   break;
	case 4:
	   display();
	   break;
	case 5:
	   exit(0);
	default:
	   printf(" your choice is invalid\n");
  }
  } 
    return 0;
 }
 