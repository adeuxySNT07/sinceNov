#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	int z[10] = { 0,1,3,4,5,6,7,8,9,10 };
	int m[10] = { 1,0,9,8,7,6,5,4,3,2 };
	int x[18];
	int n, i, j, k, l, sum, c;
		sum = 0;
		for (j = 0; j <= 17; j++)
		{
			scanf("%1d", &x[j]);
		}
		for (l = 0; l <= 16; l++)
		{
			sum += x[l] * weight[l];
		}
		c = sum % 11;
		for (k = 0; k <= 9; k++)
		{
			if (c == z[k])
			{
				break;
			}
		}
		if (m[k] == x[17])
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	return 0;
}
