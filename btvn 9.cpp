#include <stdio.h>

void themPhanTu(int arr[], int *kichThuoc, int giaTriMoi, int viTri) {
    if (viTri >= 0 && viTri <= *kichThuoc) {
        for (int i = *kichThuoc; i > viTri; i--) {
            arr[i] = arr[i - 1];
        }
        arr[viTri] = giaTriMoi;
        (*kichThuoc)++;
    } else {
        printf("Vi tri %d khong hop le!\n", viTri);
    }
}

void inMang(int arr[], int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[10] = {1, 2, 3, 4, 5};
    int kichThuoc = 5;
    int giaTriMoi = 99;
    int viTriThem = 2;

    printf("Mang truoc khi them: ");
    inMang(mang, kichThuoc);

    themPhanTu(mang, &kichThuoc, giaTriMoi, viTriThem);

    printf("Mang sau khi them: ");
    inMang(mang, kichThuoc);

    return 0;
}

