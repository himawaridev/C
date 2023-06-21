#include <stdio.h>
#include <math.h>

// Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25

int main() {
    int i, n, x;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    printf("cac uoc so cua %d la: ", n);
    for (i = n; i > 1; i--) {
        if (n % i == 0 && i % 2 !=0) {
            printf("%d ", i);
            break;
        }
    }
}