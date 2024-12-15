#include <stdio.h>

void capNhatPhanTu(int arr[], int giaTriMoi, int viTri, int kichThuoc) {
    if (viTri >= 0 && viTri < kichThuoc) {
        arr[viTri] = giaTriMoi;
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
    int mang[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang truoc khi cap nhat: ");
    inMang(mang, kichThuoc);

    capNhatPhanTu(mang, 99, 2, kichThuoc);

    printf("Mang sau khi cap nhat: ");
    inMang(mang, kichThuoc);

    return 0;
}

