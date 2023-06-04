from cs50 import get_float

# Getting input, change, from user
while True:
    change = get_float("Change owed: ")
    if change > 0:
        break

# Calculating number of coins required
cash = change * 100
quaters = 0
dimes = 0
nickels = 0
pennies = 0
while cash >= 25:
    cash = cash - 25
    quaters += 1
while cash >= 10:
    cash = cash - 10
    dimes += 1
while cash >= 5:
    cash = cash - 5
    nickels += 1
while cash != 0:
    cash = cash - 1
    pennies += 1

# Printing output
print(quaters + dimes + nickels + pennies)