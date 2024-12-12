#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    printf("Nhap chuoi: ");
    fgets(arr, 100, stdin);
    printf("Chuoi cua ban: %s", arr);
    char chu_cai[] = "abcdefghijklmnopqrstuvwxyz";
    char chu_cai_hoa[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char chu_so[] = "0123456789";
    int a = 0, b = 0, c = 0;
    int length = strlen(arr);
    for (int i = 0; i < length; i++) {
        int index = 0;
        for (int j = 0; j < strlen(chu_cai); j++) {
            if (arr[i] == chu_cai[j]) {
                a++;
                index = 1;
                break;
            }
        }
        for (int j = 0; j < strlen(chu_cai_hoa); j++) {
            if (arr[i] == chu_cai_hoa[j]) {
                a++;
                index = 1;
                break;
            }
        }
        for (int j = 0; j < strlen(chu_so); j++) {
            if (arr[i] == chu_so[j]) {
                b++;
                index = 1;
                break;
            }
        }
        if (index!=1) {
            c++;
        }
    }

    printf("Co %d chu cai\n", a);
    printf("Co %d chu so\n", b);
    printf("Co %d ky tu dac biet\n", c);

    return 0;
}

