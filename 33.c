#include <stdio.h>
#include <math.h>

// Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn

double calculateS(int n) {
    if (n == 0) {
        return sqrt(2);  
    } else {
        return sqrt(2 + calculateS(n - 1));  
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