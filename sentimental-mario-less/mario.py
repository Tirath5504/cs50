from cs50 import get_int

# Getting input, height, from the user
while True:
    height = get_int("Height: ")
    if height > 0 and height < 9:
        break

# Printing desired pattern
cpy = height
for i in range(height):
    j = 1
    while j < cpy:
        print(" ", end="")
        j += 1
    while j >= cpy and j <= height:
        print("#", end="")
        j += 1
    cpy -= 1
    print("")