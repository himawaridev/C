#include <stdio.h>
#include <math.h>

// Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!

int main() {
    double i, n, x;
    double sum = 0;
    double factorial = 1;
    printf("Nhap vao so x cua ban: ");
    scanf("%lf", &x);
    printf("Nhap vao so n cua ban: ");
    scanf("%lf", &n);
    for (i = 1; i <= n; i++) {
        factorial *= (2 * i) * (2 * i + 1);
        sum += pow(x, 2 * i + 1) / factorial;
    }
    printf("Gia tri cua ban la: %lf", sum);
}