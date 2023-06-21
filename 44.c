#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Bài 44: Hãy tính tổng các chữ số của số nguyên dương n

int sumDigits(int number) {
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;  // Lấy chữ số cuối cùng
        sum += digit;  // Cộng chữ số vào tổng
        number /= 10;  // Loại bỏ chữ số cuối cùng
    }

    return sum;
}

int main() {
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    int digitSum = sumDigits(n);

    printf("Gia tri cua bieu thuc la: %d\n", digitSum);

    return 0;
}