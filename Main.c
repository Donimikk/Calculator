#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void printOperations();
int main() {
    int choice;
    bool conti = true;
    printf("\twelcome to calculator\n\tPick an operation:\n\n");
    printOperations();
    scanf(" %d", &choice);
    float fn, sn, res;
    if (choice != 5 && choice != 7) {
        printf("Enter first number: ");
        scanf("%f", &fn);
        printf("Enter second number: ");
        scanf("%f", &sn);
    }else if (choice != 7) {
        printf("Enter number to root: ");
        scanf("%f", &fn);
    }
    while (1) {
        switch (choice) {
            case 1: {
                printf("%.10g + %.10g = %.10g", fn, sn, res = fn + sn);
                printf("\nResult = %.10g", res);
                break;
            }
            case 2: {
                printf("%.10g - %.10g = %.10g", fn, sn, res = fn - sn);
                printf("\nResult = %.10g", res);
                break;
            }
            case 3: {
                printf("%.10g * %.10g = %.10g", fn, sn, res = fn * sn);
                printf("\nResult = %.10g", res);
                break;
            }
            case 4: {
                if (sn == 0) {
                    printf("Division by zero");
                    break;
                }
                printf("%.10g / %.10g = %.3g", fn, sn, res = fn / sn);
                printf("\nResult = %.3g", res);
                break;
            }
            case 5: {
                printf("Square root of %.10g is: %.10g", fn, res = sqrtf(fn));
                printf("\nResult = %.10g", res);
                break;
            }
            case 6: {
                double result;
                printf("%.10g ^ %.10g = %.10g", fn, sn, result = pow(fn, sn));
                printf("\nResult = %.10g", result);
                break;
            }
            case 7: {
                printf("Goodbye!");
                return 0;
            }
            default: {
                break;
            }
        }
        printf("\n\n");

        char choiceCh;
        printf("Do you want to continue with current number? (y/n): ");
        scanf(" %c", &choiceCh);

        if (choiceCh != 'y' && choiceCh != 'Y') {
            break;
        }
        fn=res;
        printf("\n\nYour first number is: %.10g.\n",fn);
        printf("Pick an operation.\n");
        printOperations();
        scanf(" %d", &choice);
        if (choice != 5 && choice != 7) {
            printf("Enter second number: ");
            scanf("%f", &sn);
        }
    }
    return 0;
}
void printOperations() {
    printf("a [x]  b\n"
           "Operations:"
           "\nAddition a+b (1)"
           "\nSubtraction a-b (2)"
           "\nMultiplication a*b (3)"
           "\nDivision a/b (4)"
           "\nRoot (5)"
           "\nPower a^b (6)"
           "\nExit (7)");
    printf("\n\nEnter your choice(1-7): ");
}
