#include <stdio.h>
int main() 
{
	// Variable Declaration
	int side, area, peri;
	
	// reading side value
	scanf("%d", &side);
	
	// Calculation
	area = side * side;
	peri = 4 * side;
	
	// Printing
	printf("%d %d", area, peri);	
}