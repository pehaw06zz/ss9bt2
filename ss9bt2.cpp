#include <stdio.h>
#define MAX_SIZE 20
int main() {
    int arr[MAX_SIZE];
    int currentLength;
    printf("Nhap so phan tu cua mang (toi da %d): ", MAX_SIZE);
    scanf("%d", &currentLength);

    if (currentLength > MAX_SIZE || currentLength < 0) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int modifyIndex, newValue;
    printf("Nhap vi tri can sua (0-%d): ", currentLength - 1);
    scanf("%d", &modifyIndex);

    if (modifyIndex < 0 || modifyIndex >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);
    arr[modifyIndex] = newValue;
    printf("Mang sau khi sua:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
