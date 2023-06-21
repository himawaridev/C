#include <stdio.h>

int main() {
    int n;
    printf("Nhập vào số nguyên dương n: ");
    scanf("%d", &n);
    
    printf("Các ước số của %d là: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
