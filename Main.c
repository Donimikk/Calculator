#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
    int choice;
    bool conti = true;
    printf("\twelcome to calculator\nPick an operation.\n");
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
    scanf(" %d", &choice);
    float fn, sn, res;
    if (choice != 5) {
        printf("Enter first number: ");
        scanf("%f", &fn);
        printf("Enter second number: ");
        scanf("%f", &sn);
    }
    while (conti) {
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

                char choiceCh;
                bool again = true;
                double root;

                while(again) {
                    printf("Choose number to root(a/b): ");
                    scanf(" %c", &choiceCh);
                    if (choiceCh == 'a' || choiceCh == 'A') {
                        printf("Square root of a = %.10g is: %.10g", fn, root = sqrt(fn));
                        again = false;
                    } else if (choiceCh == 'b' || choiceCh == 'B') {
                        printf("Square root of b = %.10g is: %.10g", sn, root = sqrt(sn));
                        again = false;
                    } else {
                        printf("Invalid input, try again.\n");
                    }
                }
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
            conti = false;
        }
        printf("\n\nYour first number is ");
    }
    return 0;
}