#include <stdio.h>

void FiboSeq_Last(int last_num)
{
    int prev = 0;
    int curr = 1;
    int next = 1;

    printf("%i", prev);

    if (last_num != 0)
    {
        while (last_num >= curr)
        {
            printf(", %i", next);
            next = prev + curr;
            prev = curr;
            curr = next;
        }
    }
}

void FiboSeq(int fib_num)
{
    int prev = 0;
    int curr = 1;
    int next = 1;
    int i = 1;

    printf("%i", prev);

    if (fib_num != 0)
    {
        while (fib_num > i)
        {
            printf(", %i", next);
            next = prev + curr;
            prev = curr;
            curr = next;
            i++;
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