#include <stdio.h>

void sapXep(int arr[], int kichThuoc) {
    for (int i = 0; i < kichThuoc - 1; i++) {
        for (int j = 0; j < kichThuoc - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoan doi arr[j] va arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void inMang(int arr[], int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {5, 2, 9, 1, 5, 6};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang truoc khi sap xep: ");
    inMang(mang, kichThuoc);

    sapXep(mang, kichThuoc);

    printf("Mang sau khi sap xep: ");
    inMang(mang, kichThuoc);

    return 0;
}

