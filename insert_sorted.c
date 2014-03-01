/*given a single, sorted, circular linked list and a value, insert the value as a new node at the appropriate location*/
#include <stdlib.h>
#include <stdio.h>
int main(void) 
{
	struct node
{
  int x;
  struct node *next;
}*p,*q,*r,*g;
p=NULL;
	int s,t,n;
    while(1)
    {
     printf("\nenter number into linked list\n 1.yes \n2.no");
     scanf("%d",&s);
	if(s==1)
	{
    printf("\nenter number\n");
	scanf("%d",&n);
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
     q->next->next=p;
r=p;
printf("\ninsert any value into the linked list");
scanf("%d",&n);
while(r->next!=p )
{
if(n>(r->next->x))
r=r->next;
else break;
}
  g=(struct node*)malloc(1*sizeof(struct node));
  g->x=n;
  g ->next=r->next;
  r->next=g;
q=p;
t=0;
while(t==0 || q!=p->next)
{
printf("%d->",q->x);
q=q->next;
if(q->next==p->next)
t=1;
}

return 0;
}
