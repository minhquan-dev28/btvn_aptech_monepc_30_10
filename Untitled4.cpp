#include <stdio.h>

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int main() {
    int n, a[100];
    scanf("%d", &n);
    inputArray(a, n);

    int countEven = 0, countOdd = 0;
    long long sumEven = 0, sumOdd = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            countEven++;
            sumEven += a[i];
        } else {
            countOdd++;
            sumOdd += a[i];
        }
    }

    printf("So luong so chan: %d\n", countEven);
    printf("So luong so le: %d\n", countOdd);
    printf("Tong cac so chan: %lld\n", sumEven);
    printf("Tong cac so le: %lld\n", sumOdd);

    return 0;
}
