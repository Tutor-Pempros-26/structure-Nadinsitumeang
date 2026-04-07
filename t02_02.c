#include <stdio.h>

struct Menu {
    int level;
};

int main() {
    struct Menu m;

    if (scanf("%d", &m.level) != EOF) {
        switch (m.level) {
            case 5:
                printf("milk\nfruits\nvegetables\nside dishes\nstaple food\nperfect\n");
                break;
            case 4:
                printf("fruits\nvegetables\nside dishes\nstaple food\nvery good\n");
                break;
            case 3:
                printf("vegetables\nside dishes\nstaple food\ngood\n");
                break;
            case 2:
                printf("side dishes\nstaple food\nyou need vegetables\n");
                break;
            case 1:
                printf("staple food\nyou need side dishes\n");
                break;
        }
    }

    return 0;
}