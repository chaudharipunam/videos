 //output :- 5,3,9,0,0
/*
#include <stdio.h>

int main() {
    int i, j, temp;
    int a[5] = {5, 0, 3, 0, 9};
    
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = i; j < 5 - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
           
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}

/*
//    ........rotate.........


#include <stdio.h>

int main() 
{
    int n; 
    printf("enter the value:");
    scanf("%d", &n);
    int a[n];
    int i, p;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p);
        a[i] = p;
    }
    
    int k;
    printf("enter the user input k:");
    scanf("%d", &k);
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[(i + k) % n]);
    }
    
    return 0;
}

//   ........mean.......
#include<stdio.h>
int main()
{
	int i,p,n, s= 0;
	float avg;
	printf("enter the value:");
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++)
	{
		scanf("%d",&p);
		a[i] = p;
		s = s + p;
	}

	avg = (float) s/n;
	printf("Display average:%f",avg);
	return 0;
}


*/
	
// ..........mode........

#include<stdio.h>

int main()
{
    int i, j, n, p,max=0,mode;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++) 
    {
        scanf("%d", &p);
        a[i] = p;
    }
	for (int i=0; i<n; i++)
	{
		int c=1;
		for(j = i+1; j < n ; j++) 
		{
		    if(a[i] == a[j])
		    {
		        c = c + 1;
		    }
		    if(c >=max)
		    {
		    	max=c;
		    	mode=a[i];
		    }
		}    
    }
    printf("%d",mode);
    return 0;
}
	
/*	
	
// .........median..........	
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value:");
	scanf("%d",&n);
	int a[n],med;
	int i,j,m,k,p;
	for(i =  0;  i < n; i++)
	{
		scanf("%d",&p);
		a[i] = p;
	}

	if(n % 2 == 0)
	{
		k =  n / 2;
		m = a[k] + a[k-1];
	    med = m / 2;
	    printf("%d",med);
	}
	else
	{
		m =  n  / 2;
		med = a[m];
		printf("Display the mod:%d",med);
	}
	return 0;
}
	
	
*/	
	
	

	
	
	
	
	
	
	
	

