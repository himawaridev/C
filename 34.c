#include <stdio.h>
#include <math.h>

// Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1)  có n dấu căn

double calculateS(int n) {
    if (n == 1) {
        return sqrt(1);  // Trường hợp cơ sở, S(1) = √1
    } else {
        return sqrt(n + calculateS(n - 1));  // Đệ quy
    }
}

int main() {
    int n;
    printf("nhap vao gia tri: ");
    scanf("%d", &n);

    double result = calculateS(n);
    printf("Gia tri cua bieu thuc la: %lf\n", result);

    return 0;
}