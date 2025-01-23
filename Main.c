#include <stdio.h>
#include <stdlib.h>
int main(){
    float fn,sn,res;
    printf("Enter first number: ");
    scanf("%f",&fn);
    printf("Enter second number: ");
    scanf("%f",&sn);
    //system("cls");
    printf("%.10g  [x]  %.10g\n"
           "Operations:"
           "\nAddition a+b (1)"
           "\nSubtraction a-b (2)"
           "\nMultiplication a*b (3)"
           "\nDivision a/b (4)"
           "\nRoot (5)"
           "\nPower a^b (6)",fn,sn);
    printf("\n\nEnter your choice: ");
    int choice;
    scanf("%d",&choice);

    switch (choice) {
        case 1:
        {
            printf("%.10g + %.10g = %.10g",fn,sn,res=fn+sn);
            printf("\nResolution = %.10g",res);
            break;
        }
        case 2:
        {
            printf("%.10g - %.10g = %.10g",fn,sn,res=fn-sn);
            printf("\nResolution = %.10g",res);
            break;
        }
        case 3:
        {

        }
        default:
        {
            break;
        }
    }
    return 0;
}