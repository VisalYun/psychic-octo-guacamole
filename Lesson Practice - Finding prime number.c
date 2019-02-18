#include<stdio.h>
#include<math.h>
main()
{
	int n,i;
	printf("Enter the number to check for prime number :");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		printf("Not a prime number");
		break;
		}
		esle
		{
			if(n%(i+1)==0)
			   printf("Is a prime number");
		}
	}
}
