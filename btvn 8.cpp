#include <stdio.h>
#include <string.h>

void daoNguocChuoi(char *inputString, char *reverseString) {
    int len = strlen(inputString);
    int i;

    // Dao nguoc chuoi
    for (i = 0; i < len; i++) {
        reverseString[i] = inputString[len - i - 1];
    }
    reverseString[i] = '\0';
}

int main() {
    char inputString[100], reverseString[100];

    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';

    daoNguocChuoi(inputString, reverseString);

    printf("Chuoi nhap vao: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

