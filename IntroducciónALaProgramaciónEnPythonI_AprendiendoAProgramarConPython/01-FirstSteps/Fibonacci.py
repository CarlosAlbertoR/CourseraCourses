def fib(n):
    """Write the Fibonacci series the first n terms."""
    a, b, c = 0, 1, 0
    while c <= 35:
        print(a, end=' ')
        a, b = b, a+b
        c+=1
    print()

print(fib(35))
