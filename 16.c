#include <stdio.h>
#include <math.h>

// Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N

int main() {
    double i, n, x;
    double sum = 0;
    double factorial = 0;
    printf("Nhap vao so x cua ban: ");
    scanf("%lf", &x);
    printf("Nhap vao so n cua ban: ");
    scanf("%lf", &n);
    for (i = 1; i <= n; i++) {
        factorial += i;
        sum += (pow(x, i)) / factorial;
    }
    printf("Gia tri cua ban la: %.2lf", sum);
}