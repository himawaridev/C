#include <stdio.h>
#include <math.h>

// Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n

int main() {
    double i, n, x;
    double sum = 0;
    printf("Nhap vao so x cua ban: ");
    scanf("%lf", &x);
    printf("Nhap vao so n cua ban: ");
    scanf("%lf", &n);
    for (i = 1; i < n; i++) {
        sum += pow(x, 2 * i);
    }
    printf("Gia tri cua ban la: %lf", sum);
}