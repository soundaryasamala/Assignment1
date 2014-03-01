/* given a single, sorted linked list convert that into a single, sorted, circular linked list*/
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
q=p;r=p;
if(p->next==NULL)
{
p->next=p;
printf("%d->%d",p->x,p->next->x);
return 0;
}
while(r->next!=NULL)
{
r=r->next;
if(r->next==NULL)
{
r->next=p;
break;
}
}	
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
