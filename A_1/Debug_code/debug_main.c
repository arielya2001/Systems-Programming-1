#include <stdio.h>
#include <math.h>

float square_root(int num)
{
    float x = num;
    float y = 1;
    float epsilon = 0.0001;
    while (fabs(x - y) > epsilon)
    {
        x = (x + y) / 2;
        y = num / x;
    }
    return x;
}

void bug1()
{
    int numbers[] = {4, 8, 15, 16, 23, 42};
    int sum = 0;
    double runningAvg = 0;

    for (int i = 0; i < 6; i++)
    {
        sum = sum + numbers[i];
        runningAvg = (float)sum / (1 + i);
        printf("After adding %d: sum = %d, average = %.2f\n",
               numbers[i], sum, runningAvg);
    }
}

void bug2()
{
    int squares[] = {1, 4, 9, 16, 25};
    float results[5];
    for (int i = 0; i < 5; i++)
    {
        results[i] = square_root(squares[i]);
        if (fabs(results[i] * results[i] - squares[i]) / squares[i] > 0.0001)
        {
            printf("Something went wrong with square root for %d!\n", squares[i]);
        }
        else
        {
            printf("Square root of %d is %.2f\n", squares[i], results[i]);
        }
    }
}

void bug3()
{
    int i = 10;
    while (i >= 0)
    {
        i--;
    }
}

int main()
{
    bug1();
    bug2();
    bug3();
    return 0;
}