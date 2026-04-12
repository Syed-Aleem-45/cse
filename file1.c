#include <stdio.h>
char name[30] = "";
float gpa;
int age;

int main() {
    printf("enter your name ");
    scanf("%s", name);
    printf("enter your gpa ");
    scanf("%f", &gpa);
    printf("enter your age ");
    scanf("%i", &age);
    printf("my name is %s and my age is %i , also my gpa is %.1f",  name, age, gpa);
}
