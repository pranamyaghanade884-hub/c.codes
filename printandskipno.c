#include <stdio.h>

int main() {
    int i;
    
    for(i = 1; i <= 30; i++) {
        if(i == 25) {
            continue;  // agar 25 aaya toh niche ka code skip karke loop next iteration par chala jayega
        }
        printf("%d\n", i);
    }

    return 0;
}
