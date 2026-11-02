#include <stdio.h>

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int main() {
    int n, a[100], x;
    scanf("%d", &n);
    inputArray(a, n);
    scanf("%d", &x);

    int countLess = 0, countEqual = 0, countGreater = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < x) countLess++;
        else if (a[i] == x) countEqual++;
        else countGreater++;
    }

    printf("So phan tu nho hon %d: %d\n", x, countLess);
    printf("So phan tu bang %d: %d\n", x, countEqual);
    printf("So phan tu lon hon %d: %d\n", x, countGreater);

    return 0;
}
