#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float fn, sn, res;
    printf("Enter first number: ");
    scanf("%f", &fn);
    printf("Enter second number: ");
    scanf("%f", &sn);
    //system("cls");
    printf("%.10g  [x]  %.10g\n"
           "Operations:"
           "\nAddition a+b (1)"
           "\nSubtraction a-b (2)"
           "\nMultiplication a*b (3)"
           "\nDivision a/b (4)"
           "\nRoot (5)"
           "\nPower a^b (6)", fn, sn);
    printf("\n\nEnter your choice: ");
    int choice;
    scanf("%d", &choice);

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
        case 4:{
            if(sn==0){
                printf("Division by zero");
                break;
            }
            printf("%.10g / %.10g = %.10g",fn,sn,res=fn/sn);
            printf("\nResult = %.10g",res);
            break;
        }
        case 5:{
            printf("Choose number to root: ");
            char choiceCh;
            double root;
            scanf("%c",&choiceCh);
            if(choiceCh == 'a' || choiceCh == 'A'){
                printf("Square root of a = %.10g is: %.10g",res=sqrt(fn),root=sqrt(fn));
            }else if(choiceCh == 'b' || choiceCh == 'B'){
                printf("Square root of b = %.10g is: %.10g",res=sqrt(sn),root=sqrt(sn));
            }
            break;
        }
        case 6: {
            double result;
            printf("%.10g ^ %.10g = %.10g", fn, sn, result = pow(fn, sn));
            printf("\nResult = %.10g", result);
            break;
        }
        default: {
            break;
        }
    }
    return 0;
}