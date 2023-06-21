#include <stdio.h>
#include <math.h>

// Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn

double calculateS(int n) {
    if (n == 2) {
        return sqrt(2);  
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