from cs50 import get_string

# Main function


def main():
    text = get_input()
    letters = letter(text)
    words = word(text)
    sentences = sentence(text)
    index = ind(letters, words, sentences)
    output(index)

# Getting input, text, from user


def get_input():
    return get_string("Text: ")

# Counting Letters


def letter(text):
    count = 0
    for c in text:
        if c.isalpha():
            count += 1
    return count

# Counting Words


def word(text):
    count = 1
    for c in text:
        if c == " ":
            count += 1
    return count

# Counting Sentences


def sentence(text):
    count = 0
    for c in text:
        if c == "." or c == "?" or c == "!":
            count += 1
    return count

# Calculating Index


def ind(letters, words, sentences):
    index = (5.88 * (letters / words)) - (29.6 * (sentences / words)) - (15.8)
    return round(index)

# Printing Output


def output(index):
    if index >= 1 and index <= 16:
        print(f"Grade {index}")
    elif index > 16:
        print("Grade 16+")
    else:
        print("Before Grade 1")


# Calling main function
main()