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

    int maxVal = a[0], maxIndex = 0;
    int minVal = a[0], minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
            maxIndex = i;
        }
        if (a[i] < minVal) {
            minVal = a[i];
            minIndex = i;
        }
    }

    printf("Gia tri lon nhat: %d\n", maxVal);
    printf("Vi tri dau tien cua max: %d\n", maxIndex);
    printf("Gia tri nho nhat: %d\n", minVal);
    printf("Vi tri cua min: %d\n", minIndex);

    return 0;
}
