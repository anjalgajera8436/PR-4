#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	
	for(b=5; b>=1; b--)
	{
		for(c=b; c>=1; c--)
		{ 
		    printf(" ");
		}
		for(a=b; a<=5; a++)
		{
			printf("%d",a);
		}
	
	}
		for(b=5; b>=1; b--)
	{
		for(a=5; a>=b; a--)
		{
			printf("%d",a);
		}
	
    }
}