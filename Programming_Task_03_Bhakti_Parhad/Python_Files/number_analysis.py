n = int(input("Enter N: "))

total = 0
even = 0
odd = 0

for i in range(1, n + 1):
    total += i

    if i % 2 == 0:
        even += 1
    else:
        odd += 1

print("Sum =", total)
print("Even Numbers =", even)
print("Odd Numbers =", odd)