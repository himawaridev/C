#include <stdio.h>
#include <math.h>

// Bài 41: Tính S(n) = 1 / (1 + 1 / ( 1 + 1 / (…. 1 + 1 / 1 + 1))) có n dấu phân số

double calculateS(int n) {
    if (n == 1) {
        return 1.0;  // Trường hợp cơ sở, S(1) = 1
    } else {
        return 1.0 / (1.0 + calculateS(n - 1));  // Đệ quy
    }
}

int main() {
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    double result = calculateS(n);
    printf("Gia tri cua bieu thuc la: %lf\n", result);

    return 0;
}