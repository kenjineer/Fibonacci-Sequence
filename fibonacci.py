def FiboSeq_Last(last_num):
    prev = 0
    curr = 1
    next = 1
    fib = [prev]

    if (last_num != 0):
        while (last_num >= curr):
            fib.append(next)
            next = prev + curr
            prev = curr
            curr = next
        return fib

def FiboSeq(fib_num):
    prev = 0
    curr = 1
    next = 1
    i = 1
    fib = [prev]

    if (fib_num != 0):
        while (fib_num > i):
            fib.append(next)
            next = prev + curr
            prev = curr
            curr = next
            i = i + 1
        return fib

last_num = int(input("Enter a number to be generated in a Fibonacci Sequence: "))
print("The Fibonacci Sequence up to", last_num, " is:", ', '.join(map(str, FiboSeq_Last(last_num))))
fib_num = int(input("Enter how many numbers will be generated in a Fibonacci Sequence: "))
print("The Fibonacci Swquence with", fib_num, "numbers is:", ', '.join(map(str, FiboSeq(fib_num))))