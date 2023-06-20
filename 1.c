#include <stdio.h>
#include <math.h>

// Bài 1: Tính S(n) = 1 + 2 + 3 + … + n

int main() {
    int n, i;
    int sum = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Gia tri cua ban la: %d", sum);
}
