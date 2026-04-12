#include <stdio.h>
int num ;
int fact = 1 ;
int main (){
    printf("enter a numeber ") ;
    scanf("%d", &num);
    
    for(int i = num  ; i > 0; i--){
       fact = fact * i ;

        

    }
printf("%d", fact);

}