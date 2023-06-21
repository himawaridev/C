#include <stdio.h>
#include <math.h>

// Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n

int main() {
    int i, n, x, count = 0;;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);

    printf("Gia tri cua ban la: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 != 0) {
            printf("%d ", i);
        }
    }
}