#include <stdio.h>

int main() {
    int n, t, r, s = 0;

    scanf("%d", &n);
    t = n;

    while (t) {
        r = t % 10;
        s += r * r * r;
        t /= 10;
    }

    if (s == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}