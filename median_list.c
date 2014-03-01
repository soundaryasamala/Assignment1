/*median of a linked list*/
#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
	struct node
{
  int x;
  struct node *next;
}*p,*q,*k;

p=NULL;
	int s,n,count=0,t;
	float median;
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
	median=((q->x)+(q->next->x))/2.0;
}
else
   median=(q->next->x);
   printf("median is %f",median);
return 0;
}

