//program to find most repeating element of an array
#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int *a,i,n,t=1,count[100], k=1;
	printf("\nenter the array size");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	printf("\nenter %d elements in range 0 to 99",n);
	for(i=0;i<100;i++)
	count[i]=0;
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    count[a[i]]++;
    }
    for(i=0;i<100;i++)
    {
    	if(count[i]>t)
        {
        	t=count[i];
       
		} 
	   
    }
    if(t==1)
    printf("\n there is no repeating element");
    else
{ for(i=0;i<100;i++)
	if(count[i]==t)
	printf("\nthe most repeating element  %d ",i);
}	
	return 0;
}
