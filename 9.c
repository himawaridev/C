#include <stdio.h>
#include <math.h>

// Bài 9: Tính T(n) = 1 x 2 x 3…x N

int main() {
    double i, n;
    double sum = 1;
    printf("Nhap vao so n cua ban: ");
    scanf("%lf", &n);
    for (i = 1; i <= n; i++) {
        sum *= i;
    }
    printf("Gia tri cua ban la: %lf", sum);
}