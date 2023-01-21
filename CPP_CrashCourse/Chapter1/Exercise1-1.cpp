#include <cstdio>

int absolute_value(int num)
{
    if (num < 0) {
        return -1 * num;
    }
    else {
        return num;
    }
}

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main() {
    int myNum = -10;
    printf("Absolute value of %d is %d\n", myNum, absolute_value(myNum));
    printf("Absolute value of %d is %d\n", 10, absolute_value(10));
    printf("Absolute value of %d is %d\n", 0, absolute_value(0));

    printf("Sum of %d and %d is %d\n", 10, 10, sum(10, 10));
    printf("Sum of %d and %d is %d\n", -10, 10, sum(-10, 10));
    printf("Sum of %d and %d is %d\n", -10, -10, sum(-10, -10));

    return 0;
}