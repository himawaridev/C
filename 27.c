#include <stdio.h>
#include <math.h>

// Bài 27: Đếm số lượng “ước số chẵn” của số nguyên dương n

int main() {
    int i, n, x, count = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    printf("cac uoc so cua %d la: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 0) {
            count++;
        }
    }
    printf("%d ", count);
}