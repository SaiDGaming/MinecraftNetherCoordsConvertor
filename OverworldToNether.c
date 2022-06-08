#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	printf("MINECRAFT NETHER COORDS DECONVERTOR (by SaiD)\n\n\n");
	float x, z, xend, zend;

	while (1)
	{
		printf("Enter X, then Z.(Coords in Overworld)\n");
		if (scanf("%f", &x) < 1) {
			printf("Script Finished Working\n");
			break;
		}
		if (scanf("%f", &z) < 1) {
			printf("Script Finished Working\n");
			break;
		}

		xend = x / 8;
		zend = z / 8;
		
		printf("Your coords is: X = %.1f, Z = %.1f\n\n", xend, zend);
	}
	return 0;
}
