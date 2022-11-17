#include<stdio.h>
#include<math.h>
float CalculateCharges(float i);
void main() {
	float t1 = 0, t2 = 0, t3 = 0;float c1 = 0, c2 = 0, c3 = 0;
	scanf("%f%f%f", &t1, &t2, &t3);
	c1 = CalculateCharges(t1);
	c2 = CalculateCharges(t2);
	c3 = CalculateCharges(t3);
	printf("Car\tHours\tCharge\n");
	printf(" 1\t%.1f\t%.2f\n", t1, c1);
	printf(" 2\t%.1f\t%.2f\n", t2, c2);
	printf(" 3\t%.1f\t%.2f\n", t3, c3);
	printf("TOTAL\t%.1f\t%.2f", t1 + t2 + t3, c1 + c2 + c3);
}

float CalculateCharges(float i) {
	if (i <= 3)
		return 2;
	if ((i>3)&&(i<=19)) {
		return 2.0+ceil(i-3)*0.5;
	}
	if (i > 19)
		return 10;
}