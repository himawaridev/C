#include <stdio.h>
#include <math.h>

// Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N

int main() {
    double i, n, j;
    double sum = 0, factorial = 1;
    printf("Nhap vao so n cua ban: ");
    scanf("%lf", &n);
    for ( i = 1; i <= n; i++) {
        factorial *= i;
        sum += factorial;
    }
    printf("Gia tri cua ban la: %lf", sum);
}