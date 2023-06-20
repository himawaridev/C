#include <stdio.h>
#include <math.h>

// Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)

int main() {
    int i, n;
    float sum = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i + 1);
    }
    printf("Gia tri cua ban la: %f", sum);
}