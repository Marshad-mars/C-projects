/*requirements- The manue must be repeated in nature until the user presses the exit option.
                Atleast 2 inputs must be taken form the user to perform the operation.
                Based on the menue choice, different operation must ne performed.
*/
#include<stdio.h>
#include<math.h>

double div(double, double);
int mod(int, int);  //Modulo always takes integer value and return integer value only.
void menue_bar();  //menue_bar() is a custom function which would be used todouble div(double a, double b) {

void menue_bar() {
    printf("Welcome to my simple calculator \n");
    printf("This menue would run for nfinite number of times until you Exit this \n");
    printf("  \n");

    printf("Choose one of the following options below~ \n");
    printf("1.Addition \n");
    printf("2.Subtraction \n");
    printf("3.Multiplication \n");
    printf("4.Division \n");
    printf("5.Modulus(find reminder) \n");
    printf("6.Power \n");
    printf("7.*Exit*...press(E) \n");
    printf("  \n");
}
int main() {
    int choice;
    double first_num, second_num, result_num;

    while(1) {
        menue_bar();
        printf("Enter your choise: ");
        scanf("%d", &choice);

        if(choice == 7) {
            break;
        }
        printf("Please enter the first number: ");
        scanf("%lf", &first_num);
        printf("Now enter the second number: ");
        scanf("%lf", &second_num);
        //the format specifier for the double data type is lf.

        switch (choice){
            case 1:     //Add
                result_num = first_num + second_num;
                break;
            case 2:     //subtract 
                result_num = first_num - second_num;
                break;
            case 3:     //Multiply
                result_num = first_num * second_num;
                break;
            case 4:     //Division 
                result_num = div(first_num, second_num);
                break;
            case 5:     //Mod
                result_num = mod((int)first_num, (int)second_num);
                break;
            case 6:     //Pow 
                result_num = pow(first_num, second_num);
                break;
            default:
                break;
        }
        printf("Result of the operation is %.2f  \n",result_num);
        printf(" \n");
    }
    // return 0;
}
double div(double a, double b) {  //division-function 
    if(b == 0) {
        printf("Invalid Arguement for division, you cannot divide your first number by 0");
        prinf(" \n");
        return NAN;
    }
    else {
        return a/b;
    }
}
int mod(int a, int b) {  //modulo-function
    if(b == 0) {
        printf("Invalid Arguement for division, you cannot Mod your first number by 0");
        printf(" \n");
        return NAN;
    }
    else {
        return (int)a % (int)b;
    }
}
