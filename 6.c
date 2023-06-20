#include <stdio.h>
#include <math.h>

// Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)

int main() {
    int i, n;
    float sum = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += (float)1 / i * (i + 1);
    }
    printf("Gia tri cua ban la: %f", sum);
}