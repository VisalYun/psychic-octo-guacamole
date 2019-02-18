//#include <stdio.h>
//#include <math.h>
//int main ()
//{
//	int a, b, c;
//	float x1, x2, deta;
//	
//	printf("Use this program to solve the equation of second degree\n\n\n");
//	
//	printf("Enter the value of a  :");
//	scanf("%d", &a);
//	
//	printf("Enter the value of b  :");
//	scanf("%d", &b);
//	
//	printf("Enter the value of c  :");
//	scanf("%d", &c);
//	
//	deta = (pow(b, 2) - (4*a*c));
//	
//	if ( deta == 0)
//	{
//		x1 = x2 = ((-b)/(2*a));
//		
//		printf("The value of x1 =  x2 = %.2f", x1);
//	}
//	
//	else if ( deta < 0)
//	{
//		printf("No answer for this equation for now");
//	}
//	else if ( deta > 0)
//	{
//		x1 = ((-b) + sqrt(deta))/(2*a);	
//		x2 = ((-b) - sqrt(deta))/(2*a);
//		
//		printf("The value of x2 = %.2f", x2);
//		printf("The value of x1 = %.2f", x1);
//	}
//
//}


#include<stdio.h>
main()
{
	int a[] = {10,5000,30,40},max,i;
	max = a[0];
	for(i=1;i<=5;i++)
	{
		if(a[i]>max)
		max = a[i];
	}
	printf("The largest value in the array is %d",max);
	
}
