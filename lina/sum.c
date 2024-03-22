/*
#include <stdio.h>

int main() 

{
    int n, r, s,p;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    r=n%10;
    while (n>0) 
    { 
    	s=n%10;
    	n=n/10;
    }
    p = s + r;
    	printf("%d",p);
    return 0;
}
*/

#include<stdio.h>
int main()
{
	int  a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a > b)
	{
		printf("%d",a);
	}
	else if(b <= c)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
	return 0;
}
