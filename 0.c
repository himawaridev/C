#include <stdio.h>

int main() {
    int n, i, j;
    float sum = 0;
    
    printf("Nhập vào số n của bạn: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        float subSum = 0;
        for (j = 1; j <= i; j++) {
            subSum += j;
        }
        sum += 1.0 / subSum;
    }
    
    printf("Giá trị của bạn là: %f", sum);
    return 0;
}
