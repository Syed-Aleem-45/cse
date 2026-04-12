#include <stdio.h>
int funcnum = 0;
int bankblan = 1000;
int withnum = 0;
int deponum = 0;
int running = 1;


int bankban (int funcnum){
    if (funcnum == 1 ){
    printf("your bank balance is : %d\n",bankblan);
    }
    else {
    printf("error 101");
    }
    return(bankblan);
}
int bankwath (int funcnum){
    if (funcnum == 2 ){
        printf("enter the amount you wanna withdraw : ");
        scanf("%d", &withnum);
            if (bankblan < withnum){
                printf("not enough money in the bank\n");
            }
            else if (withnum <= bankblan && withnum > 0){
                bankblan = bankblan - withnum;
                printf("u have withdraw %d and your balance is %d\n", withnum, bankblan);
            }
            else if (withnum<=0){
                printf("enter a valid amount\n");
            }
            else {
                printf("error 101");
            }
    }
    else {
    return printf("error 101");
    }
    return(bankblan);
}
int bankdepo(int funcnum){
    if (funcnum == 3){
        printf("enter the deposite amount : ");
        scanf("%d",&deponum);
        if (deponum > 0){
            bankblan = bankblan + deponum;
            printf("u have deposited %d and your balance is %d\n", deponum, bankblan);
        }
        else if (deponum <= 0){
        printf("enter a valid amount\n");
        }
        else {
        printf("error 101");
        }
    return(bankblan);
    }
else {
    printf("error 101");
}
}



int main (){
    printf("welcome to abc bank\n");
while (running == 1){
    printf("Enter the number corresponding to the feature you want to use.\n");
    printf("1. check bank balance\n");
    printf("2. withdraw money\n");
    printf("3. deposite money\n");
    printf("4. exit bank\n");
    printf("enter here : ");
    scanf("%d", &funcnum);
    if (funcnum == 1){
    bankban(funcnum);}
    else if (funcnum == 2){
    bankwath(funcnum);
    }
    else if (funcnum == 3){
        bankdepo(funcnum);

    }
    else if (funcnum == 4){
        running = 0;
    }
    else {
        printf("error 101");

    }
}

}