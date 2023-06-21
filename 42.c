#include <stdio.h>
#include <math.h>

// Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k)  < n. Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + … + k

int main() {
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    int k = 0;
    int sum = 0;
    while (sum < n) {
        k++;
        sum += k;
    }

    k--;  

    printf("Gia tri cua bieu thuc la: %d\n", k);

    return 0;
}