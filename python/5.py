import math

answer = 1
for i in range(1, 21):
    answer *= i // math.gcd(answer, i)

print(answer)