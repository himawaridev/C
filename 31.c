#include <stdio.h>
#include <math.h>

// Bài 31: Cho số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không


int calculator(int number) {
    if (number == 2) {
        return 1;
    }
    if (number <= 1 || number % 2 == 0) {
        return 0;
    }
    int sqrtNumber = sqrt(number);
    for (int i = 3; i <= sqrtNumber; i += 2) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);

    if (calculator(n)) {
        printf("%d la mot so nguyen to.\n", n);
    } else {
        printf("%d khong la mot so nguyen to.\n", n);
    }

    return 0;
}
