#include <stdio.h>
#include <math.h>

// Bài 8: Tính S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2

int main() {
    int i, n;
    float sum = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += ((2.0 * i) + 1) / ((2.0 * i) + 2);
    }
    printf("Gia tri cua ban la: %f", sum);
}