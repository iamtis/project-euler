#gives the right answer in the end but because of the sqrt() rounding it is off by one before correction

import math

def isprime(number):
    for i in range(2, int(math.ceil(math.sqrt(number)))):
        if number % i == 0:
            return False
    return True

i = 2
prime_count = 0
while True:
    if prime_count == 10001:
        break
    elif isprime(i) == True:
        prime_count += 1
        i += 1
    else:
        i += 1
print(i - 1)