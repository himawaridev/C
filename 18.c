#include <stdio.h>
#include <math.h>

// Bài 10: Tính T(x, n) = x^n

int main() {
    double i, n, x;
    double sum = 0;
    printf("Nhap vao so x cua ban: ");
    scanf("%lf", &x);
    printf("Nhap vao so n cua ban: ");
    scanf("%lf", &n);
    sum = pow(x, n);
    printf("Gia tri cua ban la: %lf", sum);
}