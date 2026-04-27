#include <stdio.h>
int main() {
    int num[5] = {12, 35, 56, 567, 99};
    for (int i = 4; i > 0; i--) {
        printf("%d\n", num[i]);
    }
}