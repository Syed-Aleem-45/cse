#include <stdio.h>
#include <string.h>
char name[] = "";
char main (){
    printf("enter any name ");
    scanf("%s", name);
    int strleng = strlen(name);
    printf("%i" , strleng );
}
