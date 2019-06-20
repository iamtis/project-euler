sum_of_squares = 0
square_of_sum = 0

for i in range(1, 100):
    sum_of_squares += i * i
    
for j in range(1, 100):
    square_of_sum += j
    
square_of_sum = square_of_sum * square_of_sum

print(square_of_sum - sum_of_squares)