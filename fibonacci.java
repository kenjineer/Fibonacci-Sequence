import java.util.Scanner;

public class fibonacci {
    public static void FibSeq_Last(int last_num) {
        int prev = 0;
        int curr = 1;
        int next = 1;

        System.out.print(prev);

        if (last_num != 0) {
            while (last_num >= curr) {
                System.out.print(", " + next);
                next = prev + curr;
                prev = curr;
                curr = next;
            }
        }
    }

    public static void FibSeq(int fib_num) {
        int prev = 0;
        int curr = 1;
        int next = 1;
        int i = 1;

        System.out.print(prev);

        if (fib_num != 0) {
            while (fib_num > i) {
                System.out.print(", " + next);
                next = prev + curr;
                prev = curr;
                curr = next;
                i++;
            }
        }
    }

    public static void main(String[] args) {
        int last_num;
        int fib_num;
        Scanner in = new Scanner(System.in);

        System.out.print("Enter a number to be generated in a Fibonacci Sequence: ");
        last_num = in.nextInt();
        System.out.print("The Fibonacci Sequence up to " + last_num + " is: ");
        FibSeq_Last(last_num);
        System.out.print("\nEnter how many numbers will be generated in a Fibonacci Sequence: ");
        fib_num = in.nextInt();
        System.out.print("The Fibonacci Squence with" + fib_num + " numbers is: ");
        FibSeq(fib_num);
        in.close();
    }
}