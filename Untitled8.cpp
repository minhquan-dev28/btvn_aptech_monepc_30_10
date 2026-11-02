#include <stdio.h>

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int isSymmetric(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            return 0; // Không ð?i x?ng
        }
    }
    return 1; // Ð?i x?ng
}

int main() {
    int n, a[100];
    scanf("%d", &n);
    inputArray(a, n);

    if (isSymmetric(a, n)) {
        printf("Mang doi xung\n");
    } else {
        printf("Mang khong doi xung\n");
    }

    return 0;
}
