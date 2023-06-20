#include <stdio.h>
#include <math.h>

// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2

int main() {
    int i, n;
    int sum = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += pow(i, 2);
    }
    printf("Gia tri cua ban la: %d", sum);
}