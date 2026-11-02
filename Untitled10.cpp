#include <stdio.h>

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, a[100];
    scanf("%d", &n);
    inputArray(a, n);

    int countPrime = 0;
    long long sumPrime = 0;

    printf("Cac so nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            printf("%d ", a[i]);
            countPrime++;
            sumPrime += a[i];
        }
    }
    printf("\n");

    printf("So luong so nguyen to: %d\n", countPrime);
    printf("Tong cac so nguyen to: %lld\n", sumPrime);

    return 0;
}
