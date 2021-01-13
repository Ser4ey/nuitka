from numba import njit, np
from random import randint
from numba.typed import List


@njit(fastmath=True)
def gen_A(leng, r1, r2):
    A = [randint(r1, r2) for i in range(leng)]
    return A





@njit(fastmath=True)
def A1(A):
    return A[0]



@njit
def foo(A):
    return A[0]



A = [1, 2, 3]
typed_a = List()
[typed_a.append(x) for x in A]

print(foo(typed_a))


#
# A = gen_A(10, 1, 2)
#
# print(A)