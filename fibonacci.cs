using System;
public class Fibonacci
{
    public static void FibSeq_Last(int last_num)
    {
        int prev = 0;
        int curr = 1;
        int next = 1;

        Console.Write(prev);

        if (last_num != 0)
        {
            while (last_num >= curr)
            {
                Console.Write(", " + next);
                next = prev + curr;
                prev = curr;
                curr = next;
            }
        }
    }

    public static void FibSeq(int fib_num)
    {
        int prev = 0;
        int curr = 1;
        int next = 1;
        int[] fib = new int[100];
        int  i = 1;

        Console.Write(prev);

        if (fib_num != 0)
        {
            while (fib_num > i)
            {
                Console.Write(", " + next);
                next = prev + curr;
                prev = curr;
                curr = next;
                i++;
            }
        }
    }

    public static void Main()
    {
        int last_num;
        int fib_num;

        Console.Write("Enter a number to be generated in a Fibonacci Sequence: ");
        last_num = int.Parse(Console.ReadLine());
        Console.Write("The Fibonacci Sequence up to " + last_num + " is: ");
        FibSeq_Last(last_num);
        Console.Write("\nEnter how many numbers will be generated in a Fibonacci Sequence: ");
        fib_num = int.Parse(Console.ReadLine());
        Console.Write("The Fibonacci Squence with" + fib_num + " numbers is: ");
        FibSeq(fib_num);
    }
}

Fibonacci.Main();