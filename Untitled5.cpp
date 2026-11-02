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

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }

    if (count > 0) {
        printf("Tim thay %d trong mang\n", x);
        printf("Cac vi tri: ");
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                printf("%d ", i);
            }
        }
        printf("\nSo lan xuat hien: %d\n", count);
    } else {
        printf("Khong tim thay %d trong mang\n", x);
    }

    return 0;
}
