#include <stdio.h>

int main()
{
	int var=255;
	int *p;
	
	p = &var; //storing address int variable var in pointer p
	printf("address of var variable : %x \n\n", &var);
	printf("address stored int variable var in pointer p : %x \n\n", p);
	printf("value stored in address p : %d \n\n", *p);

	return 0;
}
