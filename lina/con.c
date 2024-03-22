/*#include <stdio.h>

int main() {
    int i;
    int a[10] = {1, 2, 3, 4, 1, 1, 1, 6, 1, 1}; 

    int count = 0;

    for (i = 0; i < 10; i++) {
        if (a[i] == a[i - 1] )
        {
            count++;
        }
    }

    printf("Number of consecutive: %d\n",count);

    return 0;
}



//    consecutive	  num      
	
#include<stdio.h>
int main()
{
	int i,j;
	int a[8] = { 1,3,2,1,4,1,2,6};
	for(i = 0; i < 8; i++)
	{
		for(j = i  + 1; j < 8; j++)
		{
			if(a[i] == a[j])
			{
			
			printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}
			


*/

// armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
	int i,p,j,n,r,c=0;
	printf("eneter the  number:");
	scanf("%d",&n);
	int a[n];
	for(i = 1; i  <=  n; i++)
	{
		for(j = i; j > 0; j /= 10)
		{
			r = j % 10;
			c =  c + 1;
		}
		int k ,arm=0;
		for(k = i; k > 0; k /= 10)
		{
			p = k % 10;
			int result = pow(p, c);
			arm = arm + result;
		}
		if(arm == i)
		{
		a[p] = i;
		p =  p + 1;
		}
	}
	for (j = 0; j < p; j++)
	{
		printf("%d",a[j]);
	}
	return 0;
}
			
	
/*	

#include <stdio.h>
int main ()
{
	 int n;
	 printf("enter the number:");
	 scanf("%d",&n);
	 int p[n][n];
	 for (int i=0; i<n; i++)
	 {
	  	for (int j=0; j<n; j++)
	  	{
	 	scanf("%d",&p[i][j]);
	 	}
	 }
	 for (int i=0; i<n; i++)
	 {
	 	printf("\n");
	 	for (int j=0; j<n; j++)
	  	{
	 		printf("%d",p[j][i]);
	  	}
	 }
	 
	 return 0;		
}		
		
			
*/			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		
