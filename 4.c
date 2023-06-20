#include <stdio.h>
#include <math.h>

// Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n

int main() {
    int i, n;
    float sum = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i);
    }
    printf("Gia tri cua ban la: %f", sum);
}