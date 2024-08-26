// Arithmetic Operations
// 5 -> +, -, *, / , %
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b); // & -> ampersand
	printf("Sum of %d and %d is: %d\n", a, b, a + b);
	printf("Diff of %d and %d is: %d\n", a, b, a - b);
	printf("Product of %d and %d is: %d\n", a, b, a * b);
	printf("Quotient of %d and %d is: %d\n", a, b, a / b);
	printf("Remainder of %d and %d is: %d\n", a, b, a % b);
}