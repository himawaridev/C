#include <stdio.h>
#include <math.h>

// Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!

int main() {
    double i, n, x;
    double sum = 0;
    double factorial = 1;
    printf("Nhap vao so x cua ban: ");
    scanf("%lf", &x);
    printf("Nhap vao so n cua ban: ");
    scanf("%lf", &n);
    for ( i = 1; i <= n; i++) {
        factorial *= (2 * i - 1) * (2 * i);
        sum += (pow(x, (2 * i))) / factorial;
    }
    printf("Gia tri cua ban la: %lf", sum);
}