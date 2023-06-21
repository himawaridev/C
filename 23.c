#include <stdio.h>
#include <math.h>

// Bài 23: Đếm số lượng “ước số” của số nguyên dương n

int main() {
    int i, n, x, count = 0;;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    printf("Gia tri cua ban la: %d", count);
}