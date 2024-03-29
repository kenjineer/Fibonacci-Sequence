#include <iostream>
using namespace std;

void FiboSeq_Last(int last_num)
{
    int prev = 0;
    int curr = 1;
    int next = 1;

    cout << prev;

    if (last_num != 0)
    {
        while (last_num >= curr)
        {
            cout << ", " << next;
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

    cout << prev;

    if (fib_num != 0)
    {
        while (fib_num > i)
        {
            cout << ", " << next;
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

    cout << "Enter a number to be generated in a Fibonacci Sequence: ";
    cin >> last_num;
    cout << "The Fibonacci Sequence up to " << last_num << " is: ";
    FiboSeq_Last(last_num);
    cout << "\nEnter how many numbers will be generated in a Fibonacci Sequence: ";
    cin >> fib_num;
    cout << "The Fibonacci Sequence with " << fib_num << " numbers is: ";
    FiboSeq(fib_num);
}