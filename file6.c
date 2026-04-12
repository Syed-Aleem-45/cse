#include <stdio.h>

int column ;
int row ;
char sym ;
int main (){
printf("enter the numebr of rows ");
scanf("%i",&row);
printf("enter the numebr of colums ");
scanf("%i",&column);
printf("enter the symbol ");
scanf(" %c", &sym);

    for (int i = 1; i<=row ; i++){
        for (int j = 1; j<=column; j++){
            printf("%c",sym);
        }     
    printf("\n");
    }
}
