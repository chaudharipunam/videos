

// inserting 
#include <stdio.h>

int main() {
    int n = 5;
    int a[5] = {10, 20, 30, 50, 60}; 
    int k, t, i;

    printf("Enter the position you want to insert: ");
    scanf("%d", &k);

    if (k < 0 || k > n)
    {
        printf("Invalid position\n");
    }

    printf("Enter the value to be inserted: ");
    scanf("%d", &t);
    for (i = n; i >= k; i--)
    {
        a[i] = a[i - 1];
    }

    a[k - 1] = t;

    n++; 

    printf("Updated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


/*

// deleting array element  
#include<stdio.h>

int main() {
    int k, j;
    printf("you want indexing:");
    scanf("%d", &k);
    int a[5] = {10, 20, 30, 40, 50};

    if (k < 0 || k >= 5)

    for (j = k; j < 4; j++) {
        a[j] = a[j + 1];
    }
	printf("update array\n");
    for (j = 0; j < 4; j++) {
        printf("%d ", a[j]);
    }
    printf("\n");

    return 0;
}
	

// reverce	

#include <stdio.h>

int main() {
    int n,i,j,k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    
    int temp;
    for (i = 0; i < k; i++)
    {
        temp = a[i]; 
        for (j = 0; j < n - 1; j++)
        {
            a[j] = a[j + 1];  
        }
        a[n - 1] = temp;  
    }

    for (j = 0; j < n; j++) 
    {
        printf("%d ", a[j]);
    }
    return 0;
}


 //  marge array

#include<stdio.h>

int main() {
    int i, j, k = 0;
    int a[4] = {1, 2, 3, 4};
    int b[4] = {2, 6,5, 4};
    int c[8]; 

    i = j = 0; 

    // Merge arrays a and b into c
    while (i < 4 && j < 4) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    /
    while (i < 4) {
        c[k++] = a[i++];
    }
    while (j < 4) {
        c[k++] = b[j++];
    }

  
    for (int l = 0; l < 8; l++) {
        printf("%d ", c[l]);
    }

    return 0;
}



// mean, mode, mian
#include<stdio.h>
int main()
{
	int i, s= 0;
	float avg;
	int a[5] =  {1,2,3,4,5};
	for(i = 0; i < 5; i++)
	{
		s = s + a[i];
	}

	avg = (float) s/5;
	printf("Display average:%f",avg);
	return 0;
}
	
// mode
#include<stdio.h>
int main()
{
	int i,j;
	int a[5] = {1,2,3,4,2};
	for(i = 0; i < 5; i++)
	{
		for(j = i + 1; j < 5; j++)
		{
			if(a[i] == a[j])
			{
				printf("%d\n",a[i]);
			}
		}
		
	}
	return 0;
}

 meadian
#include<stdio.h>
int main()
{
	int i,j,m,k;
	int a[5] = {1,2,3,4,5};
	if(5 % 2 == 0)
	{
		k =  5 / 2;
		m = a[k] + a[k-1];
	}
	{
		m =  5  / 2;
	}
	printf("%d",m);
	return 0;
}


//  7 + 5 = 12
#include <stdio.h>

int main() {
    int i, j, s = 0;
    int k = 18;
    int a[5] = {3, 6, 7, 5, 10};

    for (i = 0; i < 5; i++) {
        s = 0;
        for (j = i; j < 5; j++) {
            s = s + a[j];
        }
        if (k == s) {
            printf("Subarray with sum %d found: ", k);
            for (j = i; j < 5; j++) {
                printf("%d ", a[j]);
            }
            printf("\n");
        }
    }
    return 0;
}

	

#include<stdio.h>
int main()
{
	char a[] = "lina  raju barve\0";
	int  i = 0;
	while(a[i] != '\0')
	{
	printf("%c",a[i]);
	i++;
	}
	return 0;
}
	
*/	


