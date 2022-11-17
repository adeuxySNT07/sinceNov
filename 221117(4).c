#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int Fac(int n)
{
    int res = n;
    if (n > 1)
        res = res * Fac(n - 1);
    return res;
}
void CalculateE() {
    double sum = 0;
    int x = 0, n = 0;
    scanf("%d", &x);
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        sum += pow(x, i) / Fac(i);
    }
    printf("%.2lf", sum + 1);
}

void main(){
    CalculateE();
}