#include <stdio.h>

int FiboSeq_Last(int last_num)
{
    int prev = 0;
    int curr = 1;
    int next = 1;
    int fib[1000];
    int i = 0;

    fib[i] = prev;
    printf("%i", fib[i]);
    ++i;

    if (last_num != 0)
    {
        while (last_num >= curr)
        {
            fib[i] = next;
            next = prev + curr;
            prev = curr;
            curr = next;
            i++;
        }

        for (int j = 1; j < i; j++)
        {
            printf(", %i", fib[j]);
        }
    }
}

int FiboSeq(int fib_num)
{
    int prev = 0;
    int curr = 1;
    int next = 1;
    int fib[1000];
    int i = 0;

    fib[i] = prev;
    printf("%i", fib[i]);
    ++i;

    if (fib_num != 0)
    {
        while (fib_num > i)
        {
            fib[i] = next;
            next = prev + curr;
            prev = curr;
            curr = next;
            i++;
        }

        for (int j = 1; j < i; j++)
        {
            printf(", %i", fib[j]);
        }
    }
}

int main(void)
{
    int last_num;
    int fib_num;

    printf("Enter a number to be generated in a Fibonacci Sequence: ");
    scanf("%i", &last_num);
    printf("The Fibonacci Sequence up to %i is: ", last_num);
    FiboSeq_Last(last_num);
    printf("\nEnter how many numbers will be generated in a Fibonacci Sequence: ");
    scanf("%i", &fib_num);
    printf("The Fibonacci Sequence with %i numbers is: ", fib_num);
    FiboSeq(fib_num);
}