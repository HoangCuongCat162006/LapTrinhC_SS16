#include <stdio.h>

void tinhTong(int *a, int *b, int *ketQua) {
    *ketQua = *a + *b;
}

int main() {
    int x = 7, y = 12, ketQua;

    tinhTong(&x, &y, &ketQua);

    printf("Tong cua %d va %d la: %d\n", x, y, ketQua);

    return 0;
}
