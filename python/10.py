#is prime function has a rounding error because of the sqrt() and has to be corrected in the end.

import math

def isprime(number):
    for i in range(2, int(math.sqrt(number)) + 1):
        if number % i == 0:
            return False
    return True

sum = 0
for i in range(2000000):
    if isprime(i) == True:
        sum += i
print(sum - 1)