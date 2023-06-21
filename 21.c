#include <stdio.h>
#include <math.h>

// Bài 21: Tính tổng tất cả các “ ước số” của số nguyên dương n

int main() {
    int i, n, x, sum = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    printf("cac uoc so cua %d la: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    printf("Gia tri cua ban la: %d", sum);
}