#include <stdio.h>


int ageverify (int age) {
    if(age >= 18 && age <= 99 ) {
        return 1;
    }
    else if (age < 18 && age >0 ) {
        return 0;
    }
    else if (age >= 100){
     return 2;
    }
    else if (age >= 0) {
        return -1;
    }

}



int main (){
int age ;
printf("enter your age ");
scanf("%d", &age);

int num = ageverify(age);
    if (num == 1){
        printf("u r an adult");
    }
    else if (num == 0) {
        printf("u r not an adult");
    }
    else if (num == 2){
    printf("u r 100+ congrats");
    }
    else if (num == -1){
    printf("enter a valid age");
    }
   
}
