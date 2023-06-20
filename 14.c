#include <stdio.h>
#include <math.h>

// Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1

int main() {
    double i, n, x;
    double sum = 0;
    printf("Nhap vao so x cua ban: ");
    scanf("%lf", &x);
    printf("Nhap vao so n cua ban: ");
    scanf("%lf", &n);
    for (i = 1; i < n; i++) {
        sum += pow(x, (2 * i + 1));
    }
    printf("Gia tri cua ban la: %lf", sum);
}