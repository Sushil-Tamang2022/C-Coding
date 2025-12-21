#include <stdio.h>
#include <stdbool.h>

int getMax(int x, int y)
{

    if (x >= y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

bool ageCheck(int age)
{

    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double square(double num)
{
    return num * num;
}

double cube(double num)
{
    return num * num * num;
}

int main()
{

    // return = returns a value back to where you call a function

    int max = getMax(4, 5);

    printf("%d", max);

    return 0;
}