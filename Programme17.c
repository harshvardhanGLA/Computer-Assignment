#include<stdio.h>

void main()
{
	int i,n,sum=0;
	printf("Enter the Number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		
		{
			printf("%d,",i);
			sum+=i;
		}
		
	}

    printf("\nSum = %d", sum);
}
	