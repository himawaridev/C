#include <stdio.h>
#include <math.h>

// Bài 30: Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không

int calculator(int number) {
        int i, sum = 0;
        for (i = 1; i < number; i++) {
            if (number % i == 0) {
                sum += i;
            }
        }
        return (sum == number);
    }
int main() {
    int n;
    printf("Nhap vao so n cua ban: ");
    scanf("%d", &n);
    printf("cac uoc so cua %d la: ", n);
    if (calculator(n)) {
        printf("%d la mot so hoan thien \n", n);
    }
    else {
        printf("%d khong la mot so hoan thien \n", n);
    }
}