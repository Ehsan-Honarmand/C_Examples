#include <stdio.h>

int main()
{
	int i,j,a,b;

 	for(i=0; i<30; i++)
	{
		printf("\t\t\t\t");
		for(j=0; j<30; j++)
		{
			a = (i-15)*(i-15);
			b = (j-15)*(j-15);
			if( (a+b) < 225 )
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}
