#include<stdio.h>
#include<stdlib.h>
int max(int a,int b,int c,int d)
{
	int ar[4],i,m=a; ar[0]=a;ar[1]=b;ar[2]=c;ar[3]=d;
	for(i=0;i<4;i++)
     if(ar[i]>m)
     m=ar[i];
return m ;
}
int min(int a,int b,int c,int d)
{
	int ar[4],i,m=a; ar[0]=a;ar[1]=b;ar[2]=c;ar[3]=d;
	for(i=0;i<4;i++)
     if(ar[i]<m)
     m=ar[i];
    return m ;

}
int med(int a[],int start,int end)
{
int m,size;
size=end-start;
if(size%2==0)
m=(a[start+size/2]+a[start+size/2-1])/2;
else
m=a[start+size/2];
return m;
}
int main()
{
int *array1,*array2,i,n,m,med1,med2,p=0,q=0;
printf("\nenter the sizes of array first and second arrays");
scanf("%d %d",&m,&n);
array1=(int*)malloc(sizeof(int)*m);
array2=(int*)malloc(sizeof(int)*n);
printf("\nenter the first sorted array");
for(i=0;i<m;i++)
{
scanf("%d",&array1[i]);
}
printf("\nenter the second sorted array");
for(i=0;i<n;i++)
{
scanf("%d",&array2[i]);
}
label1:
med1=med(array1,p,m);
med2=med(array2,q,n);
if(m>=1 && n>=1)
{
if(med1==med2)
{
printf("\n%d is the median ",med1);
return 0;
}
else if(med1>med2)
{

m=m/2; 
 q=n/2; 
goto label1;
}
else 
{
	p=m/2; 
    n=n/2; 

goto label1;
}
}
else
{
med1=array1[p]+array2[q]+array1[m]+array2[n]-max(array1[p],array2[q],array1[m],array2[n])-min(array1[p],array2[q],array1[m],array2[n]) / 2;
printf("\n%d is the median ",med1);
}
return 0;
}
