#include <stdio.h>
#include <math.h>

// Bài 39: Tính S(n) = CanBac N + 1(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!))) có n dấu căn

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

double calculateS(int n) {
    if (n == 1) {
        return sqrt(1);  
    } else {
        int factorialN = factorial(n);  
        return sqrt(n + calculateS(n - 1)); 
    }
}

int main() {
    int n;
    printf("nhap vao gia tri: ");
    scanf("%d", &n);

    double result = calculateS(n);
    printf("Gia tri cua bieu thuc la:  %lf\n", result);

    return 0;
}