#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int number1, number2;
    int operator;

    printf("Enter First Value: ");
    scanf("%i", &number1);

    system("cls");

    printf("Operators:\r\n1-Addition\r\n2-Subtraction\r\n3-Multiplication\r\n4-Division\r\n5-Modulo\r\nOperator:");
    scanf("%i", &operator);

    system("cls");

    printf("Enter Second Value: ");
    scanf("%i", &number2);

    system("cls");

    switch(operator) {
        case 1:
        printf("%i add %i is %i", number1, number2, (number1 + number2));
        break;

        case 2:
        printf("%i sub %i is %i", number1, number2, (number1 - number2));
        break;

        case 3:
        printf("%i mul %i is %i", number1, number2, (number1 * number2));
        break;

        case 4:
        printf("%i div %i is %f", number1, number2, ((float)number1 / (float)number2));
        break;

        case 5:
        printf("%i mod %i is %i", number1, number1, (number1 % number2));
        break;
    }

    return(0);
}