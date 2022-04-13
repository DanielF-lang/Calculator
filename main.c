#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
    int number1, number2;
    printf("Enter First and Second Numbers: ");
    scanf("%i %i", &number1, &number2);

    system("cls");

    int operator;
    printf("Select Valid Operator:\r\n1-Addition\r\n2-Subtraction\r\n3-Multiplication\r\n4-Division\r\n5-Remainder\r\nEnter Operator: ");
    scanf("%i", &operator);

    system("cls");

    switch(operator) {
        case 1:
        printf("%i Add %i is %i", number1, number2, (number1 + number2));
        break;

        case 2:
        printf("%i Minus %i is %i", number1, number2, (number1 - number2));
        break;
        
        case 3:
        printf("%i Multiply %i is %i", number1, number2, (number1 * number2));
        break;

        case 4:
        printf("%i Divide %i is %i", number1, number2, (number1 / number2));
        break;

        case 5:
        printf("%i Modulo %i is %i", number1, number2, (number1 % number2));
        break;
    }

    return(0);
}