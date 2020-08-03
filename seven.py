# Write a program to print the multiplication table of given numbers.

num = int(input("Enter a number:\n"))

for i in range(11):
    mul = num * i
    print(i, "x", num, "=", mul)
