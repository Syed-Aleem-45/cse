#include <stdio.h>
#include <windows.h>

int i ;
int main() {
    for (i = 10 ; i >= 0 ; i--)
    {
        printf("%i\n", i);
        Sleep(1000);
    }
printf("new year");
}