def trace1(fn):
    def traced(x):
        print('calling', fn, 'on argument ', x)
        return fn(x)
    return traced

# @trace1
def square(x):
    return x * x
square = trace1(square)


@trace1
def sum_squares_up_to(n):
    k = 1
    total = 0
    while k <= n:
        total, k = total + square(k), k + 1
    return total



