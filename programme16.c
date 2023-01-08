#include<stdio.h>

void main()
{
	int num,count,sum=0;
	printf("Enter the number");
	scanf("%d",&num);
	count=1;
	while(num>=count)
	{
		printf("%d,",count);
		count++;
	}
	
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("\nSum = %d", sum);
}
