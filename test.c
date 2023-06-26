#include <stdio.h>

// nhập vao 1 dãy số nguyên gồm n phần tử (0 < n < 15) , tìm phần tử nỏ nhất đầu tiên và phần tử lớn nhất cuối cùng, tính trung bình cộng của 2 phần tử này ( cho biết ở vị trí nào), sau đó chèn vào vị trí cuối cùng của dãy. Viết bằng ngôn ngữ C và chỉ dùng thư viện #include <stdio.h>

int main() {
    int n, i;
    do {
        printf("nhap vao 1 day so nguyen (0 < n < 15) %d");
        scanf("%d", &n);
    }
    while (n <= 0 && n >= 15);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("Nhap vao so torng mang: %d", &a[i]);
    }
}