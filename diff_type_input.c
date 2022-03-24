#include <stdio.h>

int main()
{
	int num1,num2;
	float fraction;
	char character;

	printf("enter number :\n");
	scanf("%d%i",&num1,&num2);

	printf("You Enter %d and %i \n",num1,num2);

	printf("enter number :\n");
	scanf("%f",&fraction);

	printf("You Enter %f \n",fraction);

	printf("enter name :\n");
	scanf("%c",&character);

	printf("You Enter %c",character);
	return 0;
}
