first_number = 1
second_number = 1
sum_of_fibonacci_sequence = 0

while second_number <= 4000000:
    temp = second_number
    second_number = first_number + second_number
    first_number = temp
    if second_number % 2 == 0:
        sum_of_fibonacci_sequence += second_number
    
print(sum_of_fibonacci_sequence)