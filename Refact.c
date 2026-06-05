#include <stdio.h>

int fact(int n){
    if(n > 1){
        return n * fact(n - 1);
    }

    return 1;
}

int main(){
    int num = 5;

    int result = fact(num);

    printf("%d", result);

    return 0;
}
