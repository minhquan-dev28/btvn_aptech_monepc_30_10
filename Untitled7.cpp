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

    long long sumEvenPos = 0, sumOddPos = 0;

    printf("Phan tu o vi tri chan: ");
    for (int i = 0; i < n; i += 2) {
        printf("%d ", a[i]);
        sumEvenPos += a[i];
    }
    printf("\n");

    printf("Phan tu o vi tri le: ");
    for (int i = 1; i < n; i += 2) {
        printf("%d ", a[i]);
        sumOddPos += a[i];
    }
    printf("\n");

    printf("Tong vi tri chan: %lld\n", sumEvenPos);
    printf("Tong vi tri le: %lld\n", sumOddPos);

    return 0;
}
