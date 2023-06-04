from random import shuffle, randint

def main():
    
"""
    listcomp()
    rand()
    loops()
    conditionals()
    sets()
    dictionaries()
    tuples()
    functions()
    lists()
    string()
    number()
    formatString()
"""

"""
def string():
    name = "Tirath Bhathawala"
    clg = " DJ Sanghvi"
    print(name)
    print(type(name))
    print(name[2:5])
    print(len(name))
    print(name[:4])
    print(name[3:])
    print(name[-1])
    print(name[2:-2])
    print(name[2:9:2])
    print(name[::-1])
    print(name + clg)
    print(name.split())
    print(name.split('w'))

def number():
    num = 5**3
    n = 6*2.656
    print(num)
    print("Number: %4.2f", n)
    print("This is a {a} and {a}".format(a = "Cat"))
    print("{0:8} | {1:9}".format("Fruit", "Quantity"))
    print("{0:8} | {1:9}".format("Apples", 5))
    print("{0:<8} | {1:^9} | {2:>9}".format("Left", "Centre", "Right"))
    print("{0:-<8} | {1:=^9} | {2:.>9}".format("Left", "Centre", "Right"))


def formatString():
    name = "Tirath"
    print(f"My name is {name}")

def lists():
    l1 = [1, 2, "Hello", "World"]
    print(l1)
    print(l1[1:])
    l1.append("Tirath")
    print(l1)
    a = l1.pop(2)
    print(a)
    print(l1)
    print(l1.pop())

def functions():
    l1 = ["a", "z", "d", "c"]
    l2 = [1,2,3]
    l3 = [4,5,6]
    l4 = [7,8,9]
    l = [l2,l3,l4]
    l1.sort()
    print(l1)
    l1.reverse()
    print(l1)
    print(l)
    print(l[2])
    print(l[1][2])
    l5 = [x[0] for x in l]
    print(l5)

def tuples():
    # Tuples are immutable lists(cannot be changed).
    t = (1, 2, "Tirath", 2, "Hello")
    print(t)
    print(len(t))
    print(t[-1])
    print(t.index("Tirath"))
    print(t.count(2))
"""

"""
def dictionaries():
    my_dict = {"key1": "hello", "key2": [1,2,3,4], "key3": 3}
    print(my_dict["key3"])
    print(my_dict["key2"][2])
    print(my_dict["key1"].upper())
    my_dict["key4"] = {"nestkey1": 4, "nestkey2": 5}
    print(my_dict["key4"]["nestkey2"])
    print(my_dict.keys())
    print(my_dict.values())
    print(my_dict.items())
    print(my_dict.update())
"""

"""
def sets():
    l = [1,2,3,4,1]
    x = set()
    x.add(1)
    x.add(2)
    x.add(1)
    print(x)
    x = set(l)
    print(x)
"""

"""
def conditionals():
    if 3 < 2:
        print("{a} is greater than {b}".format(a=2,b=3))
    elif 3 > 2:
        print("{a} is less than {b}".format(a=2,b=3))
"""

"""
def loops():
    list1 = [1,2,7,4,5,6]

    for i in range(2, 11):
        print("{} - HELLO".format(i))
    for i in list1:
        print(f"{i} - HELLO")

    x = 0
    while x < 10:
        if x%2 == 0:
            x += 1
            continue
        print(x)
        x += 1

    print(min(list1))
    print(max(list1))
    print(sum(list1))
"""

"""
def rand():
    l = [1,2,3,4,5,6]
    shuffle(l)
    print(l)
    print(randint(0,100))
"""

"""
def listcomp():
    l1 = [(x+1)**2 for x in range(10)]
    print(l1)
    l2 = [x for x in range(0,10,2)]
    print(l2)
    l3 = [x*2 for x in range(0,10)]
    print(l3)
    l4 = [x for x in range(1,11) if x%2 == 0]
    print(l4)
"""

main()