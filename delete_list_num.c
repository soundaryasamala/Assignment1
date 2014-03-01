/*given a single(not sorted) linked list, and a value, delete the value from the linked list*/
#include <stdlib.h>
#include <stdio.h>
int main(void) 
{
	struct node
{
  int x;
  struct node *next;
}*p,*q,*r;
p=NULL;
	int s,n;
    while(1)
    {
     printf("\nenter number into linked list\n 1.yes \n2.no");
     scanf("%d",&s);
	if(s==1)
	{
    printf("\nenter number\n");

    if(p==NULL)
	{
	 p=(struct node*)malloc(1*sizeof(struct node));
	 p->x=n;
	 p->next=NULL;
     }
	  else
	  {
	  q=p;
	  r=(struct node*)malloc(1*sizeof(struct node));
	  r->x=n;
	  r->next=NULL;
       while(q->next!=NULL)
       {
       	q=q->next;
       }
       q->next=r;
		 }
	}
     else break;
     }
     
printf("\ndelete any value from the linked list");
scanf("%d",&n);
q=p;
while(q->next!=NULL)
{
	if((q->next->x)==n)
	{   r=q->next;
		q->next=q->next->next;
		free(r);
		break;
	}
	q=q->next;
}
q=p;
while( q!=NULL)
{
printf("%d->",q->x);
q=q->next;
}

return 0;
}

