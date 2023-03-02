	#include <stdlib.h>
	#include <time.h>
	#include <stdio.h>
	
	int main(void)
	{
	
	int n;
	int lastn;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	
		if (lastn > 5)
		{
		printf("El ultimo digito de %d es %d y es mayor que 5\n", n, lastn);
		}
			else if (lastn == 0)
			{
			printf("El ultimo digito de %d es %d y es 0\n", n, lastn);
			}
				else if (lastn < 6 && lastn != 0)
				{
				printf("El ultimo digito de %d es %d y es menor que 6 y no 0\n", n, lastn);
				}
	return (0);
	}
    