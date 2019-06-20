import math

number = 600851475143
        
list_of_factors = []
for i in range(2, int(math.sqrt(number))):
    if number % i == 0:
        list_of_factors.append(i)

for factor in list_of_factors[-1::-1]:
    if factor % list_of_factors[0] != 0:
        print(factor)
        break