#include <stdio.h>

int main()
{
	char grade;
	printf("Enter Your Grade :\n");
	//gets(num);  gets uses for char or string
	scanf("%c",&grade);
	
	switch(grade)
	{
		case 'A':
			printf("Exellant \n");
			break;
		case 'B':
			printf("keep it up! \n");
			break;
		case 'C':
			printf("well Done \n");
			break;
		case 'D':
			printf("You Passed \n");
			break;
		case 'F':
			printf("Better Luck Next \n");
			break;
		default:
			printf("Invalid Grade");
	}
	return 0;
}
