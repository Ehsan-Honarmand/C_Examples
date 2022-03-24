#include <stdio.h>

int main()
{
	int num;
	printf("Enter Your Number :\n");
	//gets(num);  gets uses for char or string
	scanf("%d",&num);

	if(num < 10)
		printf("Your Number is less than 10 \n");
	else if(num == 10)
		printf("Your Number is 10 \n");
	else
		printf("Your Number is greater than 10 \n");
	return 0;
}
