//program to check if 3 coordiantes form a triangle
#include<stdio.h>
#include<math.h>
int check(float a,float b,float c)
{

		if(((a!=0) && (b!=0) && (c!=0))&&(a+b>c)&&(b+c>a)&&(a+c>b))
		return 1;
		else
		return 0;
}
int right(float a,float b,float c)
{
	if((a*a+b*b==c*c)||(c*c+b*b==a*a)||(a*a+c*c==b*b))
	return 1;
	else 
	return 0;
}
int obtuse(float a,float b,float c)
{
	if((a*a+b*b<c*c)||(c*c+b*b<a*a)||(a*a+c*c<b*b))
	return 1;
	else 
	return 0;
}
int main()
{
	int x1,x2,x3,y1,y2,y3,i;
	float a,b,c;
	char *s;
	printf("enter X1 coordinates\n");
	scanf("%d %d",&x1,&y1);
	printf("enter X2 coordinates\n");
    scanf("%d %d",&x2,&y2);
    printf("enter X3 coordinates\n");
    scanf("%d %d",&x3,&y3);
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    if(((x1==x2)&&(x2==x3))||((y1==y2)&&(y2==y3)))
    printf("cannot form a triangle");
    else
    {
    	if(check(a,b,c)==1)
    	{
    		if((a==b)&&(b==c))
    		{
    			if(right(a,b,c))
    			s="right";
    			else 
    			s="acute";
    		printf("\n %s equilateral triangle can be formed",s);
    		}
    		else if(((a==b)&&(b!=c))||((c==b)&&(a!=c))||((a==c)&&(b!=c)))
    		{
    		if(right(a,b,c))
    			s="right";
    			else if(obtuse(a,b,c))
    			s="obtuse";
    			else 
    			s="acute";	
    		
    		printf("\n %s isosceles triangle can be formed",s);
    		}
    		else if((a!=b)&&(b!=c)&&(c!=a))
    		{
    			if(right(a,b,c))
    			s="right";
    			else if(obtuse(a,b,c))
    			s="obtuse";
    			else 
    			s="acute";
    		printf("\n %s scalane triangle can be formed",s);
    		}
    	}
    	else
    	printf("cannot form a triangle");
    }
    return 0;
}
