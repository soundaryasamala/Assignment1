
/*given a single linked list and value N, delete the last N nodes of the linked list.*/
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
	int s,n,count=0,t=0;
    while(1)
    {
     printf("\nenter number into linked list\n 1.yes \n2.no");
     scanf("%d",&s);
	if(s==1)
	{
    printf("\nenter number\n");
	scanf("%d",&n);
	count++;
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
     
printf("\ngive  N to delete last N elements from the end of  linked list");
scanf("%d",&n);
q=p;
printf("\nbefore deletion");
while(q!=NULL)
{
printf("%d->",q->x);
q=q->next;
}
q=p;
while(t<(count-n-1))
{
	q=q->next;
	t++;
}

q->next=NULL;
q=p;
printf("\nafter deletion");
while(q!=NULL)
{
printf("%d->",q->x);
q=q->next;
}

return 0;
}

