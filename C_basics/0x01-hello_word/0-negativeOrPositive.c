#include <stdlib.h>
#include <time.h>
#include <stdio.h>

	int main(void)
	{
	int x;
	
	srand(time(0));
	x = rand() - RAND_MAX / 2;
		
		if (x > 0)			{
		printf("\n%d es positivo\n", x);
		}
			else if (x < 0)
				{
				printf("\n%d is negative\n", x);
				}
				else
					{
					printf("\n%d is zero\n", x);
					}
	return (0);
}
