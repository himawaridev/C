#include <stdio.h>
#include <math.h>

// Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n

int main() {
    double i, n, x;
    double sum = 0;
    printf("Nhap vao so x cua ban: ");
    scanf("%lf", &x);
    printf("Nhap vao so n cua ban: ");
    scanf("%lf", &n);
    for (i = 0; i < n; i++) {
        sum += pow(x, i);
    }
    printf("Gia tri cua ban la: %lf", sum);
}