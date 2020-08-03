# Write a program to find the simple interest.

P = int(input("Enter the Principal amount:\n"))
R = float(input("Interest rate:\n"))
n = float(input("Number of years:\n"))
SI = (P*R*n)/100

print("Simple Interest:", str(SI))
