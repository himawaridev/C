#include <stdio.h>
#include <math.h>

//Bài 3: Tính S(n) = 1 + ½ + 1/3 + … + 1/n

int main() {
    int i, n;
    float sum = 0;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("Gia tri cua ban la: %f", sum);
}