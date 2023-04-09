#include <stdio.h>

int factorialAns(int value);

int main(){
    int value;
    value = factorialAns(5);
    printf("\n\n%d is the answer", value);
    return 0;
}



int factorialAns(int value){
    int factroial = 1, num1, num2;
    printf("\n\n\t\tENTER A VALUE: ");
    scanf("%d", &num1);
    num2 = num1;
    if (num1 > 0){
        for (int i = 0; i < num2; i++)
        {
            factroial *= num1;
            --num1;
        }
        value = factroial;
    }

    else if (num1 == 0){
        factroial = 1;
        value = factroial;
    }

    else{
        printf("\n\n\t***INVALID DIGIT ENTERED***\n\n");
    }
    return value;
}
