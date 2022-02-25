#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int maximum(int x, int y, int z);//function prototype

int main(void)
{
    int number1;
    int number2;
    int number3;

    printf("%s", "Enter three integers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    printf("Maximum is: %d\n", maximum(number1, number2, number3));
}


int maximum(int x, int y, int z)
{
    int max = x;

    if (y > max){//if y is larger than max
        max = y;//assign y to max
    }

    if(z > max){//if z is larger than max
        max = z;//assign z to max
    }

    return max;//max is the largest value
}