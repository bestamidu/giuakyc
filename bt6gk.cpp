#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0, num = 2;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac so nguyen to dau tien la: ");

    while (count < n) {
        int mark = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
               mark = 0;
                break;
            }
        }
        if (mark) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}