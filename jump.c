#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 2) {
            continue;
        }

        if (i == 4) {
            goto skip;
        }

        printf("%d\n", i);
    }

skip:
    printf("Loop jumped to here!\n");

    return 0;
}