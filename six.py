# Using the ‘switch case’ write a program to accept an input number from the user and output the day as follows.

num = int(input("Enter a number\n"))


def week(i):
    switcher = {
        1: 'Sunday',
        2: 'Monday',
        3: 'Tuesday',
        4: 'Wednesday',
        5: 'Thursday',
        6: 'Friday',
        7: 'Saturday'
    }
    return switcher.get(i, "Invalid Entry")


print(week(num))
