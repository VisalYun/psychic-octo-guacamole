#include<stdio.h>
main()
{
	int b=0,c=0;
	char input;
	while(input!='!')
	{
		scanf(" %c",&input);
		if(input == 'a' || input == 'e' || input =='i' || input == 'o' || input == 'u')
			b +=1;
		else
			c +=1;
	}
	if(b>c)
	printf("The vowels are more than non-vowels");
	else if(b<c)
	printf("The vowels are less than the non-vowels");
	else
	printf("The vowels and the non-vowels are equal");
}
