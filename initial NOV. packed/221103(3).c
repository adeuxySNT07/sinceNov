#include<stdio.h>
int main() {
	float a[9] = { 0 }, max = 0, min = 0, temp = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%f", &a[i]);
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (a[j + 1]<a[j]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	float sum = 0;
	max = a[0], min = a[8];
	a[0] = 0, a[8] = 0;
	for (int i = 0; i < 9; i++) {
		sum += a[i];
	}
	sum = sum / 7;
	printf("去掉最高分：%.2f，去掉最低分：%.2f，平均分为：%.2f", min, max, sum);
	return 0;
}