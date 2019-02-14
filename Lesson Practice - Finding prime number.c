#include<stdio.h>
#include<math.h>
mian()
{
	int n,i;
	printf("Enter the number to check for prime number :");
	scanf("%d",&n);
	for(i=1;i<sqrt(n);i++)
	{
		if(i%2==0)
		{
		printf("Not a prime number");
		break;
		}
	}
}
