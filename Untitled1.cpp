#include <stdio.h>

void inputArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void printArray(int a[], int n) {
    printf("Mang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n, a[100];
    scanf("%d", &n);
    inputArray(a, n);
    printArray(a, n);
    printf("So luong phan tu: %d\n", n);
    return 0;
}
