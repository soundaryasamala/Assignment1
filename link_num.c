//program to convert a number into linked list
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
	
int n;
    
printf("enter a number");
	
scanf("%d",&n);
	while(n!=0)
	
{
		
if(p==NULL)
	
{
	
  p=(struct node*)malloc(1*sizeof(struct node));
			
  p->x=n%10;
	     	
  p->next=NULL;
		
}
		
else
		
{
		
q=p;
		
r=(struct node*)malloc(1*sizeof(struct node));
	
r->x=n%10;
		
r->next=q;
	
p=r;
		
}
		
n=n/10;
		
}
	
while(p!=NULL)
	
{
		
printf("%d->",p->x);
		
p=p->next;
	
}
	
return 0;

}
