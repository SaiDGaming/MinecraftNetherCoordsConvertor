#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	printf("MINECRAFT NETHER COORDS CONVERTOR (by SaiD)\n\n\n");
	bool isActive = true;
	char anyc[1024];
	float x, z, xend, zend;

	while (isActive)
	{
		printf("Enter X, then Z.(Coords in Nether)\n");
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
		if(xend <= 1)
			xend = 1;
		if(zend <= 1)
			zend = 1;
	
		
		printf("Your coords is: X = %.1f, Z = %.1f\n\n", xend, zend);
	}
		return 0;
}
