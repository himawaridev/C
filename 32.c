#include <stdio.h>
#include <math.h>

// Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không

int calculator(int number) {
    int sqrtNumber = sqrt(number);
    return (sqrtNumber * sqrtNumber == number);
}

int main() {
    int n;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    printf("cac uoc so cua %d la: ", n);
    if (calculator(n)) {
        printf("%d la so chinh phuong\n", n);
    } else {
        printf("%d khong la so chinh phuong\n", n);
    }
}