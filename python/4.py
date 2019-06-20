largest = 0
for i in range(999, 2, -1):
    for j in range(999, 2, -1):
        n = i * j
        if str(n)[:3] == str(n)[-1:2:-1]:
            if n > largest:
                largest = n
                break
print(largest)