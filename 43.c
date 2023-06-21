#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n

int countDigits(int number) {
    char str[20];  // Chuỗi để lưu giá trị số nguyên dương n
    sprintf(str, "%d", number);  // Chuyển số nguyên dương n thành chuỗi

    int count = strlen(str);  // Đếm số lượng chữ số bằng độ dài của chuỗi

    return count;
}

int main() {
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    int digitCount = countDigits(n);

    printf("Gia tri cua bieu thuc la: %d\n", digitCount);

    return 0;
}