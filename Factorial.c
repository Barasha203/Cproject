#include <stdio.h>

int main()
{
    int input, result = 1;
    printf("\nEnter a no....");
    scanf("%d", &input);



    for (int i = 1; i <= input; i++)
    {
        result = result * i;
    }
    printf("\n\nThe factorial is %d\n", result);

    return 0;
}