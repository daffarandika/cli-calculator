#include <stdio.h>

int main() {
    int operator, a, b;
    while (1) {
        printf("Pilih operator: \n");
        printf("1. + (Tambah)\n");
        printf("2. - (Kurang)\n");
        printf("3. x (Kali)\n");
        printf("4. / (Bagi)\n");
        printf("5. Keluar\n");
        scanf("%d", &operator);
        if (operator == 5) break;

        printf("Masukan angka pertama: ");
        scanf("%d", &a);
        printf("Masukan angka kedua: ");
        scanf("%d", &b);

        switch (operator) {
            case 1: 
                printf("hasil dari %d + %d adalah %d\n", a, b, a+b);
                break;
            case 2: 
                printf("hasil dari %d - %d adalah %d\n", a, b, a-b);
                break;
            case 3: 
                printf("hasil dari %d * %d adalah %d\n", a, b, a*b);
                break;
            case 4: 
                printf("hasil dari %d / %d adalah %d\n", a, b, a/b);
                break;
        }
    }
    printf("see you next time!\n");
    return 0;
}
