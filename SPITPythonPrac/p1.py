from random import shuffle, randint

def main():
    from random import randint
    ans = randint(1,100)
    num = int(input("Enter a number between 1 and 100: "))
    diff = abs(ans - num)
    if num > 100 or num <= 0:
        print("OUT OF BOUNDS!")
    elif diff > 10:
        print("COLD!")
    else:
        print("WARM!")
    c = 2
    num = (int(input("Enter a number between 1 and 100: ")))
    while ans != num:
        newDiff = abs(ans - num)
        if newDiff > diff:
            diff = newDiff
            print("COLDER!")
        else:
            diff = abs(ans - num)
            print("WARMER!")
        c += 1
        num = (int(input("Enter a number between 1 and 100: ")))
    print("CORRECT ANSWER in {} number of guesses".format(c))

main()