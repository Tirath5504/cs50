from cs50 import get_int

# Getting input, height, from the user
while True:
    height = get_int("Height: ")
    if height > 0 and height < 9:
        break

# Printing desired pattern
cpy1 = height
cpy2 = height
for i in range(height):

    # Printing first part of pattern
    j = 1
    while j < cpy1:
        print(" ", end="")
        j += 1
    while j >= cpy1 and j <= height:
        print("#", end="")
        j += 1
    cpy1 -= 1
    print("  ", end="")

    # Printing second part of pattern
    k = height
    while k <= cpy2:
        print("#", end="")
        k += 1
    cpy2 += 1
    print("")