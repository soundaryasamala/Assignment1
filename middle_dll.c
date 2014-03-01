/*middle element of a linked list*/
#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
	struct node
{
	struct node *prev;
  int x;
  struct node *next;
}*p,*q,*k;

p=NULL;
	int s,n,count=0,middle,t;
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
	 p->prev=NULL;
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
       k->prev=q;
       q->next=k;
		 }
	}
     else break;
     }
   q=p;
   
   while(q!=NULL)
{
printf("%d->",q->x);
q=q->next;
}
t=1;q=p;
while(t<count/2)
{
 q=q->next;
 t++;
}
if(count%2==0)
{
middle=q->next->x; 
 printf("\nmiddle element is is %d",q->x);
}
else
middle=q->next->x;
   printf("\nmiddle element is is %d",middle);
return 0;
}

