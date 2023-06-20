#include <stdio.h>
#include <math.h>

// Bài 7: Tính S(n) = ½ + 2/3 + ¾ + …. + n / n + 1

int main() {
    int i, n;
    float sum = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (float)i / (i + 1);
    }
    printf("Gia tri cua ban la: %f", sum);
}