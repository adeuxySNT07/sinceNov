#include<stdio.h>
#include<math.h>
double hypotenuse(double x, double y);

void main() {
	double a1 = 0, b1 = 0, c1 = 0;
	double a2 = 0, b2 = 0, c2 = 0;
	double a3 = 0, b3 = 0, c3 = 0;
		scanf("%lf,%lf", &a1, &b1);
		scanf("%lf,%lf", &a2, &b2);
		scanf("%lf,%lf", &a3, &b3);
		c1 = hypotenuse(a1, b1);
		c2 = hypotenuse(a2, b2);
		c3 = hypotenuse(a3, b3);
		printf("Hypotenuse:%.1lf\n", c1);
		printf("Hypotenuse:%.1lf\n", c2);
		printf("Hypotenuse:%.1lf\n", c3);
}

double hypotenuse(double x, double y) {
	return sqrt(x * x + y * y);
}