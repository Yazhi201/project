
from operator import floordiv, mod

def divide_exact(n, d):
    """
    >>> q, r = divide_exact(2013, 10)
    >>> q
    201
    >>> r
    3

    """
    return floordiv(n, d), mod(n, d)


if x < 0:
    return -x
elif x == 0:
    return 0
else:
    return x;


q, r = divide_exact(2013, 10)
print (q)
print (r)
