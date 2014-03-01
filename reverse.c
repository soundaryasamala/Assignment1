/*program for reversal without recursion*/
#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
	struct node
{
  int x;
  struct node *next;
}*p,*q,*r,*k;

p=NULL;
	int s,n;
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
	  k=(struct node*)malloc(1*sizeof(struct node));
	  k->x=n;
	  k->next=NULL;
      while(q->next!=NULL)
       {
       	q=q->next;
       }
       q->next=k;
		 }
	}
     else break;
     }
   q=p;
   printf("before reversal");
   while(q!=NULL)
{
printf("%d->",q->x);
q=q->next;
}
r=NULL;
while(p!=NULL)
{
q=p;
p=p->next;
q->next=r;
r=q;
}
printf("after reversal");
while(q!=NULL)
{
printf("%d->",q->x);
q=q->next;
}
return 0;
}

