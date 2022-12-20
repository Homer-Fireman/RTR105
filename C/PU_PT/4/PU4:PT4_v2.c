#include <stdio.h>
#include <stdlib.h>

int main(){
int num;
printf("Enter a decimal number: ");
scanf("%d", &num);

char data_type;
printf("Enter data type (c = char, i = int, l = long long int): ");
scanf(" %c", &data_type);

switch (data_type)
{
    case 'c':
    {
        char result = 1;
        int i = 1;
        while (i <= num)
        {
            result *= i;
            if (result < 0)
            {
                printf("Error: Overflow occurred while calculating factorial.\n");
                break;
            }
            i++;
        }
        if (result >= 0)
            printf("Factorial of %d is %d.\n", num, result);
        break;
    }
    case 'i':
    {
        int result = 1;
        int i = 1;
        while (i <= num)
        {
            result *= i;
            if (result < 0)
            {
                printf("Error: Overflow occurred while calculating factorial.\n");
                break;
            }
            i++;
        }
        if (result >= 0)
            printf("Factorial of %d is %d.\n", num, result);
        break;
    }
    case 'l':
    {
        long long int result = 1;
        int i = 1;
        while (i <= num)
        {
            result *= i;
            if (result < 0)
            {
                printf("Error: Overflow occurred while calculating factorial.\n");
                break;
            }
            i++;
        }
        if (result >= 0)
            printf("Factorial of %d is %lld.\n", num, result);
        break;
    }
    default:
        printf("Error: Invalid data type selected.\n");
}

return 0;
}