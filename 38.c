#include <stdio.h>
#include <math.h>

// Bài 38: Tính S(n) = CanBac N + 1(N + CanBac N(N – 1 +…+CanBac3(2 + CanBac2(1)))) có n dấu căn

double calculateS(int n) {
    if (n == 1) {
        return sqrt(1);  
    } else {
        return sqrt(n + calculateS(n - 1));  
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