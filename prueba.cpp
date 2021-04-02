#include <stdio.h>

int main() {
    int Buff[5] = {0, 69, 23, 14, 55};
    int *p = Buff;
    for (int i=0; i < 5; i++) {
        printf("%d\n", *p);
        p++;
    }
    getchar();
    return 0;
}