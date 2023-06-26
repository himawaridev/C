#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Bài 40: Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn

double calculateS(double x, int n) {
    if (n == 0) {
        return sqrt(x);  
    } else {
        double term = pow(x, n);  
        return sqrt(term + calculateS(x, n - 1));  
    }
}

int main() {
    double x;
    int n;
    printf("nhap vao gia tri x ");
    scanf("%lf", &x);
    printf("nhap vao gia tri n: ");
    scanf("%d", &n);

    double result = calculateS(x, n);
    printf("Gia tri cua bieu thuc la: %lf\n", result);

    return 0;
}