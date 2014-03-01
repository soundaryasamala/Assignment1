
/*merging to linked list*/
#include <stdlib.h>
#include <stdio.h>
struct node
{
  int x;
  struct node *next;
}*p,*q,*k,*r,*t,*u;
int s,n,count=0;
void insert1(int n);
void insert(int a)
{ 
	t=NULL;
	while(1)
    {
     printf("\nenter number into %d linked list\n 1.yes \n2.no",a);
     scanf("%d",&s);
	if(s==1)
	{
    printf("\nenter number\n");
	scanf("%d",&n);
	count++;
    	if(t==NULL)
	{
	 t=(struct node*)malloc(1*sizeof(struct node));
	 t->x=n;
	 t->next=NULL;
     }
	  else
	  {
	  r=t;
	  k=(struct node*)malloc(1*sizeof(struct node));
	  k->x=n;
	  k->next=NULL;
      while(r->next!=NULL)
       {
       	r=r->next;
       }
       r->next=k;
		 }
	}
     else break;
     }
     if(a==1)
     p=t;
     else
     q=t;
	}
void print(int a)
{
	if(a==1)
	t=p;
	else if(a==2)
	t=q;
	else
	t=u;
	 while(t!=NULL)
{
printf("%d->",t->x);
t=t->next;
}
}
 
int main(void) 
{
 
	insert(1);
	insert(2);
    print(1);
    printf("\n");
    print(2);
    while(1)
    {
    if(p==NULL || q==NULL) break;
    if((p->x)<(q->x) || (p->x)==(q->x))
     {
     insert1(p->x);
      p=p->next;
      }
      else
      if((p->x)>(q->x))
      {
    	insert1(q->x);
     	q=q->next;
      } 
      }
     	while(p!=NULL)
       {
    	insert1(p->x);
    	p=p->next;
       } 
      while(q!=NULL)
      {
    	insert1(q->x);
    	q=q->next;
      }	
     printf(" \n");
    	print(3);
	  free(p);free(q);free(k);free(r);free(u);free(t);
return 0;
}
 
void insert1(int n)
{
	if(u==NULL)
	{
	 u=(struct node*)malloc(1*sizeof(struct node));
	 u->x=n;
	 u->next=NULL;
     }
	  else
	  {
	  r=u;
	  k=(struct node*)malloc(1*sizeof(struct node));
	  k->x=n;
	  k->next=NULL;
      while(r->next!=NULL)
       {
       	r=r->next;
       }
       r->next=k;
		 }
 
}
