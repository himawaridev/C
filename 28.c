#include <stdio.h>
#include <math.h>

// Bài 28: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó

int main() {
    int i, n, x, sum = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    printf("cac uoc so cua %d la: ", n);
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
            printf("%d ", i);
        }
    }
    printf("\ntong cac uoc so nho hon chinh no: %d\n", sum);
}