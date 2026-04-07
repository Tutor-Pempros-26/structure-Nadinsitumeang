#include <stdio.h>

struct Operasi {
    char operator;
    int operand;
    int hasil;
    int count;
};

int main() {
    struct Operasi op;
    op.count = 0;

    if (scanf(" %c", &op.operator) != EOF) {
        if (op.operator == '+') op.hasil = 0;
        else if (op.operator == '-') op.hasil = 0;
        else if (op.operator == '*') op.hasil = 1;

        printf("%c\n", op.operator);

        while (op.count < 4) {
            if (scanf("%d", &op.operand) == EOF || op.operand == -1) {
                if (op.operand == -1) {
                    printf("-1\n0\n");
                }
                return 0;
            }

            if (op.operator == '+') op.hasil += op.operand;
            else if (op.operator == '-') op.hasil -= op.operand;
            else if (op.operator == '*') op.hasil *= op.operand;

            printf("%d\n%d\n", op.operand, op.hasil);
            op.count++;
        }
    }

    return 0;
}