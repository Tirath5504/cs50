# Week 6 - Python - Practise Problems

# Importing get_string from cs50 to get input
from cs50 import get_string

def main():

    # Getting Input
    input = get_string("Input: ")

    # Checking the condition
    if "Hello" in input:
        print("$0")
    elif input[0] in "H":
        print("$20")
    else:
        print("$100")

main()