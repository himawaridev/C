#include <stdio.h>
#include <math.h>

// Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N

int main() {
    double n, i, j;
    double sum = 0;
    double subSum = 0;
    printf("Nhap vao so n cua ban:  ");
    scanf("%lf", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            subSum += j;
        }
        sum += 1.0 / subSum;
    }
    
    printf("Gia tri cua ban la:  %lf", sum);
    return 0;
}