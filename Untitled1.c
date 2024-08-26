#include <stdio.h>
void add1(int a, int b) {
	printf("%d\n", a + b);	
}
void add2(double a, double b) {
	printf("%lf\n", a + b);	
}
void add3(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	printf("%d\n", sum);
}

int main() {
	int a = 10, b = 20;
	double x = 12.2, y = 13.3;
	int arr[] = {10, 20, 30};
	// Call the functions
	add1(a, b);
	add2(x, y);
	add3(arr, 3);
	return 0;
}