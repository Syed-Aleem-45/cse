#include <stdio.h>
int main() {
    int key = 50;

    int num[5] = {12, 35, 50, 567, 99};
    for (int i = 0; i < 5; i++) {
        if (num[i] == key)
        {
            printf("%d\n", num[i]);
            printf("element found");
            break;
        }
    }
}