from cs50 import get_string

# Getting number input from user
while True:
    number = get_string("Number: ")
    if number.isnumeric():
        break

# Checking which company does the card belong to
c = 0
length = len(number)
match length:

    # Checking if it is American Express card
    case 15:
        if ((number[0] == '3') and (number[1] == '4' or number[1] == '7')):
            c = 1

    # Checking if it is MasterCard card
    case 16:
        if ((number[0] == '5') and (number[1] == '1' or number[1] == '2' or number[1] == '3' or number[1] == '4' or number[1] == '5')):
            c = 2

        # Checking if it Visa card
        elif (number[0] == '4'):
            c = 3

    # Checking if it is Visa card
    case 13:
        if (number[0] == '4'):
            c = 3

    # Default Case
    case _:
        c = 0

# Checking if number is legit
n = int(number)
cpy = n // 10
sum1 = 0
sum2 = 0
while n > 0:
    n1 = (cpy % 10) * 2
    while n1 > 0:
        sum1 = sum1 + (n1 % 10)
        n1 = n1 // 10
    cpy = cpy // 100
    sum2 = sum2 + (n % 10)
    n = n // 100

# Printing output
if (((sum1 + sum2) % 10) == 0):
    match c:a
        case 1:
            print("AMEX")
        case 2:
            print("MASTERCARD")
        case 3:
            print("VISA")
        case 0:
            print("INVALID")
        case _:
            print("INVALID")
else:
    print("INVALID")