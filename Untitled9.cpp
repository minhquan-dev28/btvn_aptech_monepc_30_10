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

    int countPos = 0, countNeg = 0, countZero = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) countPos++;
        else if (a[i] < 0) countNeg++;
        else countZero++;
    }

    printf("Mang toan so duong: %s\n", (countPos == n) ? "Co" : "Khong");
    printf("Mang toan so am: %s\n", (countNeg == n) ? "Co" : "Khong");
    printf("Mang co chua so 0: %s\n", (countZero > 0) ? "Co" : "Khong");
    printf("So phan tu duong: %d\n", countPos);
    printf("So phan tu am: %d\n", countNeg);
    printf("So phan tu bang 0: %d\n", countZero);

    return 0;
}
