#include <stdio.h>
#include <string.h>
int main(){
char name[100] = "" ;
int strname = 0;
while (strname <= 1) {
    printf("enter your name ");
    fgets(name, sizeof(name), stdin);
    strname = strlen(name);
} 


printf("hello! , %s", name);
}