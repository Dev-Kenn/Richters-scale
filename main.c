#include <stdio.h>


int main()
{
	float num;
	
	printf("\nEnter Richter Number: ");
	scanf("%f", &num);	
	if(num <= 5)
	{
		printf("\nLITTLE OR NO DAMAGE: ");
	}
	else
	if(num >5 && num <= 5.5)
	{
		printf("\nSOME SERIOUS DAMAGE");
	}
	else if (num >5.6 && num <= 6.5)
	{
		printf("\nSERIOUS DAMAGE");
	}
	else if (num >6.6 && num <= 7.5)
	{
		printf("\nDISASTER");
	}
	else if (num >7.5)
	{
		printf("\nCATASTROPHE");
	}
		
	return 0;
}
