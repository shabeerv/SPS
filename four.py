# Write a program to check whether a student has passed or failed in a subject after he or she enters their mark (pass mark for a subject is 50 out of 100).

mark = float(input("Enter the mark:\n"))

if mark >= 50:
    print("Passed")
else:
    print("Failed")
