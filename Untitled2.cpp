#include <stdio.h>

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

long long sumArray(int a[], int n) {
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int countGreaterThanTBC(int a[], int n, double tbc) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > tbc) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, a[100];
    scanf("%d", &n);
    inputArray(a, n);

    long long sum = sumArray(a, n);
    double tbc = (double)sum / n;
    int count = countGreaterThanTBC(a, n, tbc);

    printf("Tong cac phan tu: %lld\n", sum);
    printf("Trung binh cong: %.2f\n", tbc);
    printf("So phan tu lon hon TBC: %d\n", count);

    return 0;
}
