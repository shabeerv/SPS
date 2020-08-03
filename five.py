# Write a program to show the grade obtained by a student after he/she enters their total mark percentage.

totalMark = float(input("Enter the mark:\n"))

if totalMark >= 90:
    grade = 'Grade A'
    print(grade)
elif totalMark >= 80:
    grade = 'Grade B'
    print(grade)
elif totalMark >= 70:
    grade = 'Grade C'
    print(grade)
elif totalMark >= 60:
    grade = 'Grade D'
    print(grade)
elif totalMark >= 50:
    grade = 'Grade E'
    print(grade)
elif totalMark < 50:
    print("Failed")
else:
    print("Invalid!")