#include <stdio.h>
#include <math.h>

// Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n

int main() {
    int i, n, x;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    printf("cac uoc so cua %d la: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
}