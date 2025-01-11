#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    printf("Find the simple or compound interest~ \n");

    char choise[20];
    printf("Do wanna calculate for simple interest or compund interest?(Enter si for simple inter... or for compund inter... enter ci)- ");
    scanf("%s",choise);

    char comp[5] = "ci";
    char simple[5] = "si";
    if(choise == simple) {
        printf("Find the simple interest and the amount~ \n");

        char cur;
        printf("Enter your currency type(symbol): ");
        scanf("%c",&cur);

        int prin, tim, rt;
        printf("Enter the principel amount: ");
        scanf("%d",&prin);
        printf("Enter the time period: ");
        scanf("%d",&tim);
        printf("Enter the rate of interest: ");
        scanf("%d",&rt);

        float interest=(prin*tim*rt)/100;
        printf("Your interest charged would be: %c%f \n",cur,interest);

        float amount = interest + prin;
        printf("And your total amount at the end of the period would be: %c%f \n",cur,amount);

        return interest;
        return amount;
    }
    else if(choise == comp) {
        printf("Find the compund interest and the totel amount~ \n");

        char cur;
        printf("Enter your currency type(symbol): ");
        scanf("%c",&cur);

        int prin, tim, rate;
        printf("Enter the principel amount: ");
        scanf("%d",&prin);
        printf("Enter thr time period: ");
        scanf("%d",&tim);
        printf("Enter the rate of interest: ");
        scanf("%d",&rate);

        float interest = prin*pow((1+rate/100),tim);
        printf("Your interest charged would be: %c%f \n",cur,interest);

        float amount = interest + prin;
        printf("And your total amount at the end of the period would be: %c%f \n",cur,amount);

        return interest;
        return amount;
    }
    return 0;
} 